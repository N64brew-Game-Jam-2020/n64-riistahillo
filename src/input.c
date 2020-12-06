#include "input.h"

#include <nusys.h>
#include "game_state.h"
#include "audio.h"
#include "globals.h"

void updateGameInput(struct ProgramState* programState) {
    int i;
    for(i = 0; i < 4; ++i) {
        Player* player = &programState->gameState.players[i];
        if (player->health > 0) {
            updatePlayerInput(programState, player);
        }
    }
}

void updatePlayerInput(struct ProgramState* programState, struct Player* player) {
    static NUContData controllerData;

    nuContDataGetEx(&controllerData, player->index);

    // Values 61 and 63 based on nusys.h
    player->movementControl = (Vec2f) {
        controllerData.stick_x / 61.0f,
        controllerData.stick_y / 63.0f
    };

    player->movementControl.x = clamp(player->movementControl.x, -1, +1);
    player->movementControl.y = clamp(player->movementControl.y, -1, +1);

    if (controllerData.button & B_BUTTON) {
        VerletBody* character = player_getCharacter(player);
        character->isStatic = TRUE;
        character->oldPosition = character->position;
    } else {
        player_getCharacter(player)->isStatic = FALSE;
    }

    if (controllerData.button & A_BUTTON) {
        VerletBody* boulder = player_getBoulder(player);
        boulder->isStatic = TRUE;
        boulder->oldPosition = boulder->position;
    } else {
        player_getBoulder(player)->isStatic = FALSE;
    }

    if (controllerData.trigger & START_BUTTON) {
        programState->activeScreen = END;
    }

    if(controllerData.trigger & A_BUTTON) {
        sndHandle = nuAuStlSndPlayerPlay(SND_DRUM);
    }
}

void updateMenuInput(struct ProgramState* programState) {
    GameConfig* gameConfig = &programState->gameConfig;
    static NUContData controllerData;
    nuContDataGetEx(&controllerData, 0);

    if (controllerData.trigger & L_JPAD && gameConfig->playerCount > 1) {
        gameConfig->playerCount--;
    }
    else if (controllerData.trigger & R_JPAD && gameConfig->playerCount < 4) {
        gameConfig->playerCount++;
    }
    else if (controllerData.trigger & U_JPAD) {
        gameConfig->gameMode = SURVIVAL;
    }
    else if (controllerData.trigger & D_JPAD) {
        gameConfig->gameMode = BATTLE;
    }
    if(gameConfig->playerCount == 1 && gameConfig->gameMode == BATTLE) {
        gameConfig->playerCount = 2;
    }
    if (controllerData.trigger & A_BUTTON) {
        programState->activeScreen = LOADING;
    }
}

void updateEndInput(struct ProgramState* programState) {
    static NUContData controllerData;
    nuContDataGetEx(&controllerData, 0);

    if (controllerData.trigger & A_BUTTON) {
        programState->activeScreen = MENU;
    }
}