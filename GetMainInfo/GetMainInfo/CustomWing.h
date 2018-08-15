// CustomWing.h: interface for the CCustomWing class.
//
//////////////////////////////////////////////////////////////////////

#pragma once

#define MAX_CUSTOM_WING 15

struct CUSTOM_WING_INFO
{
	int Index;
	int ItemIndex;
	int DefenseConstA;
	int IncDamageConstA;
	int IncDamageConstB;
	int DecDamageConstA;
	int DecDamageConstB;
	int OptionIndex1;
	int OptionValue1;
	int OptionIndex2;
	int OptionValue2;
	int OptionIndex3;
	int OptionValue3;
	int NewOptionIndex1;
	int NewOptionValue1;
	int NewOptionIndex2;
	int NewOptionValue2;
	int NewOptionIndex3;
	int NewOptionValue3;
	int NewOptionIndex4;
	int NewOptionValue4;
	int ModelType;
	char ModelName[32];
};

class CCustomWing
{
public:
	CCustomWing();
	virtual ~CCustomWing();
	void Init();
	void Load(char* path);
	void SetInfo(CUSTOM_WING_INFO info);
	void ConvertOptionIndex(int* OptionIndex);
public:
	CUSTOM_WING_INFO m_CustomWingInfo[MAX_CUSTOM_WING];
};

extern CCustomWing gCustomWing;
