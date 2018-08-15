#pragma once

#define MAX_MAIN_VIEWPORT 400

struct NEW_HEALTH_BAR
{
	WORD index;
	BYTE type;
	BYTE rate;
};

struct VAngle
{
	float X;
	float Y;
	float Z;
};

void ClearNewHealthBar();
void InsertNewHealthBar(WORD index,BYTE type,BYTE rate);
NEW_HEALTH_BAR* GetNewHealthBar(WORD index,BYTE type);
void DrawNewHealthBar();

#define pGetPosFromAngle		((void(__cdecl*)(VAngle * Angle, int * PosX, int * PosY)) 0x005DEF20)
#define pCursorX				*(int*)0x7FE0218
#define pCursorY				*(int*)0x7FE0214
#define pTextThis				((LPVOID(*)()) 0x0041D732)
#define pSetTextColor			((void(__thiscall*)(LPVOID This, BYTE r, BYTE g, BYTE b, BYTE h)) 0x0041D902)
#define pDrawText				((int(__thiscall*)(LPVOID This, int PosX, int PosY, char * Text, int Arg4, int Arg5, int * Arg6, int Arg7)) 0x0041D9F1)
#define pDrawBarForm			((void(__cdecl*)(float PosX, float PosY, float Width, float Height, float Arg5, int Arg6)) 0x005E093C)
#define pSetBlend				((void(__cdecl*)(BYTE Mode)) 0x005DF380)
#define pGLSwitchBlend			((void(__cdecl*)()) 0x005DF41B)
#define pGLSwitch				((void(__cdecl*)()) 0x005DF301)
