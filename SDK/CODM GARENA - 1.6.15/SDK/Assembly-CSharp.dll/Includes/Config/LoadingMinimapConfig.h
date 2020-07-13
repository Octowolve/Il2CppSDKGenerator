#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class LoadingMinimapConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "LoadingMinimapConfig"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_List() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& MinimapID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MinimapPosition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MinimapRotation() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MinimapScale() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& FlagIconSpriteName0() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FlagDescPosition0() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FlagDescRotation0() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FlagDescScale0() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& FlagDescLabel0() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FlagDescLabelPosition0() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& FlagDescLabelDir0() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& FlagIconSpriteName1() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FlagDescPosition1() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FlagDescRotation1() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FlagDescScale1() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& FlagDescLabel1() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FlagDescLabelPosition1() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& FlagDescLabelDir1() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& FlagIconSpriteName2() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FlagDescPosition2() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FlagDescRotation2() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FlagDescScale2() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& FlagDescLabel2() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FlagDescLabelPosition2() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& FlagDescLabelDir2() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppString*> T& FlagIconSpriteName3() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FlagDescPosition3() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FlagDescRotation3() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FlagDescScale3() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& FlagDescLabel3() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FlagDescLabelPosition3() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& FlagDescLabelDir3() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& FlagIconSpriteName4() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FlagDescPosition4() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FlagDescRotation4() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FlagDescScale4() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& FlagDescLabel4() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FlagDescLabelPosition4() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& FlagDescLabelDir4() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppString*> T& FlagIconSpriteName5() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FlagDescPosition5() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FlagDescRotation5() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FlagDescScale5() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppString*> T& FlagDescLabel5() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FlagDescLabelPosition5() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& FlagDescLabelDir5() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppString*> T& MapDesc() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddDatToList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_FlagPointList() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x3775168))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x3775170))(this);
	}
	template <typename T = void> T AddDatToList(Il2CppString* spriteName, Il2CppArray<uintptr_t>* descPositions, Il2CppArray<uintptr_t>* descRotations, Il2CppArray<uintptr_t>* descScales, Il2CppString* descLabel, Il2CppArray<uintptr_t>* descLabelPositions, Il2CppArray<uintptr_t>* descLabelScales, int32_t descLabeldirection) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x37753B4))(this, spriteName, descPositions, descRotations, descScales, descLabel, descLabelPositions, descLabelScales, descLabeldirection);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x37759FC))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x3775A9C))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(LoadingMinimapConfig*, int32_t))(Il2CppBase() + 0x3775AA4))(this, value);
	}
	template <typename T = int32_t> T get_MinimapID() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x3775AAC))(this);
	}
	template <typename T = void> T set_MinimapID(int32_t value) {
		return ((T (*)(LoadingMinimapConfig*, int32_t))(Il2CppBase() + 0x3775AB4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_MinimapPosition() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x3775ABC))(this);
	}
	template <typename T = void> T set_MinimapPosition(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3775AC4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_MinimapRotation() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x3775ACC))(this);
	}
	template <typename T = void> T set_MinimapRotation(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3775AD4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_MinimapScale() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x3775ADC))(this);
	}
	template <typename T = void> T set_MinimapScale(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3775AE4))(this, value);
	}
	template <typename T = Il2CppString*> T get_FlagIconSpriteName0() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x377537C))(this);
	}
	template <typename T = void> T set_FlagIconSpriteName0(Il2CppString* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppString*))(Il2CppBase() + 0x3775AEC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_FlagDescPosition0() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x3775384))(this);
	}
	template <typename T = void> T set_FlagDescPosition0(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3775AF4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_FlagDescRotation0() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x377538C))(this);
	}
	template <typename T = void> T set_FlagDescRotation0(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3775AFC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_FlagDescScale0() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x3775394))(this);
	}
	template <typename T = void> T set_FlagDescScale0(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3775B04))(this, value);
	}
	template <typename T = Il2CppString*> T get_FlagDescLabel0() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x377539C))(this);
	}
	template <typename T = void> T set_FlagDescLabel0(Il2CppString* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppString*))(Il2CppBase() + 0x3775B0C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_FlagDescLabelPosition0() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x37753A4))(this);
	}
	template <typename T = void> T set_FlagDescLabelPosition0(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3775B14))(this, value);
	}
	template <typename T = int32_t> T get_FlagDescLabelDir0() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x37753AC))(this);
	}
	template <typename T = void> T set_FlagDescLabelDir0(int32_t value) {
		return ((T (*)(LoadingMinimapConfig*, int32_t))(Il2CppBase() + 0x3775B1C))(this, value);
	}
	template <typename T = Il2CppString*> T get_FlagIconSpriteName1() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x3775734))(this);
	}
	template <typename T = void> T set_FlagIconSpriteName1(Il2CppString* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppString*))(Il2CppBase() + 0x3775B24))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_FlagDescPosition1() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x377573C))(this);
	}
	template <typename T = void> T set_FlagDescPosition1(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3775B2C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_FlagDescRotation1() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x3775744))(this);
	}
	template <typename T = void> T set_FlagDescRotation1(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3775B34))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_FlagDescScale1() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x377574C))(this);
	}
	template <typename T = void> T set_FlagDescScale1(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3775B3C))(this, value);
	}
	template <typename T = Il2CppString*> T get_FlagDescLabel1() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x3775754))(this);
	}
	template <typename T = void> T set_FlagDescLabel1(Il2CppString* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppString*))(Il2CppBase() + 0x3775B44))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_FlagDescLabelPosition1() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x377575C))(this);
	}
	template <typename T = void> T set_FlagDescLabelPosition1(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3775B4C))(this, value);
	}
	template <typename T = int32_t> T get_FlagDescLabelDir1() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x3775764))(this);
	}
	template <typename T = void> T set_FlagDescLabelDir1(int32_t value) {
		return ((T (*)(LoadingMinimapConfig*, int32_t))(Il2CppBase() + 0x3775B54))(this, value);
	}
	template <typename T = Il2CppString*> T get_FlagIconSpriteName2() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x377576C))(this);
	}
	template <typename T = void> T set_FlagIconSpriteName2(Il2CppString* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppString*))(Il2CppBase() + 0x3775B5C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_FlagDescPosition2() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x3775774))(this);
	}
	template <typename T = void> T set_FlagDescPosition2(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3775B64))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_FlagDescRotation2() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x377577C))(this);
	}
	template <typename T = void> T set_FlagDescRotation2(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3775B6C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_FlagDescScale2() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x3775784))(this);
	}
	template <typename T = void> T set_FlagDescScale2(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3775B74))(this, value);
	}
	template <typename T = Il2CppString*> T get_FlagDescLabel2() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x377578C))(this);
	}
	template <typename T = void> T set_FlagDescLabel2(Il2CppString* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppString*))(Il2CppBase() + 0x3775B7C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_FlagDescLabelPosition2() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x3775794))(this);
	}
	template <typename T = void> T set_FlagDescLabelPosition2(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3775B84))(this, value);
	}
	template <typename T = int32_t> T get_FlagDescLabelDir2() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x377579C))(this);
	}
	template <typename T = void> T set_FlagDescLabelDir2(int32_t value) {
		return ((T (*)(LoadingMinimapConfig*, int32_t))(Il2CppBase() + 0x3775B8C))(this, value);
	}
	template <typename T = Il2CppString*> T get_FlagIconSpriteName3() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x37757A4))(this);
	}
	template <typename T = void> T set_FlagIconSpriteName3(Il2CppString* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppString*))(Il2CppBase() + 0x3775B94))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_FlagDescPosition3() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x37757AC))(this);
	}
	template <typename T = void> T set_FlagDescPosition3(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3775B9C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_FlagDescRotation3() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x37757B4))(this);
	}
	template <typename T = void> T set_FlagDescRotation3(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3775BA4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_FlagDescScale3() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x37757BC))(this);
	}
	template <typename T = void> T set_FlagDescScale3(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3775BAC))(this, value);
	}
	template <typename T = Il2CppString*> T get_FlagDescLabel3() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x37757C4))(this);
	}
	template <typename T = void> T set_FlagDescLabel3(Il2CppString* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppString*))(Il2CppBase() + 0x3775BB4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_FlagDescLabelPosition3() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x37757CC))(this);
	}
	template <typename T = void> T set_FlagDescLabelPosition3(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3775BBC))(this, value);
	}
	template <typename T = int32_t> T get_FlagDescLabelDir3() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x37757D4))(this);
	}
	template <typename T = void> T set_FlagDescLabelDir3(int32_t value) {
		return ((T (*)(LoadingMinimapConfig*, int32_t))(Il2CppBase() + 0x3775BC4))(this, value);
	}
	template <typename T = Il2CppString*> T get_FlagIconSpriteName4() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x37757DC))(this);
	}
	template <typename T = void> T set_FlagIconSpriteName4(Il2CppString* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppString*))(Il2CppBase() + 0x3775BCC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_FlagDescPosition4() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x37757E4))(this);
	}
	template <typename T = void> T set_FlagDescPosition4(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3775BD4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_FlagDescRotation4() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x37757EC))(this);
	}
	template <typename T = void> T set_FlagDescRotation4(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3775BDC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_FlagDescScale4() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x37757F4))(this);
	}
	template <typename T = void> T set_FlagDescScale4(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3775BE4))(this, value);
	}
	template <typename T = Il2CppString*> T get_FlagDescLabel4() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x37757FC))(this);
	}
	template <typename T = void> T set_FlagDescLabel4(Il2CppString* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppString*))(Il2CppBase() + 0x3775BEC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_FlagDescLabelPosition4() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x3775804))(this);
	}
	template <typename T = void> T set_FlagDescLabelPosition4(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3775BF4))(this, value);
	}
	template <typename T = int32_t> T get_FlagDescLabelDir4() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x377580C))(this);
	}
	template <typename T = void> T set_FlagDescLabelDir4(int32_t value) {
		return ((T (*)(LoadingMinimapConfig*, int32_t))(Il2CppBase() + 0x3775BFC))(this, value);
	}
	template <typename T = Il2CppString*> T get_FlagIconSpriteName5() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x3775814))(this);
	}
	template <typename T = void> T set_FlagIconSpriteName5(Il2CppString* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppString*))(Il2CppBase() + 0x3775C04))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_FlagDescPosition5() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x377581C))(this);
	}
	template <typename T = void> T set_FlagDescPosition5(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3775C0C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_FlagDescRotation5() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x3775824))(this);
	}
	template <typename T = void> T set_FlagDescRotation5(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3775C14))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_FlagDescScale5() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x377582C))(this);
	}
	template <typename T = void> T set_FlagDescScale5(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3775C1C))(this, value);
	}
	template <typename T = Il2CppString*> T get_FlagDescLabel5() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x3775834))(this);
	}
	template <typename T = void> T set_FlagDescLabel5(Il2CppString* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppString*))(Il2CppBase() + 0x3775C24))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_FlagDescLabelPosition5() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x377583C))(this);
	}
	template <typename T = void> T set_FlagDescLabelPosition5(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3775C2C))(this, value);
	}
	template <typename T = int32_t> T get_FlagDescLabelDir5() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x3775844))(this);
	}
	template <typename T = void> T set_FlagDescLabelDir5(int32_t value) {
		return ((T (*)(LoadingMinimapConfig*, int32_t))(Il2CppBase() + 0x3775C34))(this, value);
	}
	template <typename T = Il2CppString*> T get_MapDesc() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x3775C3C))(this);
	}
	template <typename T = void> T set_MapDesc(Il2CppString* value) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppString*))(Il2CppBase() + 0x3775C44))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(LoadingMinimapConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3775C4C))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(LoadingMinimapConfig*))(Il2CppBase() + 0x3776234))(this);
	}

};

}
