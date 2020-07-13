#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace CareerInfo {

class PersonalInfoResultController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CareerInfo", "PersonalInfoResultController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mPvpGameMode() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mPVPType() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mBRTeamType() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& mZMGroupId() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mZombieDiff() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mZombieMode() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDefaultToggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetToggleState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPopup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPVPModeData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBRModeData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetZMModeData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnModeTypeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPVP_MatchClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPVP_RankClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPVP_RoomClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPVE_StoryClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPVE_OperationClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPVE_EndlessClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPVEMapsChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPersonalInfoGameTypeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PersonalInfoResultController*))(Il2CppBase() + 0x1D12004))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PersonalInfoResultController*))(Il2CppBase() + 0x1D120A8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PersonalInfoResultController*))(Il2CppBase() + 0x1D127D4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PersonalInfoResultController*))(Il2CppBase() + 0x1D12C3C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(PersonalInfoResultController*))(Il2CppBase() + 0x1D12D20))(this);
	}
	template <typename T = void> T SetDefaultToggle() {
		return ((T (*)(PersonalInfoResultController*))(Il2CppBase() + 0x1D12DD8))(this);
	}
	template <typename T = void> T SetToggleState() {
		return ((T (*)(PersonalInfoResultController*))(Il2CppBase() + 0x1D13158))(this);
	}
	template <typename T = void> T RefreshPopup() {
		return ((T (*)(PersonalInfoResultController*))(Il2CppBase() + 0x1D13654))(this);
	}
	template <typename T = void> T RefreshData() {
		return ((T (*)(PersonalInfoResultController*))(Il2CppBase() + 0x1D12E90))(this);
	}
	template <typename T = void> T SetPVPModeData(uintptr_t type, uintptr_t mode) {
		return ((T (*)(PersonalInfoResultController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D13868))(this, type, mode);
	}
	template <typename T = void> T SetBRModeData(uintptr_t teamType) {
		return ((T (*)(PersonalInfoResultController*, uintptr_t))(Il2CppBase() + 0x1D13B3C))(this, teamType);
	}
	template <typename T = void> T SetZMModeData(int32_t groupId, uintptr_t diff, Il2CppString* MapName, uintptr_t mode) {
		return ((T (*)(PersonalInfoResultController*, int32_t, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1D139B0))(this, groupId, diff, MapName, mode);
	}
	template <typename T = void> T OnModeTypeChange(uintptr_t Msg) {
		return ((T (*)(PersonalInfoResultController*, uintptr_t))(Il2CppBase() + 0x1D1471C))(this, Msg);
	}
	template <typename T = void> T OnPVP_MatchClick(uintptr_t OBJ) {
		return ((T (*)(PersonalInfoResultController*, uintptr_t))(Il2CppBase() + 0x1D14A90))(this, OBJ);
	}
	template <typename T = void> T OnPVP_RankClick(uintptr_t OBJ) {
		return ((T (*)(PersonalInfoResultController*, uintptr_t))(Il2CppBase() + 0x1D14B5C))(this, OBJ);
	}
	template <typename T = void> T OnPVP_RoomClick(uintptr_t OBJ) {
		return ((T (*)(PersonalInfoResultController*, uintptr_t))(Il2CppBase() + 0x1D14C28))(this, OBJ);
	}
	template <typename T = void> T OnPVE_StoryClick(uintptr_t OBJ) {
		return ((T (*)(PersonalInfoResultController*, uintptr_t))(Il2CppBase() + 0x1D14CF4))(this, OBJ);
	}
	template <typename T = void> T OnPVE_OperationClick(uintptr_t OBJ) {
		return ((T (*)(PersonalInfoResultController*, uintptr_t))(Il2CppBase() + 0x1D14DD8))(this, OBJ);
	}
	template <typename T = void> T OnPVE_EndlessClick(uintptr_t OBJ) {
		return ((T (*)(PersonalInfoResultController*, uintptr_t))(Il2CppBase() + 0x1D14EB8))(this, OBJ);
	}
	template <typename T = void> T OnPVEMapsChange(uintptr_t msg) {
		return ((T (*)(PersonalInfoResultController*, uintptr_t))(Il2CppBase() + 0x1D14F98))(this, msg);
	}
	template <typename T = void> T OnPersonalInfoGameTypeChange(uintptr_t Msg) {
		return ((T (*)(PersonalInfoResultController*, uintptr_t))(Il2CppBase() + 0x1D15108))(this, Msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PersonalInfoResultController*))(Il2CppBase() + 0x1D151B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PersonalInfoResultController*))(Il2CppBase() + 0x1D151BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PersonalInfoResultController*))(Il2CppBase() + 0x1D151C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PersonalInfoResultController*))(Il2CppBase() + 0x1D151CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(PersonalInfoResultController*))(Il2CppBase() + 0x1D151D4))(this);
	}

};

}
