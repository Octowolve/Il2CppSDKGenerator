#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.MlkTFGame {

class MlkTFBroadcastWeaponMaxLevel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.MlkTFGame", "MlkTFBroadcastWeaponMaxLevel"));
	}

	template <typename T = uintptr_t> T& TeamIcon() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& MaxLevelText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ShowGO() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& bShow() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& BlueColor() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& RedColor() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PendingMsgs() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyMaxLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetShowMaxLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayCheckPendingMsgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T WillShow() {
		return ((T (*)(MlkTFBroadcastWeaponMaxLevel*))(Il2CppBase() + 0x40481C8))(this);
	}
	template <typename T = void> T NotifyMaxLevel(bool bSameTeam, bool bLocalPlayer) {
		return ((T (*)(MlkTFBroadcastWeaponMaxLevel*, bool, bool))(Il2CppBase() + 0x4048470))(this, bSameTeam, bLocalPlayer);
	}
	template <typename T = void> T ResetShowMaxLevel() {
		return ((T (*)(MlkTFBroadcastWeaponMaxLevel*))(Il2CppBase() + 0x4048278))(this);
	}
	template <typename T = void> T DelayCheckPendingMsgs() {
		return ((T (*)(MlkTFBroadcastWeaponMaxLevel*))(Il2CppBase() + 0x404887C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(MlkTFBroadcastWeaponMaxLevel*))(Il2CppBase() + 0x4048A0C))(this);
	}

};

}
