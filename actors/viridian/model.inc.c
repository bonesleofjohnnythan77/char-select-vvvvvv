Lights1 viridian_Cap__CAP__lights = gdSPDefLights1(
	0x3A, 0x59, 0x59,
	0x7B, 0xB5, 0xB6, 0x28, 0x28, 0x28);

Lights1 viridian_Metal__METAL__lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 viridian_Metal_Wing_Base__METAL__lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Lights1 viridian_Metal_Wing_Tip__METAL__lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Lights1 viridian_Dead_Eyes__SKIN__lights = gdSPDefLights1(
	0x3A, 0x59, 0x59,
	0x7B, 0xB5, 0xB6, 0x28, 0x28, 0x28);

Texture viridian_viridian_face_rgba16[] = {
	#include "actors/viridian/viridian_face.rgba16.inc.c"
};

Texture viridian_wing1_rgba16[] = {
	#include "actors/viridian/wing1.rgba16.inc.c"
};

Texture viridian_wing_2_rgba16[] = {
	#include "actors/viridian/wing_2.rgba16.inc.c"
};

Texture viridian_Metal_Shade_rgba16_rgba16[] = {
	#include "actors/viridian/Metal_Shade.rgba16.inc.c"
};

Texture viridian_Metal_Light_rgba16_rgba16[] = {
	#include "actors/viridian/Metal_Light.rgba16.inc.c"
};

Texture viridian_custom_mario_metal_wing_shade_rgba16[] = {
	#include "actors/viridian/custom_mario_metal_wing_shade.rgba16.inc.c"
};

Texture viridian_custom_mario_metal_wing_light_rgba16[] = {
	#include "actors/viridian/custom_mario_metal_wing_light.rgba16.inc.c"
};

Texture viridian_custom_mario_metal_wing_tip_shade_rgba16[] = {
	#include "actors/viridian/custom_mario_metal_wing_tip_shade.rgba16.inc.c"
};

Texture viridian_custom_mario_metal_wing_tip_light_rgba16[] = {
	#include "actors/viridian/custom_mario_metal_wing_tip_light.rgba16.inc.c"
};

Texture viridian_viridian_sad_ia8[] = {
	#include "actors/viridian/viridian_sad.ia8.inc.c"
};

Vtx viridian_Butt_mesh_layer_1_vtx_0[17] = {
	{{{9, 37, -54}, 0, {125, 128}, {0xE2, 0x58, 0xAA, 0xFF}}},
	{{{9, -9, -73}, 0, {125, 128}, {0xE3, 0xF9, 0x84, 0xFF}}},
	{{{-6, -6, -72}, 0, {125, 128}, {0x8E, 0x05, 0xC9, 0xFF}}},
	{{{-6, -40, -39}, 0, {125, 128}, {0x93, 0xC7, 0xE0, 0xFF}}},
	{{{9, -47, -54}, 0, {125, 128}, {0xE3, 0xA5, 0xAC, 0xFF}}},
	{{{9, -65, 0}, 0, {125, 128}, {0xCD, 0x8C, 0x00, 0xFF}}},
	{{{-6, -40, 39}, 0, {125, 128}, {0x93, 0xC7, 0x20, 0xFF}}},
	{{{9, -47, 54}, 0, {125, 128}, {0xE3, 0xA5, 0x54, 0xFF}}},
	{{{9, -9, 73}, 0, {125, 128}, {0xE3, 0xF9, 0x7C, 0xFF}}},
	{{{-6, -6, 72}, 0, {125, 128}, {0x8E, 0x05, 0x37, 0xFF}}},
	{{{9, 37, 54}, 0, {125, 128}, {0xE3, 0x58, 0x56, 0xFF}}},
	{{{-6, 28, 38}, 0, {125, 128}, {0x91, 0x33, 0x23, 0xFF}}},
	{{{9, 56, 0}, 0, {125, 128}, {0xD6, 0x78, 0x00, 0xFF}}},
	{{{-8, 38, 1}, 0, {125, 128}, {0x8C, 0x34, 0x01, 0xFF}}},
	{{{-6, 28, -38}, 0, {125, 128}, {0x91, 0x33, 0xDD, 0xFF}}},
	{{{-6, -6, -4}, 0, {125, 128}, {0x81, 0xFF, 0xFF, 0xFF}}},
	{{{-6, -6, 4}, 0, {125, 128}, {0x81, 0xFF, 0x01, 0xFF}}},
};

Gfx viridian_Butt_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_Butt_mesh_layer_1_vtx_0 + 0, 17, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(1, 4, 3, 0, 4, 5, 3, 0),
	gsSP2Triangles(3, 5, 6, 0, 7, 6, 5, 0),
	gsSP2Triangles(8, 6, 7, 0, 8, 9, 6, 0),
	gsSP2Triangles(10, 9, 8, 0, 10, 11, 9, 0),
	gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
	gsSP2Triangles(12, 14, 13, 0, 12, 0, 14, 0),
	gsSP2Triangles(0, 2, 14, 0, 15, 13, 14, 0),
	gsSP2Triangles(13, 15, 16, 0, 3, 16, 15, 0),
	gsSP2Triangles(3, 6, 16, 0, 13, 16, 11, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Torso_skinned_mesh_layer_1_vtx_0[8] = {
	{{{9, 37, -54}, 0, {125, 128}, {0xE2, 0x58, 0xAA, 0xFF}}},
	{{{9, -9, -73}, 0, {125, 128}, {0xE3, 0xF9, 0x84, 0xFF}}},
	{{{9, -65, 0}, 0, {125, 128}, {0xCD, 0x8C, 0x00, 0xFF}}},
	{{{9, -47, -54}, 0, {125, 128}, {0xE3, 0xA5, 0xAC, 0xFF}}},
	{{{9, 56, 0}, 0, {125, 128}, {0xD6, 0x78, 0x00, 0xFF}}},
	{{{9, 37, 54}, 0, {125, 128}, {0xE3, 0x58, 0x56, 0xFF}}},
	{{{9, -9, 73}, 0, {125, 128}, {0xE3, 0xF9, 0x7C, 0xFF}}},
	{{{9, -47, 54}, 0, {125, 128}, {0xE3, 0xA5, 0x54, 0xFF}}},
};

Gfx viridian_Torso_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_Torso_skinned_mesh_layer_1_vtx_0 + 0, 8, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Torso_mesh_layer_1_vtx_0[8] = {
	{{{-5, 36, -43}, 0, {125, 128}, {0xFA, 0x5B, 0xA8, 0xFF}}},
	{{{-5, -7, -61}, 0, {125, 128}, {0x0B, 0xE0, 0x86, 0xFF}}},
	{{{-5, -47, -43}, 0, {126, 128}, {0x09, 0xA6, 0xA7, 0xFF}}},
	{{{-5, -65, 0}, 0, {126, 128}, {0x01, 0x81, 0x00, 0xFF}}},
	{{{-5, -47, 43}, 0, {126, 128}, {0x09, 0xA6, 0x59, 0xFF}}},
	{{{-5, -7, 61}, 0, {125, 128}, {0x0B, 0xE1, 0x7B, 0xFF}}},
	{{{-5, 36, 43}, 0, {125, 128}, {0xFA, 0x5B, 0x58, 0xFF}}},
	{{{-5, 54, 0}, 0, {125, 128}, {0xFC, 0x7F, 0x00, 0xFF}}},
};

Gfx viridian_Torso_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_Torso_mesh_layer_1_vtx_0 + 0, 8, 8),
	gsSP2Triangles(8, 1, 0, 0, 8, 9, 1, 0),
	gsSP2Triangles(9, 3, 1, 0, 9, 10, 3, 0),
	gsSP2Triangles(10, 2, 3, 0, 10, 11, 2, 0),
	gsSP2Triangles(12, 2, 11, 0, 12, 7, 2, 0),
	gsSP2Triangles(13, 7, 12, 0, 13, 6, 7, 0),
	gsSP2Triangles(14, 6, 13, 0, 14, 5, 6, 0),
	gsSP2Triangles(15, 5, 14, 0, 15, 4, 5, 0),
	gsSP2Triangles(15, 0, 4, 0, 15, 8, 0, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Torso_mesh_layer_1_vtx_1[12] = {
	{{{71, -47, -45}, 0, {126, 128}, {0xF8, 0xA5, 0xA8, 0xFF}}},
	{{{-5, -65, 0}, 0, {126, 128}, {0x01, 0x81, 0x00, 0xFF}}},
	{{{-5, -47, -43}, 0, {126, 128}, {0x09, 0xA6, 0xA7, 0xFF}}},
	{{{71, -66, 0}, 0, {126, 128}, {0xFF, 0x81, 0x00, 0xFF}}},
	{{{71, -47, 45}, 0, {126, 127}, {0xF8, 0xA4, 0x57, 0xFF}}},
	{{{-5, -47, 43}, 0, {126, 128}, {0x09, 0xA6, 0x59, 0xFF}}},
	{{{71, 62, 0}, 0, {125, 128}, {0xF9, 0x7F, 0x00, 0xFF}}},
	{{{-5, 36, -43}, 0, {125, 128}, {0xFA, 0x5B, 0xA8, 0xFF}}},
	{{{-5, 54, 0}, 0, {125, 128}, {0xFC, 0x7F, 0x00, 0xFF}}},
	{{{71, 43, -46}, 0, {125, 128}, {0xF7, 0x64, 0xB3, 0xFF}}},
	{{{-5, 36, 43}, 0, {125, 128}, {0xFA, 0x5B, 0x58, 0xFF}}},
	{{{71, 43, 46}, 0, {125, 127}, {0xF7, 0x65, 0x4D, 0xFF}}},
};

Gfx viridian_Torso_mesh_layer_1_tri_1[] = {
	gsSPVertex(viridian_Torso_mesh_layer_1_vtx_1 + 0, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 1, 3, 0, 4, 5, 1, 0),
	gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
	gsSP2Triangles(6, 8, 10, 0, 6, 10, 11, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Head_DL_skinned_mesh_layer_1_vtx_0[8] = {
	{{{71, -2, -64}, 0, {126, 128}, {0xC4, 0xFD, 0x90, 0xFF}}},
	{{{71, 43, -46}, 0, {125, 128}, {0xF7, 0x64, 0xB3, 0xFF}}},
	{{{71, -66, 0}, 0, {126, 128}, {0xFF, 0x81, 0x00, 0xFF}}},
	{{{71, -47, 45}, 0, {126, 127}, {0xF8, 0xA4, 0x57, 0xFF}}},
	{{{71, 62, 0}, 0, {125, 128}, {0xF9, 0x7F, 0x00, 0xFF}}},
	{{{71, 43, 46}, 0, {125, 127}, {0xF7, 0x65, 0x4D, 0xFF}}},
	{{{71, -2, 64}, 0, {126, 127}, {0xC4, 0xFC, 0x70, 0xFF}}},
	{{{71, -47, -45}, 0, {126, 128}, {0xF8, 0xA5, 0xA8, 0xFF}}},
};

Gfx viridian_Head_DL_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_Head_DL_skinned_mesh_layer_1_vtx_0 + 0, 8, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Head_DL_mesh_layer_1_vtx_0[8] = {
	{{{0, 62, 0}, 0, {125, 128}, {0xAE, 0x61, 0xFF, 0xFF}}},
	{{{0, 43, -46}, 0, {125, 128}, {0xAC, 0x43, 0xBC, 0xFF}}},
	{{{0, 43, 46}, 0, {125, 127}, {0xAC, 0x43, 0x44, 0xFF}}},
	{{{0, -1, 64}, 0, {126, 127}, {0xAF, 0x01, 0x62, 0xFF}}},
	{{{0, -47, 46}, 0, {126, 127}, {0xAD, 0xBD, 0x45, 0xFF}}},
	{{{0, -66, 1}, 0, {126, 128}, {0xB0, 0x9E, 0x01, 0xFF}}},
	{{{0, -47, -45}, 0, {126, 128}, {0xAD, 0xBC, 0xBD, 0xFF}}},
	{{{0, -2, -64}, 0, {126, 128}, {0xAF, 0xFF, 0x9E, 0xFF}}},
};

Gfx viridian_Head_DL_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_Head_DL_mesh_layer_1_vtx_0 + 0, 8, 8),
	gsSP2Triangles(1, 8, 9, 0, 1, 4, 8, 0),
	gsSP2Triangles(5, 8, 4, 0, 5, 10, 8, 0),
	gsSP2Triangles(6, 10, 5, 0, 6, 11, 10, 0),
	gsSP2Triangles(3, 11, 6, 0, 3, 12, 11, 0),
	gsSP2Triangles(2, 12, 3, 0, 2, 13, 12, 0),
	gsSP2Triangles(2, 14, 13, 0, 2, 7, 14, 0),
	gsSP2Triangles(7, 15, 14, 0, 7, 0, 15, 0),
	gsSP2Triangles(0, 9, 15, 0, 0, 1, 9, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Head_DL_mesh_layer_1_vtx_1[49] = {
	{{{120, 111, 111}, 0, {276, 128}, {0xFF, 0x5A, 0x5A, 0xFF}}},
	{{{213, 109, 109}, 0, {276, 0}, {0x3A, 0x50, 0x50, 0xFF}}},
	{{{213, 124, 0}, 0, {128, 0}, {0x3A, 0x71, 0x00, 0xFF}}},
	{{{120, 126, 0}, 0, {128, 128}, {0xFF, 0x7F, 0x00, 0xFF}}},
	{{{213, 109, -109}, 0, {-20, 0}, {0x3A, 0x50, 0xB0, 0xFF}}},
	{{{120, 111, -111}, 0, {-20, 128}, {0xFF, 0x5A, 0xA6, 0xFF}}},
	{{{26, 122, 0}, 0, {128, 256}, {0xB8, 0x69, 0x00, 0xFF}}},
	{{{26, 108, -108}, 0, {-20, 256}, {0xBE, 0x4D, 0xB3, 0xFF}}},
	{{{26, 108, 108}, 0, {276, 256}, {0xBE, 0x4D, 0x4D, 0xFF}}},
	{{{26, 0, 122}, 0, {126, 127}, {0xB9, 0x00, 0x69, 0xFF}}},
	{{{120, 111, 111}, 0, {126, 125}, {0xFF, 0x5A, 0x5A, 0xFF}}},
	{{{26, 108, 108}, 0, {125, 126}, {0xBE, 0x4D, 0x4D, 0xFF}}},
	{{{120, 0, 126}, 0, {126, 126}, {0xFF, 0x00, 0x7F, 0xFF}}},
	{{{26, -108, 108}, 0, {126, 127}, {0xBF, 0xB3, 0x4D, 0xFF}}},
	{{{0, -47, 46}, 0, {126, 127}, {0xAD, 0xBD, 0x45, 0xFF}}},
	{{{0, -1, 64}, 0, {126, 127}, {0xAF, 0x01, 0x62, 0xFF}}},
	{{{0, 43, 46}, 0, {125, 127}, {0xAC, 0x43, 0x44, 0xFF}}},
	{{{26, 122, 0}, 0, {124, 127}, {0xB8, 0x69, 0x00, 0xFF}}},
	{{{0, 62, 0}, 0, {125, 128}, {0xAE, 0x61, 0xFF, 0xFF}}},
	{{{26, 108, -108}, 0, {124, 132}, {0xBE, 0x4D, 0xB3, 0xFF}}},
	{{{0, 43, -46}, 0, {125, 128}, {0xAC, 0x43, 0xBC, 0xFF}}},
	{{{26, 0, -122}, 0, {126, 129}, {0xB9, 0x00, 0x97, 0xFF}}},
	{{{120, 0, -126}, 0, {127, 129}, {0xFF, 0x00, 0x81, 0xFF}}},
	{{{120, 111, -111}, 0, {128, 132}, {0xFF, 0x5A, 0xA6, 0xFF}}},
	{{{213, 0, -124}, 0, {128, 128}, {0x3A, 0x00, 0x8F, 0xFF}}},
	{{{213, 109, -109}, 0, {130, 129}, {0x3A, 0x50, 0xB0, 0xFF}}},
	{{{242, 0, -79}, 0, {128, 128}, {0x78, 0x00, 0xD6, 0xFF}}},
	{{{241, 75, -75}, 0, {129, 128}, {0x76, 0x21, 0xDF, 0xFF}}},
	{{{213, 124, 0}, 0, {130, 126}, {0x3A, 0x71, 0x00, 0xFF}}},
	{{{242, 79, 0}, 0, {129, 127}, {0x78, 0x2A, 0x00, 0xFF}}},
	{{{241, 75, 75}, 0, {128, 126}, {0x76, 0x21, 0x21, 0xFF}}},
	{{{213, 109, 109}, 0, {128, 124}, {0x3A, 0x50, 0x50, 0xFF}}},
	{{{213, 0, 124}, 0, {127, 126}, {0x3A, 0x00, 0x71, 0xFF}}},
	{{{120, -111, 111}, 0, {127, 127}, {0xFF, 0xA6, 0x5A, 0xFF}}},
	{{{213, -109, 109}, 0, {127, 127}, {0x3A, 0xB0, 0x50, 0xFF}}},
	{{{120, -126, 0}, 0, {127, 127}, {0xFF, 0x81, 0x00, 0xFF}}},
	{{{26, -122, 0}, 0, {126, 128}, {0xB9, 0x96, 0x00, 0xFF}}},
	{{{0, -66, 1}, 0, {126, 128}, {0xB0, 0x9E, 0x01, 0xFF}}},
	{{{0, -47, -45}, 0, {126, 128}, {0xAD, 0xBC, 0xBD, 0xFF}}},
	{{{26, -108, -108}, 0, {126, 128}, {0xBF, 0xB3, 0xB3, 0xFF}}},
	{{{0, -2, -64}, 0, {126, 128}, {0xAF, 0xFF, 0x9E, 0xFF}}},
	{{{120, -111, -111}, 0, {127, 128}, {0xFF, 0xA6, 0xA6, 0xFF}}},
	{{{213, -109, -109}, 0, {127, 128}, {0x3A, 0xB0, 0xB0, 0xFF}}},
	{{{241, -75, -75}, 0, {128, 128}, {0x76, 0xDF, 0xDF, 0xFF}}},
	{{{250, 0, 0}, 0, {128, 127}, {0x7F, 0x00, 0x00, 0xFF}}},
	{{{242, 0, 79}, 0, {128, 126}, {0x78, 0x00, 0x2A, 0xFF}}},
	{{{241, -75, 75}, 0, {127, 127}, {0x76, 0xDF, 0x21, 0xFF}}},
	{{{213, -124, 0}, 0, {127, 127}, {0x3A, 0x8F, 0x00, 0xFF}}},
	{{{242, -79, 0}, 0, {127, 127}, {0x78, 0xD6, 0x00, 0xFF}}},
};

Gfx viridian_Head_DL_mesh_layer_1_tri_1[] = {
	gsSPVertex(viridian_Head_DL_mesh_layer_1_vtx_1 + 0, 49, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 3, 5, 0, 6, 5, 7, 0),
	gsSP2Triangles(8, 3, 6, 0, 8, 0, 3, 0),
	gsSP2Triangles(9, 10, 11, 0, 9, 12, 10, 0),
	gsSP2Triangles(13, 12, 9, 0, 9, 14, 13, 0),
	gsSP2Triangles(9, 15, 14, 0, 16, 15, 9, 0),
	gsSP2Triangles(16, 9, 11, 0, 17, 16, 11, 0),
	gsSP2Triangles(17, 18, 16, 0, 19, 18, 17, 0),
	gsSP2Triangles(19, 20, 18, 0, 21, 20, 19, 0),
	gsSP2Triangles(19, 22, 21, 0, 19, 23, 22, 0),
	gsSP2Triangles(23, 24, 22, 0, 23, 25, 24, 0),
	gsSP2Triangles(25, 26, 24, 0, 25, 27, 26, 0),
	gsSP2Triangles(28, 27, 25, 0, 28, 29, 27, 0),
	gsSP2Triangles(30, 29, 28, 0, 30, 28, 31, 0),
	gsSP2Triangles(32, 30, 31, 0, 12, 32, 31, 0),
	gsSP2Triangles(12, 31, 10, 0, 33, 32, 12, 0),
	gsSP2Triangles(33, 34, 32, 0, 35, 34, 33, 0),
	gsSP2Triangles(36, 35, 33, 0, 36, 33, 13, 0),
	gsSP2Triangles(13, 33, 12, 0, 14, 36, 13, 0),
	gsSP2Triangles(14, 37, 36, 0, 36, 37, 38, 0),
	gsSP2Triangles(36, 38, 39, 0, 38, 21, 39, 0),
	gsSP2Triangles(38, 40, 21, 0, 21, 40, 20, 0),
	gsSP2Triangles(21, 41, 39, 0, 21, 22, 41, 0),
	gsSP2Triangles(22, 42, 41, 0, 22, 24, 42, 0),
	gsSP2Triangles(24, 43, 42, 0, 24, 26, 43, 0),
	gsSP2Triangles(43, 26, 44, 0, 26, 29, 44, 0),
	gsSP2Triangles(26, 27, 29, 0, 44, 29, 30, 0),
	gsSP2Triangles(44, 30, 45, 0, 32, 45, 30, 0),
	gsSP2Triangles(34, 45, 32, 0, 34, 46, 45, 0),
	gsSP2Triangles(47, 46, 34, 0, 35, 47, 34, 0),
	gsSP2Triangles(41, 47, 35, 0, 39, 41, 35, 0),
	gsSP2Triangles(39, 35, 36, 0, 41, 42, 47, 0),
	gsSP2Triangles(43, 47, 42, 0, 43, 48, 47, 0),
	gsSP2Triangles(43, 44, 48, 0, 48, 44, 45, 0),
	gsSP2Triangles(48, 45, 46, 0, 47, 48, 46, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Left_Wing_DL_mesh_layer_4_vtx_0[4] = {
	{{{-103, 212, -18}, 0, {-16, -34}, {0xE9, 0x00, 0x7D, 0xFF}}},
	{{{0, 0, 0}, 0, {974, 1978}, {0xE9, 0x00, 0x7D, 0xFF}}},
	{{{0, 212, 0}, 0, {974, -34}, {0xE9, 0x00, 0x7D, 0xFF}}},
	{{{-103, 0, -19}, 0, {-16, 1978}, {0xE9, 0x00, 0x7D, 0xFF}}},
};

Gfx viridian_Left_Wing_DL_mesh_layer_4_tri_0[] = {
	gsSPVertex(viridian_Left_Wing_DL_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Left_Wing_DL_mesh_layer_4_vtx_1[4] = {
	{{{0, 0, 0}, 0, {-16, 1978}, {0xE9, 0x00, 0x7D, 0xFF}}},
	{{{104, 0, 19}, 0, {974, 1978}, {0xE9, 0x00, 0x7D, 0xFF}}},
	{{{104, 212, 19}, 0, {974, -34}, {0xE9, 0x00, 0x7D, 0xFF}}},
	{{{0, 212, 0}, 0, {-16, -34}, {0xE9, 0x00, 0x7D, 0xFF}}},
};

Gfx viridian_Left_Wing_DL_mesh_layer_4_tri_1[] = {
	gsSPVertex(viridian_Left_Wing_DL_mesh_layer_4_vtx_1 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Right_Wing_DL_mesh_layer_4_vtx_0[4] = {
	{{{-103, 212, 18}, 0, {-16, -34}, {0x17, 0x00, 0x7D, 0xFF}}},
	{{{0, 0, 0}, 0, {974, 1978}, {0x17, 0x00, 0x7D, 0xFF}}},
	{{{0, 212, 0}, 0, {974, -34}, {0x17, 0x00, 0x7D, 0xFF}}},
	{{{-103, 0, 19}, 0, {-16, 1978}, {0x17, 0x00, 0x7D, 0xFF}}},
};

Gfx viridian_Right_Wing_DL_mesh_layer_4_tri_0[] = {
	gsSPVertex(viridian_Right_Wing_DL_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Right_Wing_DL_mesh_layer_4_vtx_1[4] = {
	{{{0, 0, 0}, 0, {-16, 1978}, {0x17, 0x00, 0x7D, 0xFF}}},
	{{{104, 0, -19}, 0, {974, 1978}, {0x17, 0x00, 0x7D, 0xFF}}},
	{{{104, 212, -19}, 0, {974, -34}, {0x17, 0x00, 0x7D, 0xFF}}},
	{{{0, 212, 0}, 0, {-16, -34}, {0x17, 0x00, 0x7D, 0xFF}}},
};

Gfx viridian_Right_Wing_DL_mesh_layer_4_tri_1[] = {
	gsSPVertex(viridian_Right_Wing_DL_mesh_layer_4_vtx_1 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Left_Arm_Color_skinned_mesh_layer_1_vtx_0[6] = {
	{{{71, -2, 64}, 0, {126, 127}, {0xC4, 0xFC, 0x70, 0xFF}}},
	{{{71, 43, 46}, 0, {125, 127}, {0xF7, 0x65, 0x4D, 0xFF}}},
	{{{-5, 36, 43}, 0, {125, 128}, {0xFA, 0x5B, 0x58, 0xFF}}},
	{{{-5, -7, 61}, 0, {125, 128}, {0x0B, 0xE1, 0x7B, 0xFF}}},
	{{{71, -47, 45}, 0, {126, 127}, {0xF8, 0xA4, 0x57, 0xFF}}},
	{{{-5, -47, 43}, 0, {126, 128}, {0x09, 0xA6, 0x59, 0xFF}}},
};

Gfx viridian_Left_Arm_Color_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_Left_Arm_Color_skinned_mesh_layer_1_vtx_0 + 0, 6, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Left_Arm_Color_mesh_layer_1_vtx_0[5] = {
	{{{-11, -6, -38}, 0, {125, 128}, {0xBD, 0xDF, 0x99, 0xFF}}},
	{{{-11, 37, -15}, 0, {132, 131}, {0xA0, 0x53, 0xFF, 0xFF}}},
	{{{-10, -22, 7}, 0, {125, 127}, {0xD3, 0xCF, 0x6C, 0xFF}}},
	{{{-11, 17, 28}, 0, {126, 127}, {0xC8, 0x20, 0x6D, 0xFF}}},
	{{{-11, 37, -15}, 0, {126, 127}, {0xA0, 0x53, 0xFF, 0xFF}}},
};

Gfx viridian_Left_Arm_Color_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_Left_Arm_Color_mesh_layer_1_vtx_0 + 0, 5, 6),
	gsSP2Triangles(6, 3, 7, 0, 2, 3, 6, 0),
	gsSP2Triangles(8, 2, 6, 0, 8, 1, 2, 0),
	gsSP2Triangles(0, 1, 8, 0, 9, 0, 8, 0),
	gsSP2Triangles(10, 0, 9, 0, 10, 4, 0, 0),
	gsSP2Triangles(10, 5, 4, 0, 5, 10, 3, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Left_Arm_Color_mesh_layer_1_vtx_1[12] = {
	{{{6, 19, 29}, 0, {132, 130}, {0xFB, 0x2C, 0x77, 0xFF}}},
	{{{-11, 17, 28}, 0, {132, 129}, {0xC8, 0x20, 0x6D, 0xFF}}},
	{{{-10, -22, 7}, 0, {130, 129}, {0xD3, 0xCF, 0x6C, 0xFF}}},
	{{{6, 41, -16}, 0, {132, 131}, {0xFB, 0x78, 0xD5, 0xFF}}},
	{{{60, 35, -14}, 0, {131, 130}, {0x05, 0x77, 0xD3, 0xFF}}},
	{{{60, 17, 29}, 0, {131, 130}, {0x03, 0x27, 0x79, 0xFF}}},
	{{{6, -26, 7}, 0, {131, 130}, {0x01, 0x88, 0x28, 0xFF}}},
	{{{-11, -6, -38}, 0, {130, 132}, {0xBD, 0xDF, 0x99, 0xFF}}},
	{{{6, -5, -38}, 0, {131, 131}, {0xFF, 0xD7, 0x88, 0xFF}}},
	{{{-11, 37, -15}, 0, {132, 131}, {0xA0, 0x53, 0xFF, 0xFF}}},
	{{{60, -3, -32}, 0, {131, 130}, {0x05, 0xD6, 0x88, 0xFF}}},
	{{{60, -21, 5}, 0, {131, 130}, {0x04, 0x87, 0x25, 0xFF}}},
};

Gfx viridian_Left_Arm_Color_mesh_layer_1_tri_1[] = {
	gsSPVertex(viridian_Left_Arm_Color_mesh_layer_1_vtx_1 + 0, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(0, 4, 3, 0, 0, 5, 4, 0),
	gsSP2Triangles(6, 5, 0, 0, 0, 2, 6, 0),
	gsSP2Triangles(6, 2, 7, 0, 6, 7, 8, 0),
	gsSP2Triangles(8, 7, 9, 0, 8, 9, 3, 0),
	gsSP2Triangles(3, 9, 1, 0, 3, 10, 8, 0),
	gsSP2Triangles(3, 4, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(8, 11, 6, 0, 6, 11, 5, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Left_Forearm_skinned_mesh_layer_1_vtx_0[4] = {
	{{{60, 17, 29}, 0, {131, 130}, {0x03, 0x27, 0x79, 0xFF}}},
	{{{60, -21, 5}, 0, {131, 130}, {0x04, 0x87, 0x25, 0xFF}}},
	{{{60, -3, -32}, 0, {131, 130}, {0x05, 0xD6, 0x88, 0xFF}}},
	{{{60, 35, -14}, 0, {131, 130}, {0x05, 0x77, 0xD3, 0xFF}}},
};

Gfx viridian_Left_Forearm_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_Left_Forearm_skinned_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Left_Forearm_mesh_layer_1_vtx_0[4] = {
	{{{1, 17, 29}, 0, {131, 130}, {0x01, 0x27, 0x79, 0xFF}}},
	{{{1, 35, -14}, 0, {131, 130}, {0x01, 0x77, 0xD2, 0xFF}}},
	{{{1, -3, -33}, 0, {131, 130}, {0x01, 0xD6, 0x88, 0xFF}}},
	{{{1, -21, 5}, 0, {131, 130}, {0x01, 0x86, 0x23, 0xFF}}},
};

Gfx viridian_Left_Forearm_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_Left_Forearm_mesh_layer_1_vtx_0 + 0, 4, 4),
	gsSP2Triangles(4, 0, 1, 0, 5, 0, 4, 0),
	gsSP2Triangles(5, 3, 0, 0, 6, 3, 5, 0),
	gsSP2Triangles(6, 2, 3, 0, 7, 2, 6, 0),
	gsSP2Triangles(7, 1, 2, 0, 4, 1, 7, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Left_Hand_DL_skinned_mesh_layer_1_vtx_0[4] = {
	{{{1, -21, 5}, 0, {131, 130}, {0x01, 0x86, 0x23, 0xFF}}},
	{{{1, 17, 29}, 0, {131, 130}, {0x01, 0x27, 0x79, 0xFF}}},
	{{{1, -3, -33}, 0, {131, 130}, {0x01, 0xD6, 0x88, 0xFF}}},
	{{{1, 35, -14}, 0, {131, 130}, {0x01, 0x77, 0xD2, 0xFF}}},
};

Gfx viridian_Left_Hand_DL_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_Left_Hand_DL_skinned_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Left_Hand_DL_mesh_layer_1_vtx_0[4] = {
	{{{-15, 17, 29}, 0, {131, 130}, {0xB6, 0x1A, 0x64, 0xFF}}},
	{{{-15, -19, 5}, 0, {131, 130}, {0xBA, 0x9C, 0x22, 0xFF}}},
	{{{-15, -2, -31}, 0, {131, 130}, {0xB2, 0xDE, 0xA2, 0xFF}}},
	{{{-15, 33, -14}, 0, {131, 130}, {0xB5, 0x60, 0xDD, 0xFF}}},
};

Gfx viridian_Left_Hand_DL_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_Left_Hand_DL_mesh_layer_1_vtx_0 + 0, 4, 4),
	gsSP2Triangles(0, 4, 1, 0, 0, 5, 4, 0),
	gsSP2Triangles(2, 5, 0, 0, 2, 6, 5, 0),
	gsSP2Triangles(3, 6, 2, 0, 3, 7, 6, 0),
	gsSP2Triangles(1, 7, 3, 0, 1, 4, 7, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Left_Hand_DL_mesh_layer_1_vtx_1[13] = {
	{{{-15, -19, 5}, 0, {131, 130}, {0xBA, 0x9C, 0x22, 0xFF}}},
	{{{-5, 22, 38}, 0, {131, 130}, {0xD4, 0x2B, 0x6F, 0xFF}}},
	{{{-15, 17, 29}, 0, {131, 130}, {0xB6, 0x1A, 0x64, 0xFF}}},
	{{{-5, -35, 11}, 0, {131, 130}, {0xD8, 0x8F, 0x2A, 0xFF}}},
	{{{-15, -2, -31}, 0, {131, 130}, {0xB2, 0xDE, 0xA2, 0xFF}}},
	{{{-5, -8, -47}, 0, {131, 130}, {0xD3, 0xD8, 0x90, 0xFF}}},
	{{{-15, 33, -14}, 0, {131, 130}, {0xB5, 0x60, 0xDD, 0xFF}}},
	{{{-5, 50, -19}, 0, {131, 130}, {0xD5, 0x71, 0xD9, 0xFF}}},
	{{{44, 42, -17}, 0, {131, 130}, {0x46, 0x64, 0xDC, 0xFF}}},
	{{{44, 20, 31}, 0, {131, 130}, {0x46, 0x24, 0x64, 0xFF}}},
	{{{44, -28, 8}, 0, {131, 130}, {0x46, 0x9C, 0x24, 0xFF}}},
	{{{44, -5, -39}, 0, {131, 130}, {0x46, 0xDC, 0x9C, 0xFF}}},
	{{{57, 7, -4}, 0, {131, 130}, {0x7F, 0x00, 0x00, 0xFF}}},
};

Gfx viridian_Left_Hand_DL_mesh_layer_1_tri_1[] = {
	gsSPVertex(viridian_Left_Hand_DL_mesh_layer_1_vtx_1 + 0, 13, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 4, 5, 3, 0),
	gsSP2Triangles(6, 5, 4, 0, 6, 7, 5, 0),
	gsSP2Triangles(2, 7, 6, 0, 2, 1, 7, 0),
	gsSP2Triangles(1, 8, 7, 0, 1, 9, 8, 0),
	gsSP2Triangles(3, 9, 1, 0, 3, 10, 9, 0),
	gsSP2Triangles(5, 10, 3, 0, 5, 11, 10, 0),
	gsSP2Triangles(7, 11, 5, 0, 7, 8, 11, 0),
	gsSP2Triangles(8, 12, 11, 0, 9, 12, 8, 0),
	gsSP2Triangles(10, 12, 9, 0, 11, 12, 10, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Right_Arm_Color_skinned_mesh_layer_1_vtx_0[6] = {
	{{{-5, 36, -43}, 0, {125, 128}, {0xFA, 0x5B, 0xA8, 0xFF}}},
	{{{-5, -7, -61}, 0, {125, 128}, {0x0B, 0xE0, 0x86, 0xFF}}},
	{{{71, -2, -64}, 0, {126, 128}, {0xC4, 0xFD, 0x90, 0xFF}}},
	{{{71, -47, -45}, 0, {126, 128}, {0xF8, 0xA5, 0xA8, 0xFF}}},
	{{{-5, -47, -43}, 0, {126, 128}, {0x09, 0xA6, 0xA7, 0xFF}}},
	{{{71, 43, -46}, 0, {125, 128}, {0xF7, 0x64, 0xB3, 0xFF}}},
};

Gfx viridian_Right_Arm_Color_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_Right_Arm_Color_skinned_mesh_layer_1_vtx_0 + 0, 6, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Right_Arm_Color_mesh_layer_1_vtx_0[6] = {
	{{{-11, -6, 39}, 0, {125, 128}, {0xBD, 0xDF, 0x67, 0xFF}}},
	{{{-10, -22, -6}, 0, {125, 128}, {0xD3, 0xCF, 0x94, 0xFF}}},
	{{{-11, 17, -27}, 0, {126, 128}, {0xC7, 0x20, 0x93, 0xFF}}},
	{{{-11, 37, 16}, 0, {126, 128}, {0xA1, 0x54, 0x02, 0xFF}}},
	{{{-11, -6, 39}, 0, {130, 129}, {0xBD, 0xDF, 0x67, 0xFF}}},
	{{{-11, 37, 16}, 0, {130, 127}, {0xA1, 0x54, 0x02, 0xFF}}},
};

Gfx viridian_Right_Arm_Color_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_Right_Arm_Color_mesh_layer_1_vtx_0 + 0, 6, 6),
	gsSP2Triangles(6, 1, 0, 0, 7, 6, 0, 0),
	gsSP2Triangles(7, 0, 5, 0, 7, 5, 2, 0),
	gsSP2Triangles(8, 7, 2, 0, 9, 8, 2, 0),
	gsSP2Triangles(9, 2, 3, 0, 9, 3, 4, 0),
	gsSP2Triangles(4, 1, 9, 0, 10, 11, 1, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Right_Arm_Color_mesh_layer_1_vtx_1[12] = {
	{{{6, -5, 39}, 0, {131, 129}, {0xFF, 0xD7, 0x78, 0xFF}}},
	{{{-11, 37, 16}, 0, {130, 127}, {0xA1, 0x54, 0x02, 0xFF}}},
	{{{-11, -6, 39}, 0, {130, 129}, {0xBD, 0xDF, 0x67, 0xFF}}},
	{{{6, 41, 17}, 0, {131, 128}, {0xFB, 0x78, 0x2B, 0xFF}}},
	{{{60, -3, 33}, 0, {131, 128}, {0x05, 0xD6, 0x78, 0xFF}}},
	{{{60, -21, -4}, 0, {131, 128}, {0x04, 0x87, 0xDB, 0xFF}}},
	{{{6, -26, -6}, 0, {132, 129}, {0x01, 0x88, 0xD8, 0xFF}}},
	{{{-10, -22, -6}, 0, {132, 129}, {0xD3, 0xCF, 0x94, 0xFF}}},
	{{{6, 19, -28}, 0, {132, 128}, {0xFB, 0x2C, 0x89, 0xFF}}},
	{{{-11, 17, -27}, 0, {132, 127}, {0xC7, 0x20, 0x93, 0xFF}}},
	{{{60, 35, 15}, 0, {131, 128}, {0x05, 0x77, 0x2D, 0xFF}}},
	{{{60, 17, -28}, 0, {131, 128}, {0x03, 0x27, 0x87, 0xFF}}},
};

Gfx viridian_Right_Arm_Color_mesh_layer_1_tri_1[] = {
	gsSPVertex(viridian_Right_Arm_Color_mesh_layer_1_vtx_1 + 0, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 0, 4, 0, 0, 5, 4, 0),
	gsSP2Triangles(0, 6, 5, 0, 6, 0, 2, 0),
	gsSP2Triangles(6, 2, 7, 0, 8, 6, 7, 0),
	gsSP2Triangles(8, 7, 9, 0, 3, 8, 9, 0),
	gsSP2Triangles(3, 9, 1, 0, 8, 3, 10, 0),
	gsSP2Triangles(3, 4, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(6, 8, 11, 0, 6, 11, 5, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Right_Forearm_skinned_mesh_layer_1_vtx_0[4] = {
	{{{60, -21, -4}, 0, {131, 128}, {0x04, 0x87, 0xDB, 0xFF}}},
	{{{60, 17, -28}, 0, {131, 128}, {0x03, 0x27, 0x87, 0xFF}}},
	{{{60, -3, 33}, 0, {131, 128}, {0x05, 0xD6, 0x78, 0xFF}}},
	{{{60, 35, 15}, 0, {131, 128}, {0x05, 0x77, 0x2D, 0xFF}}},
};

Gfx viridian_Right_Forearm_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_Right_Forearm_skinned_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Right_Forearm_mesh_layer_1_vtx_0[4] = {
	{{{1, 17, -28}, 0, {131, 128}, {0x01, 0x27, 0x87, 0xFF}}},
	{{{1, -21, -4}, 0, {131, 128}, {0x01, 0x86, 0xDD, 0xFF}}},
	{{{1, -3, 34}, 0, {131, 128}, {0x01, 0xD6, 0x78, 0xFF}}},
	{{{1, 35, 15}, 0, {131, 128}, {0x01, 0x77, 0x2E, 0xFF}}},
};

Gfx viridian_Right_Forearm_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_Right_Forearm_mesh_layer_1_vtx_0 + 0, 4, 4),
	gsSP2Triangles(4, 0, 1, 0, 4, 5, 0, 0),
	gsSP2Triangles(5, 2, 0, 0, 5, 6, 2, 0),
	gsSP2Triangles(6, 3, 2, 0, 6, 7, 3, 0),
	gsSP2Triangles(7, 1, 3, 0, 7, 4, 1, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Right_Hand_DL_skinned_mesh_layer_1_vtx_0[4] = {
	{{{1, -21, -4}, 0, {131, 128}, {0x01, 0x86, 0xDD, 0xFF}}},
	{{{1, 17, -28}, 0, {131, 128}, {0x01, 0x27, 0x87, 0xFF}}},
	{{{1, -3, 34}, 0, {131, 128}, {0x01, 0xD6, 0x78, 0xFF}}},
	{{{1, 35, 15}, 0, {131, 128}, {0x01, 0x77, 0x2E, 0xFF}}},
};

Gfx viridian_Right_Hand_DL_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_Right_Hand_DL_skinned_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Right_Hand_DL_mesh_layer_1_vtx_0[4] = {
	{{{-15, 17, -28}, 0, {131, 128}, {0xB6, 0x1A, 0x9C, 0xFF}}},
	{{{-15, 33, 15}, 0, {131, 128}, {0xB5, 0x60, 0x23, 0xFF}}},
	{{{-15, -2, 32}, 0, {131, 128}, {0xB2, 0xDE, 0x5E, 0xFF}}},
	{{{-15, -19, -4}, 0, {131, 128}, {0xBA, 0x9C, 0xDE, 0xFF}}},
};

Gfx viridian_Right_Hand_DL_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_Right_Hand_DL_mesh_layer_1_vtx_0 + 0, 4, 4),
	gsSP2Triangles(0, 1, 4, 0, 1, 5, 4, 0),
	gsSP2Triangles(1, 3, 5, 0, 3, 6, 5, 0),
	gsSP2Triangles(3, 2, 6, 0, 2, 7, 6, 0),
	gsSP2Triangles(2, 0, 7, 0, 0, 4, 7, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Right_Hand_DL_mesh_layer_1_vtx_1[13] = {
	{{{-15, -19, -4}, 0, {131, 128}, {0xBA, 0x9C, 0xDE, 0xFF}}},
	{{{-15, 17, -28}, 0, {131, 128}, {0xB6, 0x1A, 0x9C, 0xFF}}},
	{{{-5, 22, -37}, 0, {131, 128}, {0xD4, 0x2B, 0x91, 0xFF}}},
	{{{-5, 50, 20}, 0, {131, 128}, {0xD5, 0x71, 0x27, 0xFF}}},
	{{{-15, 33, 15}, 0, {131, 128}, {0xB5, 0x60, 0x23, 0xFF}}},
	{{{-5, -8, 48}, 0, {131, 128}, {0xD3, 0xD8, 0x70, 0xFF}}},
	{{{-15, -2, 32}, 0, {131, 128}, {0xB2, 0xDE, 0x5E, 0xFF}}},
	{{{-5, -35, -10}, 0, {131, 128}, {0xD8, 0x8F, 0xD6, 0xFF}}},
	{{{44, 20, -30}, 0, {131, 128}, {0x46, 0x24, 0x9C, 0xFF}}},
	{{{44, 42, 18}, 0, {131, 128}, {0x46, 0x64, 0x24, 0xFF}}},
	{{{44, -5, 40}, 0, {131, 128}, {0x46, 0xDC, 0x64, 0xFF}}},
	{{{44, -28, -7}, 0, {131, 128}, {0x46, 0x9C, 0xDC, 0xFF}}},
	{{{57, 7, 5}, 0, {131, 128}, {0x7F, 0x00, 0x00, 0xFF}}},
};

Gfx viridian_Right_Hand_DL_mesh_layer_1_tri_1[] = {
	gsSPVertex(viridian_Right_Hand_DL_mesh_layer_1_vtx_1 + 0, 13, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(1, 4, 3, 0, 4, 5, 3, 0),
	gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0),
	gsSP2Triangles(6, 0, 7, 0, 0, 2, 7, 0),
	gsSP2Triangles(7, 2, 8, 0, 2, 9, 8, 0),
	gsSP2Triangles(2, 3, 9, 0, 3, 10, 9, 0),
	gsSP2Triangles(3, 5, 10, 0, 5, 11, 10, 0),
	gsSP2Triangles(5, 7, 11, 0, 7, 8, 11, 0),
	gsSP2Triangles(11, 8, 12, 0, 8, 9, 12, 0),
	gsSP2Triangles(9, 10, 12, 0, 10, 11, 12, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Left_Thigh_Color_skinned_mesh_layer_1_vtx_0[4] = {
	{{{-6, 28, 38}, 0, {125, 128}, {0x91, 0x33, 0x23, 0xFF}}},
	{{{-6, -6, 4}, 0, {125, 128}, {0x81, 0xFF, 0x01, 0xFF}}},
	{{{-6, -40, 39}, 0, {125, 128}, {0x93, 0xC7, 0x20, 0xFF}}},
	{{{-6, -6, 72}, 0, {125, 128}, {0x8E, 0x05, 0x37, 0xFF}}},
};

Gfx viridian_Left_Thigh_Color_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_Left_Thigh_Color_skinned_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Left_Thigh_Color_mesh_layer_1_vtx_0[4] = {
	{{{1, -36, -4}, 0, {125, 128}, {0xB5, 0x9A, 0xFE, 0xFF}}},
	{{{1, -2, 30}, 0, {125, 128}, {0x99, 0x01, 0x4A, 0xFF}}},
	{{{1, 32, -3}, 0, {125, 128}, {0xB4, 0x66, 0x02, 0xFF}}},
	{{{1, -2, -38}, 0, {125, 128}, {0x98, 0x03, 0xB7, 0xFF}}},
};

Gfx viridian_Left_Thigh_Color_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_Left_Thigh_Color_mesh_layer_1_vtx_0 + 0, 4, 4),
	gsSP2Triangles(4, 0, 1, 0, 5, 0, 4, 0),
	gsSP2Triangles(5, 3, 0, 0, 2, 3, 5, 0),
	gsSP2Triangles(6, 2, 5, 0, 1, 2, 6, 0),
	gsSP2Triangles(7, 1, 6, 0, 4, 1, 7, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Left_Thigh_Color_mesh_layer_1_vtx_1[12] = {
	{{{6, -2, -38}, 0, {125, 128}, {0x00, 0x02, 0x81, 0xFF}}},
	{{{1, -2, -38}, 0, {125, 128}, {0x98, 0x03, 0xB7, 0xFF}}},
	{{{1, 32, -3}, 0, {125, 128}, {0xB4, 0x66, 0x02, 0xFF}}},
	{{{6, -36, -4}, 0, {125, 128}, {0x00, 0x81, 0xFE, 0xFF}}},
	{{{46, -36, -4}, 0, {125, 128}, {0x00, 0x81, 0xFE, 0xFF}}},
	{{{46, -2, -38}, 0, {125, 128}, {0x00, 0x02, 0x81, 0xFF}}},
	{{{6, 32, -3}, 0, {125, 128}, {0x00, 0x7F, 0x02, 0xFF}}},
	{{{1, -2, 30}, 0, {125, 128}, {0x99, 0x01, 0x4A, 0xFF}}},
	{{{6, -2, 30}, 0, {125, 128}, {0x00, 0xFE, 0x7F, 0xFF}}},
	{{{1, -36, -4}, 0, {125, 128}, {0xB5, 0x9A, 0xFE, 0xFF}}},
	{{{46, -2, 30}, 0, {125, 128}, {0x00, 0xFE, 0x7F, 0xFF}}},
	{{{46, 32, -3}, 0, {125, 128}, {0x00, 0x7F, 0x02, 0xFF}}},
};

Gfx viridian_Left_Thigh_Color_mesh_layer_1_tri_1[] = {
	gsSPVertex(viridian_Left_Thigh_Color_mesh_layer_1_vtx_1 + 0, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(4, 3, 0, 0, 4, 0, 5, 0),
	gsSP2Triangles(5, 0, 6, 0, 0, 2, 6, 0),
	gsSP2Triangles(6, 2, 7, 0, 6, 7, 8, 0),
	gsSP2Triangles(8, 7, 9, 0, 8, 9, 3, 0),
	gsSP2Triangles(3, 9, 1, 0, 10, 8, 3, 0),
	gsSP2Triangles(11, 8, 10, 0, 11, 6, 8, 0),
	gsSP2Triangles(5, 6, 11, 0, 10, 3, 4, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Left_Leg_skinned_mesh_layer_1_vtx_0[4] = {
	{{{46, -2, 30}, 0, {125, 128}, {0x00, 0xFE, 0x7F, 0xFF}}},
	{{{46, 32, -3}, 0, {125, 128}, {0x00, 0x7F, 0x02, 0xFF}}},
	{{{46, -36, -4}, 0, {125, 128}, {0x00, 0x81, 0xFE, 0xFF}}},
	{{{46, -2, -38}, 0, {125, 128}, {0x00, 0x02, 0x81, 0xFF}}},
};

Gfx viridian_Left_Leg_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_Left_Leg_skinned_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Left_Leg_mesh_layer_1_vtx_0[4] = {
	{{{-1, 32, -3}, 0, {125, 128}, {0x00, 0x7F, 0x02, 0xFF}}},
	{{{-1, -2, 30}, 0, {125, 128}, {0x00, 0xFE, 0x7F, 0xFF}}},
	{{{-1, -36, -4}, 0, {125, 128}, {0x00, 0x81, 0xFE, 0xFF}}},
	{{{-1, -2, -38}, 0, {125, 128}, {0x00, 0x02, 0x81, 0xFF}}},
};

Gfx viridian_Left_Leg_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_Left_Leg_mesh_layer_1_vtx_0 + 0, 4, 4),
	gsSP2Triangles(0, 4, 1, 0, 0, 5, 4, 0),
	gsSP2Triangles(2, 5, 0, 0, 2, 6, 5, 0),
	gsSP2Triangles(3, 6, 2, 0, 3, 7, 6, 0),
	gsSP2Triangles(1, 7, 3, 0, 1, 4, 7, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Left_Leg_mesh_layer_1_vtx_1[8] = {
	{{{-1, -2, 30}, 0, {125, 128}, {0x00, 0xFE, 0x7F, 0xFF}}},
	{{{9, 32, -3}, 0, {125, 128}, {0x23, 0x7A, 0x02, 0xFF}}},
	{{{-1, 32, -3}, 0, {125, 128}, {0x00, 0x7F, 0x02, 0xFF}}},
	{{{9, -2, 30}, 0, {125, 128}, {0x20, 0x08, 0x7B, 0xFF}}},
	{{{-1, -36, -4}, 0, {125, 128}, {0x00, 0x81, 0xFE, 0xFF}}},
	{{{9, -36, -4}, 0, {125, 128}, {0xF9, 0x81, 0xFE, 0xFF}}},
	{{{-1, -2, -38}, 0, {125, 128}, {0x00, 0x02, 0x81, 0xFF}}},
	{{{9, -2, -38}, 0, {125, 128}, {0x20, 0x0B, 0x86, 0xFF}}},
};

Gfx viridian_Left_Leg_mesh_layer_1_tri_1[] = {
	gsSPVertex(viridian_Left_Leg_mesh_layer_1_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 4, 5, 3, 0),
	gsSP2Triangles(6, 5, 4, 0, 6, 7, 5, 0),
	gsSP2Triangles(2, 7, 6, 0, 2, 1, 7, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Left_Shoe_skinned_mesh_layer_1_vtx_0[4] = {
	{{{9, -2, 30}, 0, {125, 128}, {0x20, 0x08, 0x7B, 0xFF}}},
	{{{9, 32, -3}, 0, {125, 128}, {0x23, 0x7A, 0x02, 0xFF}}},
	{{{9, -36, -4}, 0, {125, 128}, {0xF9, 0x81, 0xFE, 0xFF}}},
	{{{9, -2, -38}, 0, {125, 128}, {0x20, 0x0B, 0x86, 0xFF}}},
};

Gfx viridian_Left_Shoe_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_Left_Shoe_skinned_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Left_Shoe_mesh_layer_1_vtx_0[4] = {
	{{{-38, -9, -3}, 0, {125, 128}, {0x0B, 0x7E, 0x03, 0xFF}}},
	{{{-5, -21, 30}, 0, {125, 128}, {0xE9, 0xCD, 0x72, 0xFF}}},
	{{{26, -33, -4}, 0, {125, 128}, {0xFA, 0x81, 0xFF, 0xFF}}},
	{{{-6, -21, -38}, 0, {125, 128}, {0xE8, 0xCF, 0x8D, 0xFF}}},
};

Gfx viridian_Left_Shoe_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_Left_Shoe_mesh_layer_1_vtx_0 + 0, 4, 4),
	gsSP2Triangles(0, 4, 1, 0, 0, 5, 4, 0),
	gsSP2Triangles(2, 5, 0, 0, 2, 6, 5, 0),
	gsSP2Triangles(3, 6, 2, 0, 3, 7, 6, 0),
	gsSP2Triangles(1, 7, 3, 0, 1, 4, 7, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Left_Shoe_mesh_layer_1_vtx_1[19] = {
	{{{17, 42, -38}, 0, {125, 128}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{-14, 54, -3}, 0, {125, 128}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{18, 42, 30}, 0, {125, 128}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{91, 15, -5}, 0, {125, 128}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{59, 27, 30}, 0, {125, 128}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{59, 27, -38}, 0, {125, 128}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{-38, -9, -3}, 0, {125, 128}, {0x0B, 0x7E, 0x03, 0xFF}}},
	{{{-14, 54, -3}, 0, {125, 128}, {0x89, 0x2C, 0x02, 0xFF}}},
	{{{17, 42, -38}, 0, {125, 128}, {0xD1, 0x12, 0x8B, 0xFF}}},
	{{{-5, -21, 30}, 0, {125, 128}, {0xE9, 0xCD, 0x72, 0xFF}}},
	{{{18, 42, 30}, 0, {125, 128}, {0xD4, 0x10, 0x76, 0xFF}}},
	{{{59, 27, 30}, 0, {125, 128}, {0x2F, 0xEE, 0x75, 0xFF}}},
	{{{41, -22, 30}, 0, {125, 128}, {0x1C, 0xB9, 0x65, 0xFF}}},
	{{{26, -33, -4}, 0, {125, 128}, {0xFA, 0x81, 0xFF, 0xFF}}},
	{{{73, -34, -5}, 0, {125, 128}, {0x53, 0xA0, 0xFE, 0xFF}}},
	{{{-6, -21, -38}, 0, {125, 128}, {0xE8, 0xCF, 0x8D, 0xFF}}},
	{{{40, -22, -38}, 0, {125, 128}, {0x19, 0xBA, 0x99, 0xFF}}},
	{{{59, 27, -38}, 0, {125, 128}, {0x2C, 0xF0, 0x8A, 0xFF}}},
	{{{91, 15, -5}, 0, {125, 128}, {0x77, 0xD4, 0xFE, 0xFF}}},
};

Gfx viridian_Left_Shoe_mesh_layer_1_tri_1[] = {
	gsSPVertex(viridian_Left_Shoe_mesh_layer_1_vtx_1 + 0, 19, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
	gsSP2Triangles(2, 4, 3, 0, 3, 5, 0, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
	gsSP2Triangles(9, 10, 7, 0, 9, 11, 10, 0),
	gsSP2Triangles(9, 12, 11, 0, 13, 12, 9, 0),
	gsSP2Triangles(13, 14, 12, 0, 15, 14, 13, 0),
	gsSP2Triangles(15, 16, 14, 0, 8, 16, 15, 0),
	gsSP2Triangles(6, 8, 15, 0, 8, 17, 16, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 14, 0),
	gsSP2Triangles(14, 18, 11, 0, 14, 11, 12, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Right_Thigh_Color_skinned_mesh_layer_1_vtx_0[4] = {
	{{{-6, -6, -4}, 0, {125, 128}, {0x81, 0xFF, 0xFF, 0xFF}}},
	{{{-6, 28, -38}, 0, {125, 128}, {0x91, 0x33, 0xDD, 0xFF}}},
	{{{-6, -40, -39}, 0, {125, 128}, {0x93, 0xC7, 0xE0, 0xFF}}},
	{{{-6, -6, -72}, 0, {125, 128}, {0x8E, 0x05, 0xC9, 0xFF}}},
};

Gfx viridian_Right_Thigh_Color_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_Right_Thigh_Color_skinned_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Right_Thigh_Color_mesh_layer_1_vtx_0[4] = {
	{{{1, -36, 4}, 0, {125, 128}, {0xB5, 0x9A, 0x02, 0xFF}}},
	{{{1, -2, 38}, 0, {125, 128}, {0x98, 0x03, 0x49, 0xFF}}},
	{{{1, 32, 3}, 0, {125, 128}, {0xB4, 0x66, 0xFE, 0xFF}}},
	{{{1, -2, -30}, 0, {125, 128}, {0x99, 0x01, 0xB6, 0xFF}}},
};

Gfx viridian_Right_Thigh_Color_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_Right_Thigh_Color_mesh_layer_1_vtx_0 + 0, 4, 4),
	gsSP2Triangles(4, 0, 1, 0, 4, 5, 0, 0),
	gsSP2Triangles(5, 6, 0, 0, 6, 2, 0, 0),
	gsSP2Triangles(6, 7, 2, 0, 7, 3, 2, 0),
	gsSP2Triangles(7, 1, 3, 0, 7, 4, 1, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Right_Thigh_Color_mesh_layer_1_vtx_1[12] = {
	{{{6, -2, 38}, 0, {125, 128}, {0x00, 0x02, 0x7F, 0xFF}}},
	{{{1, 32, 3}, 0, {125, 128}, {0xB4, 0x66, 0xFE, 0xFF}}},
	{{{1, -2, 38}, 0, {125, 128}, {0x98, 0x03, 0x49, 0xFF}}},
	{{{6, 32, 3}, 0, {125, 128}, {0x00, 0x7F, 0xFE, 0xFF}}},
	{{{46, -2, 38}, 0, {125, 128}, {0x00, 0x02, 0x7F, 0xFF}}},
	{{{46, -36, 4}, 0, {125, 128}, {0x00, 0x81, 0x02, 0xFF}}},
	{{{6, -36, 4}, 0, {125, 128}, {0x00, 0x81, 0x02, 0xFF}}},
	{{{1, -36, 4}, 0, {125, 128}, {0xB5, 0x9A, 0x02, 0xFF}}},
	{{{6, -2, -30}, 0, {125, 128}, {0x00, 0xFE, 0x81, 0xFF}}},
	{{{1, -2, -30}, 0, {125, 128}, {0x99, 0x01, 0xB6, 0xFF}}},
	{{{46, 32, 3}, 0, {125, 128}, {0x00, 0x7F, 0xFE, 0xFF}}},
	{{{46, -2, -30}, 0, {125, 128}, {0x00, 0xFE, 0x81, 0xFF}}},
};

Gfx viridian_Right_Thigh_Color_mesh_layer_1_tri_1[] = {
	gsSPVertex(viridian_Right_Thigh_Color_mesh_layer_1_vtx_1 + 0, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 5, 4, 0, 0),
	gsSP2Triangles(5, 0, 6, 0, 6, 0, 2, 0),
	gsSP2Triangles(6, 2, 7, 0, 8, 6, 7, 0),
	gsSP2Triangles(8, 7, 9, 0, 3, 8, 9, 0),
	gsSP2Triangles(3, 9, 1, 0, 10, 8, 3, 0),
	gsSP2Triangles(10, 11, 8, 0, 11, 6, 8, 0),
	gsSP2Triangles(11, 5, 6, 0, 4, 10, 3, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Right_Leg_skinned_mesh_layer_1_vtx_0[4] = {
	{{{46, -2, -30}, 0, {125, 128}, {0x00, 0xFE, 0x81, 0xFF}}},
	{{{46, 32, 3}, 0, {125, 128}, {0x00, 0x7F, 0xFE, 0xFF}}},
	{{{46, -36, 4}, 0, {125, 128}, {0x00, 0x81, 0x02, 0xFF}}},
	{{{46, -2, 38}, 0, {125, 128}, {0x00, 0x02, 0x7F, 0xFF}}},
};

Gfx viridian_Right_Leg_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_Right_Leg_skinned_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Right_Leg_mesh_layer_1_vtx_0[4] = {
	{{{-1, 32, 3}, 0, {125, 128}, {0x00, 0x7F, 0xFE, 0xFF}}},
	{{{-1, -2, 38}, 0, {125, 128}, {0x00, 0x02, 0x7F, 0xFF}}},
	{{{-1, -36, 4}, 0, {125, 128}, {0x00, 0x81, 0x02, 0xFF}}},
	{{{-1, -2, -30}, 0, {125, 128}, {0x00, 0xFE, 0x81, 0xFF}}},
};

Gfx viridian_Right_Leg_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_Right_Leg_mesh_layer_1_vtx_0 + 0, 4, 4),
	gsSP2Triangles(0, 1, 4, 0, 1, 5, 4, 0),
	gsSP2Triangles(1, 3, 5, 0, 3, 6, 5, 0),
	gsSP2Triangles(3, 2, 6, 0, 2, 7, 6, 0),
	gsSP2Triangles(2, 0, 7, 0, 0, 4, 7, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Right_Leg_mesh_layer_1_vtx_1[8] = {
	{{{-1, -2, -30}, 0, {125, 128}, {0x00, 0xFE, 0x81, 0xFF}}},
	{{{-1, 32, 3}, 0, {125, 128}, {0x00, 0x7F, 0xFE, 0xFF}}},
	{{{9, 32, 3}, 0, {125, 128}, {0x23, 0x7A, 0xFE, 0xFF}}},
	{{{9, -2, 38}, 0, {125, 128}, {0x20, 0x0B, 0x7A, 0xFF}}},
	{{{-1, -2, 38}, 0, {125, 128}, {0x00, 0x02, 0x7F, 0xFF}}},
	{{{9, -36, 4}, 0, {125, 128}, {0xF9, 0x81, 0x02, 0xFF}}},
	{{{-1, -36, 4}, 0, {125, 128}, {0x00, 0x81, 0x02, 0xFF}}},
	{{{9, -2, -30}, 0, {125, 128}, {0x20, 0x08, 0x85, 0xFF}}},
};

Gfx viridian_Right_Leg_mesh_layer_1_tri_1[] = {
	gsSPVertex(viridian_Right_Leg_mesh_layer_1_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(1, 4, 3, 0, 4, 5, 3, 0),
	gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0),
	gsSP2Triangles(6, 0, 7, 0, 0, 2, 7, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Right_Shoe_DL_skinned_mesh_layer_1_vtx_0[4] = {
	{{{9, -2, -30}, 0, {125, 128}, {0x20, 0x08, 0x85, 0xFF}}},
	{{{9, 32, 3}, 0, {125, 128}, {0x23, 0x7A, 0xFE, 0xFF}}},
	{{{9, -36, 4}, 0, {125, 128}, {0xF9, 0x81, 0x02, 0xFF}}},
	{{{9, -2, 38}, 0, {125, 128}, {0x20, 0x0B, 0x7A, 0xFF}}},
};

Gfx viridian_Right_Shoe_DL_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_Right_Shoe_DL_skinned_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Right_Shoe_DL_mesh_layer_1_vtx_0[4] = {
	{{{-38, -9, 3}, 0, {125, 128}, {0x0B, 0x7E, 0xFD, 0xFF}}},
	{{{-6, -21, 38}, 0, {125, 128}, {0xE8, 0xCF, 0x73, 0xFF}}},
	{{{26, -33, 4}, 0, {125, 128}, {0xFA, 0x81, 0x01, 0xFF}}},
	{{{-5, -21, -30}, 0, {125, 128}, {0xE9, 0xCD, 0x8E, 0xFF}}},
};

Gfx viridian_Right_Shoe_DL_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_Right_Shoe_DL_mesh_layer_1_vtx_0 + 0, 4, 4),
	gsSP2Triangles(0, 1, 4, 0, 1, 5, 4, 0),
	gsSP2Triangles(1, 3, 5, 0, 3, 6, 5, 0),
	gsSP2Triangles(3, 2, 6, 0, 2, 7, 6, 0),
	gsSP2Triangles(2, 0, 7, 0, 0, 4, 7, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_Right_Shoe_DL_mesh_layer_1_vtx_1[19] = {
	{{{18, 42, -30}, 0, {125, 128}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{-14, 54, 3}, 0, {125, 128}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{17, 42, 38}, 0, {125, 128}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{91, 15, 5}, 0, {125, 128}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{59, 27, 39}, 0, {125, 128}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{59, 27, -30}, 0, {125, 128}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{-38, -9, 3}, 0, {125, 128}, {0x0B, 0x7E, 0xFD, 0xFF}}},
	{{{-6, -21, 38}, 0, {125, 128}, {0xE8, 0xCF, 0x73, 0xFF}}},
	{{{17, 42, 38}, 0, {125, 128}, {0xD1, 0x12, 0x75, 0xFF}}},
	{{{40, -22, 39}, 0, {125, 128}, {0x19, 0xBA, 0x67, 0xFF}}},
	{{{73, -34, 5}, 0, {125, 128}, {0x53, 0xA0, 0x02, 0xFF}}},
	{{{26, -33, 4}, 0, {125, 128}, {0xFA, 0x81, 0x01, 0xFF}}},
	{{{41, -22, -30}, 0, {125, 128}, {0x1C, 0xB9, 0x9B, 0xFF}}},
	{{{-5, -21, -30}, 0, {125, 128}, {0xE9, 0xCD, 0x8E, 0xFF}}},
	{{{59, 27, -30}, 0, {125, 128}, {0x2F, 0xEE, 0x8B, 0xFF}}},
	{{{18, 42, -30}, 0, {125, 128}, {0xD4, 0x10, 0x8A, 0xFF}}},
	{{{-14, 54, 3}, 0, {125, 128}, {0x89, 0x2C, 0xFE, 0xFF}}},
	{{{91, 15, 5}, 0, {125, 128}, {0x77, 0xD4, 0x02, 0xFF}}},
	{{{59, 27, 39}, 0, {125, 128}, {0x2C, 0xF0, 0x76, 0xFF}}},
};

Gfx viridian_Right_Shoe_DL_mesh_layer_1_tri_1[] = {
	gsSPVertex(viridian_Right_Shoe_DL_mesh_layer_1_vtx_1 + 0, 19, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
	gsSP2Triangles(2, 4, 3, 0, 3, 5, 0, 0),
	gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
	gsSP2Triangles(7, 10, 9, 0, 7, 11, 10, 0),
	gsSP2Triangles(11, 12, 10, 0, 11, 13, 12, 0),
	gsSP2Triangles(13, 14, 12, 0, 13, 15, 14, 0),
	gsSP2Triangles(13, 16, 15, 0, 13, 6, 16, 0),
	gsSP2Triangles(6, 8, 16, 0, 10, 12, 14, 0),
	gsSP2Triangles(10, 14, 17, 0, 9, 10, 17, 0),
	gsSP2Triangles(9, 17, 18, 0, 8, 9, 18, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Butt_mesh_layer_1_vtx_0[17] = {
	{{{9, 37, -54}, 0, {744, -18}, {0xE2, 0x58, 0xAA, 0xFF}}},
	{{{9, -9, -73}, 0, {744, -18}, {0xE3, 0xF9, 0x84, 0xFF}}},
	{{{-6, -6, -72}, 0, {744, -18}, {0x8E, 0x05, 0xC9, 0xFF}}},
	{{{-6, -40, -39}, 0, {744, -18}, {0x93, 0xC7, 0xE0, 0xFF}}},
	{{{9, -47, -54}, 0, {744, -18}, {0xE3, 0xA5, 0xAC, 0xFF}}},
	{{{9, -65, 0}, 0, {744, -18}, {0xCD, 0x8C, 0x00, 0xFF}}},
	{{{-6, -40, 39}, 0, {744, -18}, {0x93, 0xC7, 0x20, 0xFF}}},
	{{{9, -47, 54}, 0, {744, -18}, {0xE3, 0xA5, 0x54, 0xFF}}},
	{{{9, -9, 73}, 0, {744, -18}, {0xE3, 0xF9, 0x7C, 0xFF}}},
	{{{-6, -6, 72}, 0, {744, -18}, {0x8E, 0x05, 0x37, 0xFF}}},
	{{{9, 37, 54}, 0, {744, -18}, {0xE3, 0x58, 0x56, 0xFF}}},
	{{{-6, 28, 38}, 0, {744, -18}, {0x91, 0x33, 0x23, 0xFF}}},
	{{{9, 56, 0}, 0, {744, -18}, {0xD6, 0x78, 0x00, 0xFF}}},
	{{{-8, 38, 1}, 0, {744, -18}, {0x8C, 0x34, 0x01, 0xFF}}},
	{{{-6, 28, -38}, 0, {744, -18}, {0x91, 0x33, 0xDD, 0xFF}}},
	{{{-6, -6, -4}, 0, {744, -18}, {0x81, 0xFF, 0xFF, 0xFF}}},
	{{{-6, -6, 4}, 0, {744, -18}, {0x81, 0xFF, 0x01, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Butt_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Butt_mesh_layer_1_vtx_0 + 0, 17, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(1, 4, 3, 0, 4, 5, 3, 0),
	gsSP2Triangles(3, 5, 6, 0, 7, 6, 5, 0),
	gsSP2Triangles(8, 6, 7, 0, 8, 9, 6, 0),
	gsSP2Triangles(10, 9, 8, 0, 10, 11, 9, 0),
	gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
	gsSP2Triangles(12, 14, 13, 0, 12, 0, 14, 0),
	gsSP2Triangles(0, 2, 14, 0, 15, 13, 14, 0),
	gsSP2Triangles(13, 15, 16, 0, 3, 16, 15, 0),
	gsSP2Triangles(3, 6, 16, 0, 13, 16, 11, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Torso_skinned_mesh_layer_1_vtx_0[8] = {
	{{{9, 37, -54}, 0, {988, 495}, {0xE2, 0x58, 0xAA, 0xFF}}},
	{{{9, -9, -73}, 0, {988, 495}, {0xE3, 0xF9, 0x84, 0xFF}}},
	{{{9, -65, 0}, 0, {988, 495}, {0xCD, 0x8C, 0x00, 0xFF}}},
	{{{9, -47, -54}, 0, {988, 495}, {0xE3, 0xA5, 0xAC, 0xFF}}},
	{{{9, 56, 0}, 0, {988, 495}, {0xD6, 0x78, 0x00, 0xFF}}},
	{{{9, 37, 54}, 0, {988, 495}, {0xE3, 0x58, 0x56, 0xFF}}},
	{{{9, -9, 73}, 0, {988, 495}, {0xE3, 0xF9, 0x7C, 0xFF}}},
	{{{9, -47, 54}, 0, {988, 495}, {0xE3, 0xA5, 0x54, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Torso_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Torso_skinned_mesh_layer_1_vtx_0 + 0, 8, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Torso_mesh_layer_1_vtx_0[8] = {
	{{{-5, 36, -43}, 0, {743, -18}, {0xFA, 0x5B, 0xA8, 0xFF}}},
	{{{-5, -7, -61}, 0, {744, -17}, {0x0B, 0xE0, 0x86, 0xFF}}},
	{{{-5, -47, -43}, 0, {744, -18}, {0x09, 0xA6, 0xA7, 0xFF}}},
	{{{-5, -65, 0}, 0, {745, -18}, {0x01, 0x81, 0x00, 0xFF}}},
	{{{-5, -47, 43}, 0, {744, -18}, {0x09, 0xA6, 0x59, 0xFF}}},
	{{{-5, -7, 61}, 0, {744, -18}, {0x0B, 0xE1, 0x7B, 0xFF}}},
	{{{-5, 36, 43}, 0, {743, -18}, {0xFA, 0x5B, 0x58, 0xFF}}},
	{{{-5, 54, 0}, 0, {743, -18}, {0xFC, 0x7F, 0x00, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Torso_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Torso_mesh_layer_1_vtx_0 + 0, 8, 8),
	gsSP2Triangles(8, 1, 0, 0, 8, 9, 1, 0),
	gsSP2Triangles(9, 3, 1, 0, 9, 10, 3, 0),
	gsSP2Triangles(10, 2, 3, 0, 10, 11, 2, 0),
	gsSP2Triangles(12, 2, 11, 0, 12, 7, 2, 0),
	gsSP2Triangles(13, 7, 12, 0, 13, 6, 7, 0),
	gsSP2Triangles(14, 6, 13, 0, 14, 5, 6, 0),
	gsSP2Triangles(15, 5, 14, 0, 15, 4, 5, 0),
	gsSP2Triangles(15, 0, 4, 0, 15, 8, 0, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Torso_mesh_layer_1_vtx_1[12] = {
	{{{71, -47, -45}, 0, {747, -17}, {0xF8, 0xA5, 0xA8, 0xFF}}},
	{{{-5, -65, 0}, 0, {745, -18}, {0x01, 0x81, 0x00, 0xFF}}},
	{{{-5, -47, -43}, 0, {744, -18}, {0x09, 0xA6, 0xA7, 0xFF}}},
	{{{71, -66, 0}, 0, {747, -18}, {0xFF, 0x81, 0x00, 0xFF}}},
	{{{71, -47, 45}, 0, {746, -19}, {0xF8, 0xA4, 0x57, 0xFF}}},
	{{{-5, -47, 43}, 0, {744, -18}, {0x09, 0xA6, 0x59, 0xFF}}},
	{{{71, 62, 0}, 0, {740, -18}, {0xF9, 0x7F, 0x00, 0xFF}}},
	{{{-5, 36, -43}, 0, {743, -18}, {0xFA, 0x5B, 0xA8, 0xFF}}},
	{{{-5, 54, 0}, 0, {743, -18}, {0xFC, 0x7F, 0x00, 0xFF}}},
	{{{71, 43, -46}, 0, {739, -16}, {0xF7, 0x64, 0xB3, 0xFF}}},
	{{{-5, 36, 43}, 0, {743, -18}, {0xFA, 0x5B, 0x58, 0xFF}}},
	{{{71, 43, 46}, 0, {742, -19}, {0xF7, 0x65, 0x4D, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Torso_mesh_layer_1_tri_1[] = {
	gsSPVertex(viridian_B_LoD_Switch_Torso_mesh_layer_1_vtx_1 + 0, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 1, 3, 0, 4, 5, 1, 0),
	gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
	gsSP2Triangles(6, 8, 10, 0, 6, 10, 11, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Head_DL_skinned_mesh_layer_1_vtx_0[8] = {
	{{{71, -2, -64}, 0, {989, 497}, {0xC4, 0xFD, 0x90, 0xFF}}},
	{{{71, 43, -46}, 0, {983, 497}, {0xF7, 0x64, 0xB3, 0xFF}}},
	{{{71, -66, 0}, 0, {991, 494}, {0xFF, 0x81, 0x00, 0xFF}}},
	{{{71, -47, 45}, 0, {990, 494}, {0xF8, 0xA4, 0x57, 0xFF}}},
	{{{71, 62, 0}, 0, {984, 494}, {0xF9, 0x7F, 0x00, 0xFF}}},
	{{{71, 43, 46}, 0, {986, 493}, {0xF7, 0x65, 0x4D, 0xFF}}},
	{{{71, -2, 64}, 0, {988, 493}, {0xC4, 0xFC, 0x70, 0xFF}}},
	{{{71, -47, -45}, 0, {991, 496}, {0xF8, 0xA5, 0xA8, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Head_DL_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Head_DL_skinned_mesh_layer_1_vtx_0 + 0, 8, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Head_DL_mesh_layer_1_vtx_0[8] = {
	{{{0, 62, 0}, 0, {739, -18}, {0xAE, 0x61, 0xFF, 0xFF}}},
	{{{0, 43, -46}, 0, {737, -15}, {0xAC, 0x43, 0xBC, 0xFF}}},
	{{{0, 43, 46}, 0, {741, -20}, {0xAC, 0x43, 0x44, 0xFF}}},
	{{{0, -1, 64}, 0, {744, -20}, {0xAF, 0x01, 0x62, 0xFF}}},
	{{{0, -47, 46}, 0, {746, -19}, {0xAD, 0xBD, 0x45, 0xFF}}},
	{{{0, -66, 1}, 0, {747, -18}, {0xB0, 0x9E, 0x01, 0xFF}}},
	{{{0, -47, -45}, 0, {748, -17}, {0xAD, 0xBC, 0xBD, 0xFF}}},
	{{{0, -2, -64}, 0, {745, -15}, {0xAF, 0xFF, 0x9E, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Head_DL_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Head_DL_mesh_layer_1_vtx_0 + 0, 8, 8),
	gsSP2Triangles(1, 8, 9, 0, 1, 4, 8, 0),
	gsSP2Triangles(5, 8, 4, 0, 5, 10, 8, 0),
	gsSP2Triangles(6, 10, 5, 0, 6, 11, 10, 0),
	gsSP2Triangles(3, 11, 6, 0, 3, 12, 11, 0),
	gsSP2Triangles(2, 12, 3, 0, 2, 13, 12, 0),
	gsSP2Triangles(2, 14, 13, 0, 2, 7, 14, 0),
	gsSP2Triangles(7, 15, 14, 0, 7, 0, 15, 0),
	gsSP2Triangles(0, 9, 15, 0, 0, 1, 9, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Head_DL_mesh_layer_1_vtx_1[49] = {
	{{{120, 111, 111}, 0, {1949, -17}, {0xFF, 0x5A, 0x5A, 0xFF}}},
	{{{213, 109, 109}, 0, {1949, -527}, {0x3A, 0x50, 0x50, 0xFF}}},
	{{{213, 124, 0}, 0, {764, -527}, {0x3A, 0x71, 0x00, 0xFF}}},
	{{{120, 126, 0}, 0, {764, -17}, {0xFF, 0x7F, 0x00, 0xFF}}},
	{{{213, 109, -109}, 0, {-421, -527}, {0x3A, 0x50, 0xB0, 0xFF}}},
	{{{120, 111, -111}, 0, {-421, -17}, {0xFF, 0x5A, 0xA6, 0xFF}}},
	{{{26, 122, 0}, 0, {764, 493}, {0xB8, 0x69, 0x00, 0xFF}}},
	{{{26, 108, -108}, 0, {-421, 493}, {0xBE, 0x4D, 0xB3, 0xFF}}},
	{{{26, 108, 108}, 0, {1949, 493}, {0xBE, 0x4D, 0x4D, 0xFF}}},
	{{{26, 0, 122}, 0, {746, -22}, {0xB9, 0x00, 0x69, 0xFF}}},
	{{{120, 111, 111}, 0, {746, -30}, {0xFF, 0x5A, 0x5A, 0xFF}}},
	{{{26, 108, 108}, 0, {736, -25}, {0xBE, 0x4D, 0x4D, 0xFF}}},
	{{{120, 0, 126}, 0, {751, -24}, {0xFF, 0x00, 0x7F, 0xFF}}},
	{{{26, -108, 108}, 0, {750, -20}, {0xBF, 0xB3, 0x4D, 0xFF}}},
	{{{0, -47, 46}, 0, {746, -19}, {0xAD, 0xBD, 0x45, 0xFF}}},
	{{{0, -1, 64}, 0, {744, -20}, {0xAF, 0x01, 0x62, 0xFF}}},
	{{{0, 43, 46}, 0, {741, -20}, {0xAC, 0x43, 0x44, 0xFF}}},
	{{{26, 122, 0}, 0, {729, -19}, {0xB8, 0x69, 0x00, 0xFF}}},
	{{{0, 62, 0}, 0, {739, -18}, {0xAE, 0x61, 0xFF, 0xFF}}},
	{{{26, 108, -108}, 0, {733, -2}, {0xBE, 0x4D, 0xB3, 0xFF}}},
	{{{0, 43, -46}, 0, {737, -15}, {0xAC, 0x43, 0xBC, 0xFF}}},
	{{{26, 0, -122}, 0, {748, -13}, {0xB9, 0x00, 0x97, 0xFF}}},
	{{{120, 0, -126}, 0, {757, -12}, {0xFF, 0x00, 0x81, 0xFF}}},
	{{{120, 111, -111}, 0, {763, -2}, {0xFF, 0x5A, 0xA6, 0xFF}}},
	{{{213, 0, -124}, 0, {763, -15}, {0x3A, 0x00, 0x8F, 0xFF}}},
	{{{213, 109, -109}, 0, {782, -11}, {0x3A, 0x50, 0xB0, 0xFF}}},
	{{{242, 0, -79}, 0, {765, -17}, {0x78, 0x00, 0xD6, 0xFF}}},
	{{{241, 75, -75}, 0, {774, -17}, {0x76, 0x21, 0xDF, 0xFF}}},
	{{{213, 124, 0}, 0, {782, -25}, {0x3A, 0x71, 0x00, 0xFF}}},
	{{{242, 79, 0}, 0, {772, -22}, {0x78, 0x2A, 0x00, 0xFF}}},
	{{{241, 75, 75}, 0, {765, -26}, {0x76, 0x21, 0x21, 0xFF}}},
	{{{213, 109, 109}, 0, {763, -31}, {0x3A, 0x50, 0x50, 0xFF}}},
	{{{213, 0, 124}, 0, {757, -24}, {0x3A, 0x00, 0x71, 0xFF}}},
	{{{120, -111, 111}, 0, {753, -21}, {0xFF, 0xA6, 0x5A, 0xFF}}},
	{{{213, -109, 109}, 0, {756, -21}, {0x3A, 0xB0, 0x50, 0xFF}}},
	{{{120, -126, 0}, 0, {754, -19}, {0xFF, 0x81, 0x00, 0xFF}}},
	{{{26, -122, 0}, 0, {750, -18}, {0xB9, 0x96, 0x00, 0xFF}}},
	{{{0, -66, 1}, 0, {747, -18}, {0xB0, 0x9E, 0x01, 0xFF}}},
	{{{0, -47, -45}, 0, {748, -17}, {0xAD, 0xBC, 0xBD, 0xFF}}},
	{{{26, -108, -108}, 0, {751, -16}, {0xBF, 0xB3, 0xB3, 0xFF}}},
	{{{0, -2, -64}, 0, {745, -15}, {0xAF, 0xFF, 0x9E, 0xFF}}},
	{{{120, -111, -111}, 0, {755, -17}, {0xFF, 0xA6, 0xA6, 0xFF}}},
	{{{213, -109, -109}, 0, {758, -17}, {0x3A, 0xB0, 0xB0, 0xFF}}},
	{{{241, -75, -75}, 0, {760, -18}, {0x76, 0xDF, 0xDF, 0xFF}}},
	{{{250, 0, 0}, 0, {764, -20}, {0x7F, 0x00, 0x00, 0xFF}}},
	{{{242, 0, 79}, 0, {761, -23}, {0x78, 0x00, 0x2A, 0xFF}}},
	{{{241, -75, 75}, 0, {758, -21}, {0x76, 0xDF, 0x21, 0xFF}}},
	{{{213, -124, 0}, 0, {757, -19}, {0x3A, 0x8F, 0x00, 0xFF}}},
	{{{242, -79, 0}, 0, {759, -20}, {0x78, 0xD6, 0x00, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Head_DL_mesh_layer_1_tri_1[] = {
	gsSPVertex(viridian_B_LoD_Switch_Head_DL_mesh_layer_1_vtx_1 + 0, 49, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 3, 5, 0, 6, 5, 7, 0),
	gsSP2Triangles(8, 3, 6, 0, 8, 0, 3, 0),
	gsSP2Triangles(9, 10, 11, 0, 9, 12, 10, 0),
	gsSP2Triangles(13, 12, 9, 0, 9, 14, 13, 0),
	gsSP2Triangles(9, 15, 14, 0, 16, 15, 9, 0),
	gsSP2Triangles(16, 9, 11, 0, 17, 16, 11, 0),
	gsSP2Triangles(17, 18, 16, 0, 19, 18, 17, 0),
	gsSP2Triangles(19, 20, 18, 0, 21, 20, 19, 0),
	gsSP2Triangles(19, 22, 21, 0, 19, 23, 22, 0),
	gsSP2Triangles(23, 24, 22, 0, 23, 25, 24, 0),
	gsSP2Triangles(25, 26, 24, 0, 25, 27, 26, 0),
	gsSP2Triangles(28, 27, 25, 0, 28, 29, 27, 0),
	gsSP2Triangles(30, 29, 28, 0, 30, 28, 31, 0),
	gsSP2Triangles(32, 30, 31, 0, 12, 32, 31, 0),
	gsSP2Triangles(12, 31, 10, 0, 33, 32, 12, 0),
	gsSP2Triangles(33, 34, 32, 0, 35, 34, 33, 0),
	gsSP2Triangles(36, 35, 33, 0, 36, 33, 13, 0),
	gsSP2Triangles(13, 33, 12, 0, 14, 36, 13, 0),
	gsSP2Triangles(14, 37, 36, 0, 36, 37, 38, 0),
	gsSP2Triangles(36, 38, 39, 0, 38, 21, 39, 0),
	gsSP2Triangles(38, 40, 21, 0, 21, 40, 20, 0),
	gsSP2Triangles(21, 41, 39, 0, 21, 22, 41, 0),
	gsSP2Triangles(22, 42, 41, 0, 22, 24, 42, 0),
	gsSP2Triangles(24, 43, 42, 0, 24, 26, 43, 0),
	gsSP2Triangles(43, 26, 44, 0, 26, 29, 44, 0),
	gsSP2Triangles(26, 27, 29, 0, 44, 29, 30, 0),
	gsSP2Triangles(44, 30, 45, 0, 32, 45, 30, 0),
	gsSP2Triangles(34, 45, 32, 0, 34, 46, 45, 0),
	gsSP2Triangles(47, 46, 34, 0, 35, 47, 34, 0),
	gsSP2Triangles(41, 47, 35, 0, 39, 41, 35, 0),
	gsSP2Triangles(39, 35, 36, 0, 41, 42, 47, 0),
	gsSP2Triangles(43, 47, 42, 0, 43, 48, 47, 0),
	gsSP2Triangles(43, 44, 48, 0, 48, 44, 45, 0),
	gsSP2Triangles(48, 45, 46, 0, 47, 48, 46, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Left_Wing_DL_mesh_layer_4_vtx_0[4] = {
	{{{-103, 212, -18}, 0, {-16, -34}, {0xE9, 0x00, 0x7D, 0xFF}}},
	{{{0, 0, 0}, 0, {974, 1978}, {0xE9, 0x00, 0x7D, 0xFF}}},
	{{{0, 212, 0}, 0, {974, -34}, {0xE9, 0x00, 0x7D, 0xFF}}},
	{{{-103, 0, -19}, 0, {-16, 1978}, {0xE9, 0x00, 0x7D, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Left_Wing_DL_mesh_layer_4_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Left_Wing_DL_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Left_Wing_DL_mesh_layer_4_vtx_1[4] = {
	{{{0, 0, 0}, 0, {-16, 1978}, {0xE9, 0x00, 0x7D, 0xFF}}},
	{{{104, 0, 19}, 0, {974, 1978}, {0xE9, 0x00, 0x7D, 0xFF}}},
	{{{104, 212, 19}, 0, {974, -34}, {0xE9, 0x00, 0x7D, 0xFF}}},
	{{{0, 212, 0}, 0, {-16, -34}, {0xE9, 0x00, 0x7D, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Left_Wing_DL_mesh_layer_4_tri_1[] = {
	gsSPVertex(viridian_B_LoD_Switch_Left_Wing_DL_mesh_layer_4_vtx_1 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Right_Wing_DL_mesh_layer_4_vtx_0[4] = {
	{{{-103, 212, 18}, 0, {-16, -34}, {0x17, 0x00, 0x7D, 0xFF}}},
	{{{0, 0, 0}, 0, {974, 1978}, {0x17, 0x00, 0x7D, 0xFF}}},
	{{{0, 212, 0}, 0, {974, -34}, {0x17, 0x00, 0x7D, 0xFF}}},
	{{{-103, 0, 19}, 0, {-16, 1978}, {0x17, 0x00, 0x7D, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Right_Wing_DL_mesh_layer_4_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Right_Wing_DL_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Right_Wing_DL_mesh_layer_4_vtx_1[4] = {
	{{{0, 0, 0}, 0, {-16, 1978}, {0x17, 0x00, 0x7D, 0xFF}}},
	{{{104, 0, -19}, 0, {974, 1978}, {0x17, 0x00, 0x7D, 0xFF}}},
	{{{104, 212, -19}, 0, {974, -34}, {0x17, 0x00, 0x7D, 0xFF}}},
	{{{0, 212, 0}, 0, {-16, -34}, {0x17, 0x00, 0x7D, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Right_Wing_DL_mesh_layer_4_tri_1[] = {
	gsSPVertex(viridian_B_LoD_Switch_Right_Wing_DL_mesh_layer_4_vtx_1 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Left_Arm_Color_skinned_mesh_layer_1_vtx_0[6] = {
	{{{71, -2, 64}, 0, {988, 493}, {0xC4, 0xFC, 0x70, 0xFF}}},
	{{{71, 43, 46}, 0, {986, 493}, {0xF7, 0x65, 0x4D, 0xFF}}},
	{{{-5, 36, 43}, 0, {987, 494}, {0xFA, 0x5B, 0x58, 0xFF}}},
	{{{-5, -7, 61}, 0, {988, 494}, {0x0B, 0xE1, 0x7B, 0xFF}}},
	{{{71, -47, 45}, 0, {990, 494}, {0xF8, 0xA4, 0x57, 0xFF}}},
	{{{-5, -47, 43}, 0, {988, 494}, {0x09, 0xA6, 0x59, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Left_Arm_Color_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Left_Arm_Color_skinned_mesh_layer_1_vtx_0 + 0, 6, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Left_Arm_Color_mesh_layer_1_vtx_0[5] = {
	{{{-11, -6, -38}, 0, {744, -18}, {0xBD, 0xDF, 0x99, 0xFF}}},
	{{{-11, 37, -15}, 0, {799, -3}, {0xA0, 0x53, 0xFF, 0xFF}}},
	{{{-10, -22, 7}, 0, {743, -19}, {0xD3, 0xCF, 0x6C, 0xFF}}},
	{{{-11, 17, 28}, 0, {744, -19}, {0xC8, 0x20, 0x6D, 0xFF}}},
	{{{-11, 37, -15}, 0, {744, -19}, {0xA0, 0x53, 0xFF, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Left_Arm_Color_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Left_Arm_Color_mesh_layer_1_vtx_0 + 0, 5, 6),
	gsSP2Triangles(6, 3, 7, 0, 2, 3, 6, 0),
	gsSP2Triangles(8, 2, 6, 0, 8, 1, 2, 0),
	gsSP2Triangles(0, 1, 8, 0, 9, 0, 8, 0),
	gsSP2Triangles(10, 0, 9, 0, 10, 4, 0, 0),
	gsSP2Triangles(10, 5, 4, 0, 5, 10, 3, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Left_Arm_Color_mesh_layer_1_vtx_1[12] = {
	{{{6, 19, 29}, 0, {795, -9}, {0xFB, 0x2C, 0x77, 0xFF}}},
	{{{-11, 17, 28}, 0, {799, -11}, {0xC8, 0x20, 0x6D, 0xFF}}},
	{{{-10, -22, 7}, 0, {783, -11}, {0xD3, 0xCF, 0x6C, 0xFF}}},
	{{{6, 41, -16}, 0, {795, -5}, {0xFB, 0x78, 0xD5, 0xFF}}},
	{{{60, 35, -14}, 0, {791, -7}, {0x05, 0x77, 0xD3, 0xFF}}},
	{{{60, 17, 29}, 0, {791, -7}, {0x03, 0x27, 0x79, 0xFF}}},
	{{{6, -26, 7}, 0, {787, -8}, {0x01, 0x88, 0x28, 0xFF}}},
	{{{-11, -6, -38}, 0, {782, -2}, {0xBD, 0xDF, 0x99, 0xFF}}},
	{{{6, -5, -38}, 0, {787, -4}, {0xFF, 0xD7, 0x88, 0xFF}}},
	{{{-11, 37, -15}, 0, {799, -3}, {0xA0, 0x53, 0xFF, 0xFF}}},
	{{{60, -3, -32}, 0, {791, -7}, {0x05, 0xD6, 0x88, 0xFF}}},
	{{{60, -21, 5}, 0, {791, -7}, {0x04, 0x87, 0x25, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Left_Arm_Color_mesh_layer_1_tri_1[] = {
	gsSPVertex(viridian_B_LoD_Switch_Left_Arm_Color_mesh_layer_1_vtx_1 + 0, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(0, 4, 3, 0, 0, 5, 4, 0),
	gsSP2Triangles(6, 5, 0, 0, 0, 2, 6, 0),
	gsSP2Triangles(6, 2, 7, 0, 6, 7, 8, 0),
	gsSP2Triangles(8, 7, 9, 0, 8, 9, 3, 0),
	gsSP2Triangles(3, 9, 1, 0, 3, 10, 8, 0),
	gsSP2Triangles(3, 4, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(8, 11, 6, 0, 6, 11, 5, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Left_Forearm_skinned_mesh_layer_1_vtx_0[4] = {
	{{{60, 17, 29}, 0, {1035, 506}, {0x03, 0x27, 0x79, 0xFF}}},
	{{{60, -21, 5}, 0, {1035, 506}, {0x04, 0x87, 0x25, 0xFF}}},
	{{{60, -3, -32}, 0, {1035, 506}, {0x05, 0xD6, 0x88, 0xFF}}},
	{{{60, 35, -14}, 0, {1035, 506}, {0x05, 0x77, 0xD3, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Left_Forearm_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Left_Forearm_skinned_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Left_Forearm_mesh_layer_1_vtx_0[4] = {
	{{{1, 17, 29}, 0, {791, -7}, {0x01, 0x27, 0x79, 0xFF}}},
	{{{1, 35, -14}, 0, {791, -7}, {0x01, 0x77, 0xD2, 0xFF}}},
	{{{1, -3, -33}, 0, {791, -7}, {0x01, 0xD6, 0x88, 0xFF}}},
	{{{1, -21, 5}, 0, {791, -7}, {0x01, 0x86, 0x23, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Left_Forearm_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Left_Forearm_mesh_layer_1_vtx_0 + 0, 4, 4),
	gsSP2Triangles(4, 0, 1, 0, 5, 0, 4, 0),
	gsSP2Triangles(5, 3, 0, 0, 6, 3, 5, 0),
	gsSP2Triangles(6, 2, 3, 0, 7, 2, 6, 0),
	gsSP2Triangles(7, 1, 2, 0, 4, 1, 7, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Left_Hand_DL_skinned_mesh_layer_1_vtx_0[4] = {
	{{{1, -21, 5}, 0, {1035, 506}, {0x01, 0x86, 0x23, 0xFF}}},
	{{{1, 17, 29}, 0, {1035, 506}, {0x01, 0x27, 0x79, 0xFF}}},
	{{{1, -3, -33}, 0, {1035, 506}, {0x01, 0xD6, 0x88, 0xFF}}},
	{{{1, 35, -14}, 0, {1035, 506}, {0x01, 0x77, 0xD2, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Left_Hand_DL_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Left_Hand_DL_skinned_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Left_Hand_DL_mesh_layer_1_vtx_0[4] = {
	{{{-15, 17, 29}, 0, {791, -7}, {0xB6, 0x1A, 0x64, 0xFF}}},
	{{{-15, -19, 5}, 0, {791, -7}, {0xBA, 0x9C, 0x22, 0xFF}}},
	{{{-15, -2, -31}, 0, {791, -7}, {0xB2, 0xDE, 0xA2, 0xFF}}},
	{{{-15, 33, -14}, 0, {791, -7}, {0xB5, 0x60, 0xDD, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Left_Hand_DL_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Left_Hand_DL_mesh_layer_1_vtx_0 + 0, 4, 4),
	gsSP2Triangles(0, 4, 1, 0, 0, 5, 4, 0),
	gsSP2Triangles(2, 5, 0, 0, 2, 6, 5, 0),
	gsSP2Triangles(3, 6, 2, 0, 3, 7, 6, 0),
	gsSP2Triangles(1, 7, 3, 0, 1, 4, 7, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Left_Hand_DL_mesh_layer_1_vtx_1[13] = {
	{{{-15, -19, 5}, 0, {791, -7}, {0xBA, 0x9C, 0x22, 0xFF}}},
	{{{-5, 22, 38}, 0, {791, -7}, {0xD4, 0x2B, 0x6F, 0xFF}}},
	{{{-15, 17, 29}, 0, {791, -7}, {0xB6, 0x1A, 0x64, 0xFF}}},
	{{{-5, -35, 11}, 0, {791, -7}, {0xD8, 0x8F, 0x2A, 0xFF}}},
	{{{-15, -2, -31}, 0, {791, -7}, {0xB2, 0xDE, 0xA2, 0xFF}}},
	{{{-5, -8, -47}, 0, {791, -7}, {0xD3, 0xD8, 0x90, 0xFF}}},
	{{{-15, 33, -14}, 0, {791, -7}, {0xB5, 0x60, 0xDD, 0xFF}}},
	{{{-5, 50, -19}, 0, {791, -7}, {0xD5, 0x71, 0xD9, 0xFF}}},
	{{{44, 42, -17}, 0, {791, -7}, {0x46, 0x64, 0xDC, 0xFF}}},
	{{{44, 20, 31}, 0, {791, -7}, {0x46, 0x24, 0x64, 0xFF}}},
	{{{44, -28, 8}, 0, {791, -7}, {0x46, 0x9C, 0x24, 0xFF}}},
	{{{44, -5, -39}, 0, {791, -7}, {0x46, 0xDC, 0x9C, 0xFF}}},
	{{{57, 7, -4}, 0, {791, -7}, {0x7F, 0x00, 0x00, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Left_Hand_DL_mesh_layer_1_tri_1[] = {
	gsSPVertex(viridian_B_LoD_Switch_Left_Hand_DL_mesh_layer_1_vtx_1 + 0, 13, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 4, 5, 3, 0),
	gsSP2Triangles(6, 5, 4, 0, 6, 7, 5, 0),
	gsSP2Triangles(2, 7, 6, 0, 2, 1, 7, 0),
	gsSP2Triangles(1, 8, 7, 0, 1, 9, 8, 0),
	gsSP2Triangles(3, 9, 1, 0, 3, 10, 9, 0),
	gsSP2Triangles(5, 10, 3, 0, 5, 11, 10, 0),
	gsSP2Triangles(7, 11, 5, 0, 7, 8, 11, 0),
	gsSP2Triangles(8, 12, 11, 0, 9, 12, 8, 0),
	gsSP2Triangles(10, 12, 9, 0, 11, 12, 10, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Right_Arm_Color_skinned_mesh_layer_1_vtx_0[6] = {
	{{{-5, 36, -43}, 0, {987, 495}, {0xFA, 0x5B, 0xA8, 0xFF}}},
	{{{-5, -7, -61}, 0, {988, 495}, {0x0B, 0xE0, 0x86, 0xFF}}},
	{{{71, -2, -64}, 0, {989, 497}, {0xC4, 0xFD, 0x90, 0xFF}}},
	{{{71, -47, -45}, 0, {991, 496}, {0xF8, 0xA5, 0xA8, 0xFF}}},
	{{{-5, -47, -43}, 0, {988, 495}, {0x09, 0xA6, 0xA7, 0xFF}}},
	{{{71, 43, -46}, 0, {983, 497}, {0xF7, 0x64, 0xB3, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Right_Arm_Color_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Right_Arm_Color_skinned_mesh_layer_1_vtx_0 + 0, 6, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Right_Arm_Color_mesh_layer_1_vtx_0[6] = {
	{{{-11, -6, 39}, 0, {743, -17}, {0xBD, 0xDF, 0x67, 0xFF}}},
	{{{-10, -22, -6}, 0, {742, -17}, {0xD3, 0xCF, 0x94, 0xFF}}},
	{{{-11, 17, -27}, 0, {745, -16}, {0xC7, 0x20, 0x93, 0xFF}}},
	{{{-11, 37, 16}, 0, {744, -17}, {0xA1, 0x54, 0x02, 0xFF}}},
	{{{-11, -6, 39}, 0, {782, -11}, {0xBD, 0xDF, 0x67, 0xFF}}},
	{{{-11, 37, 16}, 0, {782, -19}, {0xA1, 0x54, 0x02, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Right_Arm_Color_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Right_Arm_Color_mesh_layer_1_vtx_0 + 0, 6, 6),
	gsSP2Triangles(6, 1, 0, 0, 7, 6, 0, 0),
	gsSP2Triangles(7, 0, 5, 0, 7, 5, 2, 0),
	gsSP2Triangles(8, 7, 2, 0, 9, 8, 2, 0),
	gsSP2Triangles(9, 2, 3, 0, 9, 3, 4, 0),
	gsSP2Triangles(4, 1, 9, 0, 10, 11, 1, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Right_Arm_Color_mesh_layer_1_vtx_1[12] = {
	{{{6, -5, 39}, 0, {786, -13}, {0xFF, 0xD7, 0x78, 0xFF}}},
	{{{-11, 37, 16}, 0, {782, -19}, {0xA1, 0x54, 0x02, 0xFF}}},
	{{{-11, -6, 39}, 0, {782, -11}, {0xBD, 0xDF, 0x67, 0xFF}}},
	{{{6, 41, 17}, 0, {787, -17}, {0xFB, 0x78, 0x2B, 0xFF}}},
	{{{60, -3, 33}, 0, {790, -15}, {0x05, 0xD6, 0x78, 0xFF}}},
	{{{60, -21, -4}, 0, {791, -15}, {0x04, 0x87, 0xDB, 0xFF}}},
	{{{6, -26, -6}, 0, {794, -13}, {0x01, 0x88, 0xD8, 0xFF}}},
	{{{-10, -22, -6}, 0, {799, -11}, {0xD3, 0xCF, 0x94, 0xFF}}},
	{{{6, 19, -28}, 0, {795, -17}, {0xFB, 0x2C, 0x89, 0xFF}}},
	{{{-11, 17, -27}, 0, {799, -19}, {0xC7, 0x20, 0x93, 0xFF}}},
	{{{60, 35, 15}, 0, {790, -15}, {0x05, 0x77, 0x2D, 0xFF}}},
	{{{60, 17, -28}, 0, {790, -15}, {0x03, 0x27, 0x87, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Right_Arm_Color_mesh_layer_1_tri_1[] = {
	gsSPVertex(viridian_B_LoD_Switch_Right_Arm_Color_mesh_layer_1_vtx_1 + 0, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 0, 4, 0, 0, 5, 4, 0),
	gsSP2Triangles(0, 6, 5, 0, 6, 0, 2, 0),
	gsSP2Triangles(6, 2, 7, 0, 8, 6, 7, 0),
	gsSP2Triangles(8, 7, 9, 0, 3, 8, 9, 0),
	gsSP2Triangles(3, 9, 1, 0, 8, 3, 10, 0),
	gsSP2Triangles(3, 4, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(6, 8, 11, 0, 6, 11, 5, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Right_Forearm_skinned_mesh_layer_1_vtx_0[4] = {
	{{{60, -21, -4}, 0, {1035, 498}, {0x04, 0x87, 0xDB, 0xFF}}},
	{{{60, 17, -28}, 0, {1035, 498}, {0x03, 0x27, 0x87, 0xFF}}},
	{{{60, -3, 33}, 0, {1035, 498}, {0x05, 0xD6, 0x78, 0xFF}}},
	{{{60, 35, 15}, 0, {1034, 498}, {0x05, 0x77, 0x2D, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Right_Forearm_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Right_Forearm_skinned_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Right_Forearm_mesh_layer_1_vtx_0[4] = {
	{{{1, 17, -28}, 0, {790, -15}, {0x01, 0x27, 0x87, 0xFF}}},
	{{{1, -21, -4}, 0, {790, -15}, {0x01, 0x86, 0xDD, 0xFF}}},
	{{{1, -3, 34}, 0, {790, -15}, {0x01, 0xD6, 0x78, 0xFF}}},
	{{{1, 35, 15}, 0, {790, -15}, {0x01, 0x77, 0x2E, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Right_Forearm_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Right_Forearm_mesh_layer_1_vtx_0 + 0, 4, 4),
	gsSP2Triangles(4, 0, 1, 0, 4, 5, 0, 0),
	gsSP2Triangles(5, 2, 0, 0, 5, 6, 2, 0),
	gsSP2Triangles(6, 3, 2, 0, 6, 7, 3, 0),
	gsSP2Triangles(7, 1, 3, 0, 7, 4, 1, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Right_Hand_DL_skinned_mesh_layer_1_vtx_0[4] = {
	{{{1, -21, -4}, 0, {1035, 498}, {0x01, 0x86, 0xDD, 0xFF}}},
	{{{1, 17, -28}, 0, {1035, 498}, {0x01, 0x27, 0x87, 0xFF}}},
	{{{1, -3, 34}, 0, {1035, 498}, {0x01, 0xD6, 0x78, 0xFF}}},
	{{{1, 35, 15}, 0, {1034, 498}, {0x01, 0x77, 0x2E, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Right_Hand_DL_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Right_Hand_DL_skinned_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Right_Hand_DL_mesh_layer_1_vtx_0[4] = {
	{{{-15, 17, -28}, 0, {790, -15}, {0xB6, 0x1A, 0x9C, 0xFF}}},
	{{{-15, 33, 15}, 0, {790, -15}, {0xB5, 0x60, 0x23, 0xFF}}},
	{{{-15, -2, 32}, 0, {790, -15}, {0xB2, 0xDE, 0x5E, 0xFF}}},
	{{{-15, -19, -4}, 0, {790, -15}, {0xBA, 0x9C, 0xDE, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Right_Hand_DL_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Right_Hand_DL_mesh_layer_1_vtx_0 + 0, 4, 4),
	gsSP2Triangles(0, 1, 4, 0, 1, 5, 4, 0),
	gsSP2Triangles(1, 3, 5, 0, 3, 6, 5, 0),
	gsSP2Triangles(3, 2, 6, 0, 2, 7, 6, 0),
	gsSP2Triangles(2, 0, 7, 0, 0, 4, 7, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Right_Hand_DL_mesh_layer_1_vtx_1[13] = {
	{{{-15, -19, -4}, 0, {790, -15}, {0xBA, 0x9C, 0xDE, 0xFF}}},
	{{{-15, 17, -28}, 0, {790, -15}, {0xB6, 0x1A, 0x9C, 0xFF}}},
	{{{-5, 22, -37}, 0, {790, -15}, {0xD4, 0x2B, 0x91, 0xFF}}},
	{{{-5, 50, 20}, 0, {790, -15}, {0xD5, 0x71, 0x27, 0xFF}}},
	{{{-15, 33, 15}, 0, {790, -15}, {0xB5, 0x60, 0x23, 0xFF}}},
	{{{-5, -8, 48}, 0, {790, -15}, {0xD3, 0xD8, 0x70, 0xFF}}},
	{{{-15, -2, 32}, 0, {790, -15}, {0xB2, 0xDE, 0x5E, 0xFF}}},
	{{{-5, -35, -10}, 0, {790, -15}, {0xD8, 0x8F, 0xD6, 0xFF}}},
	{{{44, 20, -30}, 0, {790, -15}, {0x46, 0x24, 0x9C, 0xFF}}},
	{{{44, 42, 18}, 0, {790, -15}, {0x46, 0x64, 0x24, 0xFF}}},
	{{{44, -5, 40}, 0, {790, -15}, {0x46, 0xDC, 0x64, 0xFF}}},
	{{{44, -28, -7}, 0, {790, -15}, {0x46, 0x9C, 0xDC, 0xFF}}},
	{{{57, 7, 5}, 0, {790, -15}, {0x7F, 0x00, 0x00, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Right_Hand_DL_mesh_layer_1_tri_1[] = {
	gsSPVertex(viridian_B_LoD_Switch_Right_Hand_DL_mesh_layer_1_vtx_1 + 0, 13, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(1, 4, 3, 0, 4, 5, 3, 0),
	gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0),
	gsSP2Triangles(6, 0, 7, 0, 0, 2, 7, 0),
	gsSP2Triangles(7, 2, 8, 0, 2, 9, 8, 0),
	gsSP2Triangles(2, 3, 9, 0, 3, 10, 9, 0),
	gsSP2Triangles(3, 5, 10, 0, 5, 11, 10, 0),
	gsSP2Triangles(5, 7, 11, 0, 7, 8, 11, 0),
	gsSP2Triangles(11, 8, 12, 0, 8, 9, 12, 0),
	gsSP2Triangles(9, 10, 12, 0, 10, 11, 12, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Left_Thigh_Color_skinned_mesh_layer_1_vtx_0[4] = {
	{{{-6, 28, 38}, 0, {988, 495}, {0x91, 0x33, 0x23, 0xFF}}},
	{{{-6, -6, 4}, 0, {988, 495}, {0x81, 0xFF, 0x01, 0xFF}}},
	{{{-6, -40, 39}, 0, {988, 495}, {0x93, 0xC7, 0x20, 0xFF}}},
	{{{-6, -6, 72}, 0, {988, 495}, {0x8E, 0x05, 0x37, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Left_Thigh_Color_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Left_Thigh_Color_skinned_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Left_Thigh_Color_mesh_layer_1_vtx_0[4] = {
	{{{1, -36, -4}, 0, {744, -18}, {0xB5, 0x9A, 0xFE, 0xFF}}},
	{{{1, -2, 30}, 0, {744, -18}, {0x99, 0x01, 0x4A, 0xFF}}},
	{{{1, 32, -3}, 0, {744, -18}, {0xB4, 0x66, 0x02, 0xFF}}},
	{{{1, -2, -38}, 0, {744, -18}, {0x98, 0x03, 0xB7, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Left_Thigh_Color_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Left_Thigh_Color_mesh_layer_1_vtx_0 + 0, 4, 4),
	gsSP2Triangles(4, 0, 1, 0, 5, 0, 4, 0),
	gsSP2Triangles(5, 3, 0, 0, 2, 3, 5, 0),
	gsSP2Triangles(6, 2, 5, 0, 1, 2, 6, 0),
	gsSP2Triangles(7, 1, 6, 0, 4, 1, 7, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Left_Thigh_Color_mesh_layer_1_vtx_1[12] = {
	{{{6, -2, -38}, 0, {744, -18}, {0x00, 0x02, 0x81, 0xFF}}},
	{{{1, -2, -38}, 0, {744, -18}, {0x98, 0x03, 0xB7, 0xFF}}},
	{{{1, 32, -3}, 0, {744, -18}, {0xB4, 0x66, 0x02, 0xFF}}},
	{{{6, -36, -4}, 0, {744, -18}, {0x00, 0x81, 0xFE, 0xFF}}},
	{{{46, -36, -4}, 0, {744, -18}, {0x00, 0x81, 0xFE, 0xFF}}},
	{{{46, -2, -38}, 0, {744, -18}, {0x00, 0x02, 0x81, 0xFF}}},
	{{{6, 32, -3}, 0, {744, -18}, {0x00, 0x7F, 0x02, 0xFF}}},
	{{{1, -2, 30}, 0, {744, -18}, {0x99, 0x01, 0x4A, 0xFF}}},
	{{{6, -2, 30}, 0, {744, -18}, {0x00, 0xFE, 0x7F, 0xFF}}},
	{{{1, -36, -4}, 0, {744, -18}, {0xB5, 0x9A, 0xFE, 0xFF}}},
	{{{46, -2, 30}, 0, {744, -18}, {0x00, 0xFE, 0x7F, 0xFF}}},
	{{{46, 32, -3}, 0, {744, -18}, {0x00, 0x7F, 0x02, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Left_Thigh_Color_mesh_layer_1_tri_1[] = {
	gsSPVertex(viridian_B_LoD_Switch_Left_Thigh_Color_mesh_layer_1_vtx_1 + 0, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(4, 3, 0, 0, 4, 0, 5, 0),
	gsSP2Triangles(5, 0, 6, 0, 0, 2, 6, 0),
	gsSP2Triangles(6, 2, 7, 0, 6, 7, 8, 0),
	gsSP2Triangles(8, 7, 9, 0, 8, 9, 3, 0),
	gsSP2Triangles(3, 9, 1, 0, 10, 8, 3, 0),
	gsSP2Triangles(11, 8, 10, 0, 11, 6, 8, 0),
	gsSP2Triangles(5, 6, 11, 0, 10, 3, 4, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Left_Leg_skinned_mesh_layer_1_vtx_0[4] = {
	{{{46, -2, 30}, 0, {988, 495}, {0x00, 0xFE, 0x7F, 0xFF}}},
	{{{46, 32, -3}, 0, {988, 495}, {0x00, 0x7F, 0x02, 0xFF}}},
	{{{46, -36, -4}, 0, {988, 495}, {0x00, 0x81, 0xFE, 0xFF}}},
	{{{46, -2, -38}, 0, {988, 495}, {0x00, 0x02, 0x81, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Left_Leg_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Left_Leg_skinned_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Left_Leg_mesh_layer_1_vtx_0[4] = {
	{{{-1, 32, -3}, 0, {744, -18}, {0x00, 0x7F, 0x02, 0xFF}}},
	{{{-1, -2, 30}, 0, {744, -18}, {0x00, 0xFE, 0x7F, 0xFF}}},
	{{{-1, -36, -4}, 0, {744, -18}, {0x00, 0x81, 0xFE, 0xFF}}},
	{{{-1, -2, -38}, 0, {744, -18}, {0x00, 0x02, 0x81, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Left_Leg_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Left_Leg_mesh_layer_1_vtx_0 + 0, 4, 4),
	gsSP2Triangles(0, 4, 1, 0, 0, 5, 4, 0),
	gsSP2Triangles(2, 5, 0, 0, 2, 6, 5, 0),
	gsSP2Triangles(3, 6, 2, 0, 3, 7, 6, 0),
	gsSP2Triangles(1, 7, 3, 0, 1, 4, 7, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Left_Leg_mesh_layer_1_vtx_1[8] = {
	{{{-1, -2, 30}, 0, {744, -18}, {0x00, 0xFE, 0x7F, 0xFF}}},
	{{{9, 32, -3}, 0, {744, -18}, {0x23, 0x7A, 0x02, 0xFF}}},
	{{{-1, 32, -3}, 0, {744, -18}, {0x00, 0x7F, 0x02, 0xFF}}},
	{{{9, -2, 30}, 0, {744, -18}, {0x20, 0x08, 0x7B, 0xFF}}},
	{{{-1, -36, -4}, 0, {744, -18}, {0x00, 0x81, 0xFE, 0xFF}}},
	{{{9, -36, -4}, 0, {744, -18}, {0xF9, 0x81, 0xFE, 0xFF}}},
	{{{-1, -2, -38}, 0, {744, -18}, {0x00, 0x02, 0x81, 0xFF}}},
	{{{9, -2, -38}, 0, {744, -18}, {0x20, 0x0B, 0x86, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Left_Leg_mesh_layer_1_tri_1[] = {
	gsSPVertex(viridian_B_LoD_Switch_Left_Leg_mesh_layer_1_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 4, 5, 3, 0),
	gsSP2Triangles(6, 5, 4, 0, 6, 7, 5, 0),
	gsSP2Triangles(2, 7, 6, 0, 2, 1, 7, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Left_Shoe_skinned_mesh_layer_1_vtx_0[4] = {
	{{{9, -2, 30}, 0, {988, 495}, {0x20, 0x08, 0x7B, 0xFF}}},
	{{{9, 32, -3}, 0, {988, 495}, {0x23, 0x7A, 0x02, 0xFF}}},
	{{{9, -36, -4}, 0, {988, 495}, {0xF9, 0x81, 0xFE, 0xFF}}},
	{{{9, -2, -38}, 0, {988, 495}, {0x20, 0x0B, 0x86, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Left_Shoe_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Left_Shoe_skinned_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Left_Shoe_mesh_layer_1_vtx_0[4] = {
	{{{-38, -9, -3}, 0, {744, -18}, {0x0B, 0x7E, 0x03, 0xFF}}},
	{{{-5, -21, 30}, 0, {744, -18}, {0xE9, 0xCD, 0x72, 0xFF}}},
	{{{26, -33, -4}, 0, {744, -18}, {0xFA, 0x81, 0xFF, 0xFF}}},
	{{{-6, -21, -38}, 0, {744, -18}, {0xE8, 0xCF, 0x8D, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Left_Shoe_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Left_Shoe_mesh_layer_1_vtx_0 + 0, 4, 4),
	gsSP2Triangles(0, 4, 1, 0, 0, 5, 4, 0),
	gsSP2Triangles(2, 5, 0, 0, 2, 6, 5, 0),
	gsSP2Triangles(3, 6, 2, 0, 3, 7, 6, 0),
	gsSP2Triangles(1, 7, 3, 0, 1, 4, 7, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Left_Shoe_mesh_layer_1_vtx_1[19] = {
	{{{17, 42, -38}, 0, {743, -18}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{-14, 54, -3}, 0, {743, -18}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{18, 42, 30}, 0, {743, -18}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{91, 15, -5}, 0, {743, -18}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{59, 27, 30}, 0, {743, -18}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{59, 27, -38}, 0, {743, -18}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{-38, -9, -3}, 0, {744, -18}, {0x0B, 0x7E, 0x03, 0xFF}}},
	{{{-14, 54, -3}, 0, {743, -18}, {0x89, 0x2C, 0x02, 0xFF}}},
	{{{17, 42, -38}, 0, {743, -18}, {0xD1, 0x12, 0x8B, 0xFF}}},
	{{{-5, -21, 30}, 0, {744, -18}, {0xE9, 0xCD, 0x72, 0xFF}}},
	{{{18, 42, 30}, 0, {743, -18}, {0xD4, 0x10, 0x76, 0xFF}}},
	{{{59, 27, 30}, 0, {743, -18}, {0x2F, 0xEE, 0x75, 0xFF}}},
	{{{41, -22, 30}, 0, {743, -18}, {0x1C, 0xB9, 0x65, 0xFF}}},
	{{{26, -33, -4}, 0, {744, -18}, {0xFA, 0x81, 0xFF, 0xFF}}},
	{{{73, -34, -5}, 0, {743, -18}, {0x53, 0xA0, 0xFE, 0xFF}}},
	{{{-6, -21, -38}, 0, {744, -18}, {0xE8, 0xCF, 0x8D, 0xFF}}},
	{{{40, -22, -38}, 0, {743, -18}, {0x19, 0xBA, 0x99, 0xFF}}},
	{{{59, 27, -38}, 0, {743, -18}, {0x2C, 0xF0, 0x8A, 0xFF}}},
	{{{91, 15, -5}, 0, {743, -18}, {0x77, 0xD4, 0xFE, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Left_Shoe_mesh_layer_1_tri_1[] = {
	gsSPVertex(viridian_B_LoD_Switch_Left_Shoe_mesh_layer_1_vtx_1 + 0, 19, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
	gsSP2Triangles(2, 4, 3, 0, 3, 5, 0, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
	gsSP2Triangles(9, 10, 7, 0, 9, 11, 10, 0),
	gsSP2Triangles(9, 12, 11, 0, 13, 12, 9, 0),
	gsSP2Triangles(13, 14, 12, 0, 15, 14, 13, 0),
	gsSP2Triangles(15, 16, 14, 0, 8, 16, 15, 0),
	gsSP2Triangles(6, 8, 15, 0, 8, 17, 16, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 14, 0),
	gsSP2Triangles(14, 18, 11, 0, 14, 11, 12, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Right_Thigh_Color_skinned_mesh_layer_1_vtx_0[4] = {
	{{{-6, -6, -4}, 0, {988, 495}, {0x81, 0xFF, 0xFF, 0xFF}}},
	{{{-6, 28, -38}, 0, {988, 495}, {0x91, 0x33, 0xDD, 0xFF}}},
	{{{-6, -40, -39}, 0, {988, 495}, {0x93, 0xC7, 0xE0, 0xFF}}},
	{{{-6, -6, -72}, 0, {988, 495}, {0x8E, 0x05, 0xC9, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Right_Thigh_Color_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Right_Thigh_Color_skinned_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Right_Thigh_Color_mesh_layer_1_vtx_0[4] = {
	{{{1, -36, 4}, 0, {744, -18}, {0xB5, 0x9A, 0x02, 0xFF}}},
	{{{1, -2, 38}, 0, {744, -18}, {0x98, 0x03, 0x49, 0xFF}}},
	{{{1, 32, 3}, 0, {744, -18}, {0xB4, 0x66, 0xFE, 0xFF}}},
	{{{1, -2, -30}, 0, {744, -18}, {0x99, 0x01, 0xB6, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Right_Thigh_Color_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Right_Thigh_Color_mesh_layer_1_vtx_0 + 0, 4, 4),
	gsSP2Triangles(4, 0, 1, 0, 4, 5, 0, 0),
	gsSP2Triangles(5, 6, 0, 0, 6, 2, 0, 0),
	gsSP2Triangles(6, 7, 2, 0, 7, 3, 2, 0),
	gsSP2Triangles(7, 1, 3, 0, 7, 4, 1, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Right_Thigh_Color_mesh_layer_1_vtx_1[12] = {
	{{{6, -2, 38}, 0, {744, -18}, {0x00, 0x02, 0x7F, 0xFF}}},
	{{{1, 32, 3}, 0, {744, -18}, {0xB4, 0x66, 0xFE, 0xFF}}},
	{{{1, -2, 38}, 0, {744, -18}, {0x98, 0x03, 0x49, 0xFF}}},
	{{{6, 32, 3}, 0, {744, -18}, {0x00, 0x7F, 0xFE, 0xFF}}},
	{{{46, -2, 38}, 0, {744, -18}, {0x00, 0x02, 0x7F, 0xFF}}},
	{{{46, -36, 4}, 0, {744, -18}, {0x00, 0x81, 0x02, 0xFF}}},
	{{{6, -36, 4}, 0, {744, -18}, {0x00, 0x81, 0x02, 0xFF}}},
	{{{1, -36, 4}, 0, {744, -18}, {0xB5, 0x9A, 0x02, 0xFF}}},
	{{{6, -2, -30}, 0, {744, -18}, {0x00, 0xFE, 0x81, 0xFF}}},
	{{{1, -2, -30}, 0, {744, -18}, {0x99, 0x01, 0xB6, 0xFF}}},
	{{{46, 32, 3}, 0, {744, -18}, {0x00, 0x7F, 0xFE, 0xFF}}},
	{{{46, -2, -30}, 0, {744, -18}, {0x00, 0xFE, 0x81, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Right_Thigh_Color_mesh_layer_1_tri_1[] = {
	gsSPVertex(viridian_B_LoD_Switch_Right_Thigh_Color_mesh_layer_1_vtx_1 + 0, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 5, 4, 0, 0),
	gsSP2Triangles(5, 0, 6, 0, 6, 0, 2, 0),
	gsSP2Triangles(6, 2, 7, 0, 8, 6, 7, 0),
	gsSP2Triangles(8, 7, 9, 0, 3, 8, 9, 0),
	gsSP2Triangles(3, 9, 1, 0, 10, 8, 3, 0),
	gsSP2Triangles(10, 11, 8, 0, 11, 6, 8, 0),
	gsSP2Triangles(11, 5, 6, 0, 4, 10, 3, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Right_Leg_skinned_mesh_layer_1_vtx_0[4] = {
	{{{46, -2, -30}, 0, {988, 495}, {0x00, 0xFE, 0x81, 0xFF}}},
	{{{46, 32, 3}, 0, {988, 495}, {0x00, 0x7F, 0xFE, 0xFF}}},
	{{{46, -36, 4}, 0, {988, 495}, {0x00, 0x81, 0x02, 0xFF}}},
	{{{46, -2, 38}, 0, {988, 495}, {0x00, 0x02, 0x7F, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Right_Leg_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Right_Leg_skinned_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Right_Leg_mesh_layer_1_vtx_0[4] = {
	{{{-1, 32, 3}, 0, {744, -18}, {0x00, 0x7F, 0xFE, 0xFF}}},
	{{{-1, -2, 38}, 0, {744, -18}, {0x00, 0x02, 0x7F, 0xFF}}},
	{{{-1, -36, 4}, 0, {744, -18}, {0x00, 0x81, 0x02, 0xFF}}},
	{{{-1, -2, -30}, 0, {744, -18}, {0x00, 0xFE, 0x81, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Right_Leg_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Right_Leg_mesh_layer_1_vtx_0 + 0, 4, 4),
	gsSP2Triangles(0, 1, 4, 0, 1, 5, 4, 0),
	gsSP2Triangles(1, 3, 5, 0, 3, 6, 5, 0),
	gsSP2Triangles(3, 2, 6, 0, 2, 7, 6, 0),
	gsSP2Triangles(2, 0, 7, 0, 0, 4, 7, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Right_Leg_mesh_layer_1_vtx_1[8] = {
	{{{-1, -2, -30}, 0, {744, -18}, {0x00, 0xFE, 0x81, 0xFF}}},
	{{{-1, 32, 3}, 0, {744, -18}, {0x00, 0x7F, 0xFE, 0xFF}}},
	{{{9, 32, 3}, 0, {744, -18}, {0x23, 0x7A, 0xFE, 0xFF}}},
	{{{9, -2, 38}, 0, {744, -18}, {0x20, 0x0B, 0x7A, 0xFF}}},
	{{{-1, -2, 38}, 0, {744, -18}, {0x00, 0x02, 0x7F, 0xFF}}},
	{{{9, -36, 4}, 0, {744, -18}, {0xF9, 0x81, 0x02, 0xFF}}},
	{{{-1, -36, 4}, 0, {744, -18}, {0x00, 0x81, 0x02, 0xFF}}},
	{{{9, -2, -30}, 0, {744, -18}, {0x20, 0x08, 0x85, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Right_Leg_mesh_layer_1_tri_1[] = {
	gsSPVertex(viridian_B_LoD_Switch_Right_Leg_mesh_layer_1_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(1, 4, 3, 0, 4, 5, 3, 0),
	gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0),
	gsSP2Triangles(6, 0, 7, 0, 0, 2, 7, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Right_Shoe_DL_skinned_mesh_layer_1_vtx_0[4] = {
	{{{9, -2, -30}, 0, {988, 495}, {0x20, 0x08, 0x85, 0xFF}}},
	{{{9, 32, 3}, 0, {988, 495}, {0x23, 0x7A, 0xFE, 0xFF}}},
	{{{9, -36, 4}, 0, {988, 495}, {0xF9, 0x81, 0x02, 0xFF}}},
	{{{9, -2, 38}, 0, {988, 495}, {0x20, 0x0B, 0x7A, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Right_Shoe_DL_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Right_Shoe_DL_skinned_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Right_Shoe_DL_mesh_layer_1_vtx_0[4] = {
	{{{-38, -9, 3}, 0, {744, -18}, {0x0B, 0x7E, 0xFD, 0xFF}}},
	{{{-6, -21, 38}, 0, {744, -18}, {0xE8, 0xCF, 0x73, 0xFF}}},
	{{{26, -33, 4}, 0, {744, -18}, {0xFA, 0x81, 0x01, 0xFF}}},
	{{{-5, -21, -30}, 0, {744, -18}, {0xE9, 0xCD, 0x8E, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Right_Shoe_DL_mesh_layer_1_tri_0[] = {
	gsSPVertex(viridian_B_LoD_Switch_Right_Shoe_DL_mesh_layer_1_vtx_0 + 0, 4, 4),
	gsSP2Triangles(0, 1, 4, 0, 1, 5, 4, 0),
	gsSP2Triangles(1, 3, 5, 0, 3, 6, 5, 0),
	gsSP2Triangles(3, 2, 6, 0, 2, 7, 6, 0),
	gsSP2Triangles(2, 0, 7, 0, 0, 4, 7, 0),
	gsSPEndDisplayList(),
};

Vtx viridian_B_LoD_Switch_Right_Shoe_DL_mesh_layer_1_vtx_1[19] = {
	{{{18, 42, -30}, 0, {744, -18}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{-14, 54, 3}, 0, {744, -18}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{17, 42, 38}, 0, {744, -18}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{91, 15, 5}, 0, {744, -18}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{59, 27, 39}, 0, {744, -18}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{59, 27, -30}, 0, {744, -18}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{-38, -9, 3}, 0, {744, -18}, {0x0B, 0x7E, 0xFD, 0xFF}}},
	{{{-6, -21, 38}, 0, {744, -18}, {0xE8, 0xCF, 0x73, 0xFF}}},
	{{{17, 42, 38}, 0, {744, -18}, {0xD1, 0x12, 0x75, 0xFF}}},
	{{{40, -22, 39}, 0, {744, -18}, {0x19, 0xBA, 0x67, 0xFF}}},
	{{{73, -34, 5}, 0, {744, -18}, {0x53, 0xA0, 0x02, 0xFF}}},
	{{{26, -33, 4}, 0, {744, -18}, {0xFA, 0x81, 0x01, 0xFF}}},
	{{{41, -22, -30}, 0, {744, -18}, {0x1C, 0xB9, 0x9B, 0xFF}}},
	{{{-5, -21, -30}, 0, {744, -18}, {0xE9, 0xCD, 0x8E, 0xFF}}},
	{{{59, 27, -30}, 0, {744, -18}, {0x2F, 0xEE, 0x8B, 0xFF}}},
	{{{18, 42, -30}, 0, {744, -18}, {0xD4, 0x10, 0x8A, 0xFF}}},
	{{{-14, 54, 3}, 0, {744, -18}, {0x89, 0x2C, 0xFE, 0xFF}}},
	{{{91, 15, 5}, 0, {744, -18}, {0x77, 0xD4, 0x02, 0xFF}}},
	{{{59, 27, 39}, 0, {744, -18}, {0x2C, 0xF0, 0x76, 0xFF}}},
};

Gfx viridian_B_LoD_Switch_Right_Shoe_DL_mesh_layer_1_tri_1[] = {
	gsSPVertex(viridian_B_LoD_Switch_Right_Shoe_DL_mesh_layer_1_vtx_1 + 0, 19, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
	gsSP2Triangles(2, 4, 3, 0, 3, 5, 0, 0),
	gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
	gsSP2Triangles(7, 10, 9, 0, 7, 11, 10, 0),
	gsSP2Triangles(11, 12, 10, 0, 11, 13, 12, 0),
	gsSP2Triangles(13, 14, 12, 0, 13, 15, 14, 0),
	gsSP2Triangles(13, 16, 15, 0, 13, 6, 16, 0),
	gsSP2Triangles(6, 8, 16, 0, 10, 12, 14, 0),
	gsSP2Triangles(10, 14, 17, 0, 9, 10, 17, 0),
	gsSP2Triangles(9, 17, 18, 0, 8, 9, 18, 0),
	gsSPEndDisplayList(),
};


Gfx mat_viridian_Cap__CAP_[] = {
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetTextureFilter(G_TF_POINT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, viridian_viridian_face_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 63, 1024),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 2, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 3, 0, G_TX_CLAMP | G_TX_NOMIRROR, 3, 0),
	gsDPSetTileSize(0, 0, 0, 28, 28),
	gsSPEndDisplayList(),
};

Gfx mat_revert_viridian_Cap__CAP_[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetTextureFilter(G_TF_BILERP),
	gsSPEndDisplayList(),
};

Gfx mat_viridian_Wing_Base[] = {
	gsSPClearGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, viridian_wing1_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_viridian_Wing_Base[] = {
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_viridian_Wing_Tip[] = {
	gsSPClearGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, viridian_wing_2_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_viridian_Wing_Tip[] = {
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_viridian_Metal__METAL_[] = {
	gsSPSetGeometryMode(G_TEXTURE_GEN),
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, viridian_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, viridian_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_viridian_Metal__METAL_[] = {
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_viridian_Metal_Wing_Base__METAL_[] = {
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, viridian_custom_mario_metal_wing_shade_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, viridian_custom_mario_metal_wing_light_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 512, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_viridian_Metal_Wing_Base__METAL_[] = {
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_viridian_Metal_Wing_Tip__METAL_[] = {
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, viridian_custom_mario_metal_wing_tip_shade_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, viridian_custom_mario_metal_wing_tip_light_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 512, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_viridian_Metal_Wing_Tip__METAL_[] = {
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_viridian_Dead_Eyes__SKIN_[] = {
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetTextureFilter(G_TF_POINT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, viridian_viridian_sad_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 31, 2048),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 1, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 3, 0, G_TX_CLAMP | G_TX_NOMIRROR, 3, 0),
	gsDPSetTileSize(0, 0, 0, 28, 28),
	gsSPEndDisplayList(),
};

Gfx mat_revert_viridian_Dead_Eyes__SKIN_[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetTextureFilter(G_TF_BILERP),
	gsSPEndDisplayList(),
};

Gfx viridian_Butt_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Butt_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsSPEndDisplayList(),
};

Gfx viridian_Torso_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Torso_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsSPEndDisplayList(),
};

Gfx viridian_Torso_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Torso_mesh_layer_1_tri_0),
	gsSPDisplayList(viridian_Torso_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsSPEndDisplayList(),
};

Gfx viridian_Head_DL_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Head_DL_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsSPEndDisplayList(),
};

Gfx viridian_Head_DL_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Head_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(viridian_Head_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsSPEndDisplayList(),
};

Gfx viridian_Head_DL_mesh_layer_1_opt_1[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Head_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(viridian_Head_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsSPEndDisplayList(),
};

Gfx viridian_Head_DL_mesh_layer_1_opt_7[] = {
	gsSPDisplayList(mat_viridian_Dead_Eyes__SKIN_),
	gsSPDisplayList(viridian_Head_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(viridian_Head_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_viridian_Dead_Eyes__SKIN_),
	gsSPEndDisplayList(),
};

Gfx viridian_Left_Wing_DL_mesh_layer_4[] = {
	gsSPDisplayList(mat_viridian_Wing_Base),
	gsSPDisplayList(viridian_Left_Wing_DL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_viridian_Wing_Base),
	gsSPDisplayList(mat_viridian_Wing_Tip),
	gsSPDisplayList(viridian_Left_Wing_DL_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_viridian_Wing_Tip),
	gsSPEndDisplayList(),
};

Gfx viridian_Right_Wing_DL_mesh_layer_4[] = {
	gsSPDisplayList(mat_viridian_Wing_Base),
	gsSPDisplayList(viridian_Right_Wing_DL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_viridian_Wing_Base),
	gsSPDisplayList(mat_viridian_Wing_Tip),
	gsSPDisplayList(viridian_Right_Wing_DL_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_viridian_Wing_Tip),
	gsSPEndDisplayList(),
};

Gfx viridian_Right_Wing_DL_mesh_layer_4_with_layer_4_revert[] = {
	gsSPDisplayList(mat_viridian_Wing_Base),
	gsSPDisplayList(viridian_Right_Wing_DL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_viridian_Wing_Base),
	gsSPDisplayList(mat_viridian_Wing_Tip),
	gsSPDisplayList(viridian_Right_Wing_DL_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_viridian_Wing_Tip),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx viridian_Left_Arm_Color_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Left_Arm_Color_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsSPEndDisplayList(),
};

Gfx viridian_Left_Arm_Color_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Left_Arm_Color_mesh_layer_1_tri_0),
	gsSPDisplayList(viridian_Left_Arm_Color_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsSPEndDisplayList(),
};

Gfx viridian_Left_Forearm_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Left_Forearm_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsSPEndDisplayList(),
};

Gfx viridian_Left_Forearm_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Left_Forearm_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsSPEndDisplayList(),
};

Gfx viridian_Left_Hand_DL_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Left_Hand_DL_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsSPEndDisplayList(),
};

Gfx viridian_Left_Hand_DL_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Left_Hand_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(viridian_Left_Hand_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsSPEndDisplayList(),
};

Gfx viridian_Right_Arm_Color_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Right_Arm_Color_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsSPEndDisplayList(),
};

Gfx viridian_Right_Arm_Color_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Right_Arm_Color_mesh_layer_1_tri_0),
	gsSPDisplayList(viridian_Right_Arm_Color_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsSPEndDisplayList(),
};

Gfx viridian_Right_Forearm_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Right_Forearm_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsSPEndDisplayList(),
};

Gfx viridian_Right_Forearm_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Right_Forearm_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsSPEndDisplayList(),
};

Gfx viridian_Right_Hand_DL_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Right_Hand_DL_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsSPEndDisplayList(),
};

Gfx viridian_Right_Hand_DL_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Right_Hand_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(viridian_Right_Hand_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsSPEndDisplayList(),
};

Gfx viridian_Left_Thigh_Color_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Left_Thigh_Color_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsSPEndDisplayList(),
};

Gfx viridian_Left_Thigh_Color_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Left_Thigh_Color_mesh_layer_1_tri_0),
	gsSPDisplayList(viridian_Left_Thigh_Color_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsSPEndDisplayList(),
};

Gfx viridian_Left_Leg_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Left_Leg_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsSPEndDisplayList(),
};

Gfx viridian_Left_Leg_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Left_Leg_mesh_layer_1_tri_0),
	gsSPDisplayList(viridian_Left_Leg_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsSPEndDisplayList(),
};

Gfx viridian_Left_Shoe_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Left_Shoe_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsSPEndDisplayList(),
};

Gfx viridian_Left_Shoe_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Left_Shoe_mesh_layer_1_tri_0),
	gsSPDisplayList(viridian_Left_Shoe_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsSPEndDisplayList(),
};

Gfx viridian_Right_Thigh_Color_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Right_Thigh_Color_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsSPEndDisplayList(),
};

Gfx viridian_Right_Thigh_Color_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Right_Thigh_Color_mesh_layer_1_tri_0),
	gsSPDisplayList(viridian_Right_Thigh_Color_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsSPEndDisplayList(),
};

Gfx viridian_Right_Leg_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Right_Leg_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsSPEndDisplayList(),
};

Gfx viridian_Right_Leg_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Right_Leg_mesh_layer_1_tri_0),
	gsSPDisplayList(viridian_Right_Leg_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsSPEndDisplayList(),
};

Gfx viridian_Right_Shoe_DL_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Right_Shoe_DL_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsSPEndDisplayList(),
};

Gfx viridian_Right_Shoe_DL_mesh_layer_1_with_layer_1_revert[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Right_Shoe_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(viridian_Right_Shoe_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx viridian_Right_Shoe_DL_mesh_layer_1_with_layer_5_revert[] = {
	gsSPDisplayList(mat_viridian_Cap__CAP_),
	gsSPDisplayList(viridian_Right_Shoe_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(viridian_Right_Shoe_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_viridian_Cap__CAP_),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Butt_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Butt_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Torso_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Torso_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Torso_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Torso_mesh_layer_1_tri_0),
	gsSPDisplayList(viridian_B_LoD_Switch_Torso_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Head_DL_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Head_DL_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Head_DL_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Head_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(viridian_B_LoD_Switch_Head_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Left_Wing_DL_mesh_layer_4[] = {
	gsSPDisplayList(mat_viridian_Metal_Wing_Base__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Left_Wing_DL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_viridian_Metal_Wing_Base__METAL_),
	gsSPDisplayList(mat_viridian_Metal_Wing_Tip__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Left_Wing_DL_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_viridian_Metal_Wing_Tip__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Right_Wing_DL_mesh_layer_4[] = {
	gsSPDisplayList(mat_viridian_Metal_Wing_Base__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Right_Wing_DL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_viridian_Metal_Wing_Base__METAL_),
	gsSPDisplayList(mat_viridian_Metal_Wing_Tip__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Right_Wing_DL_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_viridian_Metal_Wing_Tip__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Right_Wing_DL_mesh_layer_4_with_layer_4_revert_with_layer_4_revert[] = {
	gsSPDisplayList(mat_viridian_Metal_Wing_Base__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Right_Wing_DL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_viridian_Metal_Wing_Base__METAL_),
	gsSPDisplayList(mat_viridian_Metal_Wing_Tip__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Right_Wing_DL_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_viridian_Metal_Wing_Tip__METAL_),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Left_Arm_Color_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Left_Arm_Color_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Left_Arm_Color_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Left_Arm_Color_mesh_layer_1_tri_0),
	gsSPDisplayList(viridian_B_LoD_Switch_Left_Arm_Color_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Left_Forearm_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Left_Forearm_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Left_Forearm_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Left_Forearm_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Left_Hand_DL_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Left_Hand_DL_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Left_Hand_DL_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Left_Hand_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(viridian_B_LoD_Switch_Left_Hand_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Right_Arm_Color_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Right_Arm_Color_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Right_Arm_Color_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Right_Arm_Color_mesh_layer_1_tri_0),
	gsSPDisplayList(viridian_B_LoD_Switch_Right_Arm_Color_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Right_Forearm_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Right_Forearm_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Right_Forearm_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Right_Forearm_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Right_Hand_DL_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Right_Hand_DL_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Right_Hand_DL_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Right_Hand_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(viridian_B_LoD_Switch_Right_Hand_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Left_Thigh_Color_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Left_Thigh_Color_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Left_Thigh_Color_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Left_Thigh_Color_mesh_layer_1_tri_0),
	gsSPDisplayList(viridian_B_LoD_Switch_Left_Thigh_Color_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Left_Leg_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Left_Leg_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Left_Leg_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Left_Leg_mesh_layer_1_tri_0),
	gsSPDisplayList(viridian_B_LoD_Switch_Left_Leg_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Left_Shoe_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Left_Shoe_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Left_Shoe_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Left_Shoe_mesh_layer_1_tri_0),
	gsSPDisplayList(viridian_B_LoD_Switch_Left_Shoe_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Right_Thigh_Color_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Right_Thigh_Color_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Right_Thigh_Color_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Right_Thigh_Color_mesh_layer_1_tri_0),
	gsSPDisplayList(viridian_B_LoD_Switch_Right_Thigh_Color_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Right_Leg_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Right_Leg_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Right_Leg_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Right_Leg_mesh_layer_1_tri_0),
	gsSPDisplayList(viridian_B_LoD_Switch_Right_Leg_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Right_Shoe_DL_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Right_Shoe_DL_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Right_Shoe_DL_mesh_layer_1[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Right_Shoe_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(viridian_B_LoD_Switch_Right_Shoe_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Right_Shoe_DL_mesh_layer_1_with_layer_1_revert_with_layer_1_revert[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Right_Shoe_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(viridian_B_LoD_Switch_Right_Shoe_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx viridian_B_LoD_Switch_Right_Shoe_DL_mesh_layer_1_with_layer_5_revert_with_layer_5_revert[] = {
	gsSPDisplayList(mat_viridian_Metal__METAL_),
	gsSPDisplayList(viridian_B_LoD_Switch_Right_Shoe_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(viridian_B_LoD_Switch_Right_Shoe_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_viridian_Metal__METAL_),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

