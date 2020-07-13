#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace CareerInfo {

class PersonalInfoResultView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CareerInfo", "PersonalInfoResultView"));
	}

	template <typename T = uintptr_t> T& NormalRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& TotalScore() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ScoreSprite() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& Radar() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& MainDataTable() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& SubDataTable() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& MainItemTemplate() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& SubItemTemplate() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& MainDataItemList() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SubDataItemList() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& MainItemIndex() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& SubItemIndex() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& ScrollView() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& ZombieThemeRoot() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& ZombieThemeDataTemplate() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& ZombieThemeGrid() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& ZombieThemeScrollView() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ZombieThemeDataItemList() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& PVPRoot() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& PVPPopUpList() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& MatchGroup() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& RankGroup() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& RoomGroup() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& BRRoot() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& BRTeamTypePopUp() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& ZMRoot() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& ZMGameLevelGroupPopUp() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& ZMDifficultyPopUp() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& PVEOperation() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& StoryMode() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& PVEEndless() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& ZMNormalTabRoot() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& ZMDifficultyBtn() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& ZMMapsBtn() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& ZMMapsPopUp() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFloatFormat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBRData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBRResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPVPData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPVPResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToZombieTheme() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetZMThemeData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetZMData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPVEOperationResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPVEEndlessResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVERadarList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMainDataItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSubDataItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(PersonalInfoResultView*))(Il2CppBase() + 0x1D15304))(this);
	}
	template <typename T = Il2CppString*> T GetFloatFormat(float value, bool pecentage) {
		return ((T (*)(PersonalInfoResultView*, float, bool))(Il2CppBase() + 0x1D153AC))(this, value, pecentage);
	}
	template <typename T = void> T SetScore(float Score) {
		return ((T (*)(PersonalInfoResultView*, float))(Il2CppBase() + 0x1D15568))(this, Score);
	}
	template <typename T = void> T SetBRData(uintptr_t stat) {
		return ((T (*)(PersonalInfoResultView*, uintptr_t))(Il2CppBase() + 0x1D13FBC))(this, stat);
	}
	template <typename T = void> T SetBRResult(uintptr_t stat) {
		return ((T (*)(PersonalInfoResultView*, uintptr_t))(Il2CppBase() + 0x1D1571C))(this, stat);
	}
	template <typename T = void> T SetPVPData(uintptr_t stat) {
		return ((T (*)(PersonalInfoResultView*, uintptr_t))(Il2CppBase() + 0x1D13C6C))(this, stat);
	}
	template <typename T = void> T SetPVPResult(uintptr_t stat) {
		return ((T (*)(PersonalInfoResultView*, uintptr_t))(Il2CppBase() + 0x1D168B0))(this, stat);
	}
	template <typename T = void> T SwitchToNormal() {
		return ((T (*)(PersonalInfoResultView*))(Il2CppBase() + 0x1D1442C))(this);
	}
	template <typename T = void> T SwitchToZombieTheme() {
		return ((T (*)(PersonalInfoResultView*))(Il2CppBase() + 0x1D1430C))(this);
	}
	template <typename T = void> T SetZMThemeData() {
		return ((T (*)(PersonalInfoResultView*))(Il2CppBase() + 0x1D121CC))(this);
	}
	template <typename T = void> T SetZMData(uintptr_t stat, uintptr_t mode) {
		return ((T (*)(PersonalInfoResultView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D1454C))(this, stat, mode);
	}
	template <typename T = void> T SetPVEOperationResult(uintptr_t stat) {
		return ((T (*)(PersonalInfoResultView*, uintptr_t))(Il2CppBase() + 0x1D176EC))(this, stat);
	}
	template <typename T = void> T SetPVEEndlessResult(uintptr_t stat) {
		return ((T (*)(PersonalInfoResultView*, uintptr_t))(Il2CppBase() + 0x1D18444))(this, stat);
	}
	template <typename T = void> T GetPVERadarList(uintptr_t stat, Il2CppList<float>* radarList, Il2CppList<Il2CppString*>* radarNameList, bool isPVEEndless) {
		return ((T (*)(PersonalInfoResultView*, uintptr_t, Il2CppList<float>*, Il2CppList<Il2CppString*>*, bool))(Il2CppBase() + 0x1D18024))(this, stat, radarList, radarNameList, isPVEEndless);
	}
	template <typename T = void> T SetMainDataItem(Il2CppString* name, Il2CppString* value) {
		return ((T (*)(PersonalInfoResultView*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1D161C8))(this, name, value);
	}
	template <typename T = void> T SetSubDataItem(Il2CppString* name, Il2CppString* value) {
		return ((T (*)(PersonalInfoResultView*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1D16534))(this, name, value);
	}
	template <typename T = bool> static T SetZMThemeDatam__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D18CAC))(0, it);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(PersonalInfoResultView*))(Il2CppBase() + 0x1D18CDC))(this);
	}

};

}
