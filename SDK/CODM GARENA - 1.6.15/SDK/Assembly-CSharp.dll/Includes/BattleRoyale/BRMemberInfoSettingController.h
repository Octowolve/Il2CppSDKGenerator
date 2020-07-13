#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRMemberInfoSettingController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRMemberInfoSettingController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_RoomDS() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnMaskClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_RoomDS() {
		return ((T (*)(BRMemberInfoSettingController*))(Il2CppBase() + 0x1955068))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRMemberInfoSettingController*))(Il2CppBase() + 0x1955118))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRMemberInfoSettingController*))(Il2CppBase() + 0x1955224))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRMemberInfoSettingController*))(Il2CppBase() + 0x19552C8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRMemberInfoSettingController*))(Il2CppBase() + 0x19554D0))(this);
	}
	template <typename T = void> T SetPos(Il2CppVector3 pos, bool bLeft, bool restrict, Il2CppVector3 topLeft, Il2CppVector3 topRight, Il2CppVector3 bottomLeft, Il2CppVector3 bottomRight) {
		return ((T (*)(BRMemberInfoSettingController*, Il2CppVector3, bool, bool, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x19556D4))(this, pos, bLeft, restrict, topLeft, topRight, bottomLeft, bottomRight);
	}
	template <typename T = void> T SetData(uint64_t playerId, Il2CppString* playerName) {
		return ((T (*)(BRMemberInfoSettingController*, uint64_t, Il2CppString*))(Il2CppBase() + 0x1955B6C))(this, playerId, playerName);
	}
	template <typename T = void> T OnBtnMaskClick() {
		return ((T (*)(BRMemberInfoSettingController*))(Il2CppBase() + 0x19562F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRMemberInfoSettingController*))(Il2CppBase() + 0x195641C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRMemberInfoSettingController*))(Il2CppBase() + 0x1956424))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRMemberInfoSettingController*))(Il2CppBase() + 0x195642C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRMemberInfoSettingController*))(Il2CppBase() + 0x1956434))(this);
	}

};

}
