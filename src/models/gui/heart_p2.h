//
// Displaylist generated by OBJN64 
// Input: heart_p2.h
//

unsigned short Text_heart_p2_gui_diff[] = {
0x4afd, 0x4afd, 0x4afd, 0xffc3, 0xffc3, 0xffc3, 0x0001, 0x0001, 0x4afd, 0xbe3f, 0x4afd, 0xffc3, 0xfff5, 
0xffc3, 0x0001, 0x0001, 0x4afd, 0x4afd, 0x4afd, 0xffc3, 0xffc3, 0xffc3, 0x0001, 0x0001, 0xeb81, 0xeb81, 
0xeb81, 0xf82d, 0xf82d, 0xf82d, 0x0001, 0x0001, 0xeb81, 0xfe67, 0xeb81, 0xf82d, 0xfcf7, 0xf82d, 0x0001, 
0x0001, 0xeb81, 0xeb81, 0xeb81, 0xf82d, 0xf82d, 0xf82d, 0x0001, 0x0001, 0xfb19, 0xfb19, 0xfb19, 0xfb19, 
0xfb19, 0xfb19, 0xfb19, 0xfb19, 0xd001, 0xd001, 0xf001, 0xf001, 0xf98d, 0xf98d, 0xfb19, 0xfb19, }; 

Vtx_tn Vtx_heart_p2_heart_p2_Plane_0[16] = {
{     2,    -21,      6, 0,      0,      0, 204, 204, 204, 255},
{     2,    -23,      0, 0,      0,      0, 204, 204, 204, 255},
{     0,    -22,      0, 0,      0,      0, 204, 204, 204, 255},
{     0,    -18,      7, 0,      0,      0, 204, 204, 204, 255},
{     2,    -29,      9, 0,      0,      0, 204, 204, 204, 255},
{     2,    -23,     10, 0,      0,      0, 204, 204, 204, 255},
{     0,    -22,     11, 0,      0,      0, 204, 204, 204, 255},
{     0,    -30,     10, 0,      0,      0, 204, 204, 204, 255},
{     4,    -39,      0, 0,      0,      0, 204, 204, 204, 255},
{     0,    -43,      0, 0,      0,      0, 204, 204, 204, 255},
{     2,    -21,     -6, 0,      0,      0, 204, 204, 204, 255},
{     0,    -18,     -7, 0,      0,      0, 204, 204, 204, 255},
{     2,    -29,     -9, 0,      0,      0, 204, 204, 204, 255},
{     0,    -30,    -10, 0,      0,      0, 204, 204, 204, 255},
{     0,    -22,    -11, 0,      0,      0, 204, 204, 204, 255},
{     2,    -23,    -10, 0,      0,      0, 204, 204, 204, 255},
};

Gfx Vtx_heart_p2_heart_p2_Plane_dl[] = {
	gsSPVertex(&Vtx_heart_p2_heart_p2_Plane_0[0], 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(0, 5, 4, 0, 0, 4, 1, 0),
	gsSP2Triangles(5, 0, 3, 0, 5, 3, 6, 0),
	gsSP2Triangles(8, 4, 7, 0, 8, 7, 9, 0),
	gsSP2Triangles(1, 4, 8, 0, 10, 11, 2, 0),
	gsSP2Triangles(10, 2, 1, 0, 12, 13, 14, 0),
	gsSP2Triangles(12, 14, 15, 0, 10, 1, 12, 0),
	gsSP2Triangles(10, 12, 15, 0, 15, 14, 11, 0),
	gsSP2Triangles(15, 11, 10, 0, 8, 9, 13, 0),
	gsSP2Triangles(8, 13, 12, 0, 1, 8, 12, 0),
	gsSPEndDisplayList(),
};

Gfx Wtx_heart_p2[] = {
	gsDPLoadTextureBlock(Text_heart_p2_gui_diff, G_IM_FMT_RGBA, G_IM_SIZ_16b, 
		8,8, 0, G_TX_WRAP|G_TX_NOMIRROR, G_TX_WRAP|G_TX_NOMIRROR,
		3,3, G_TX_NOLOD, G_TX_NOLOD),
	gsSPDisplayList(Vtx_heart_p2_heart_p2_Plane_dl),
	gsSPEndDisplayList(),
};

