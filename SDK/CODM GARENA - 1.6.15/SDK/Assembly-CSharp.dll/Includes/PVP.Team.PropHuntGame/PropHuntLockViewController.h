#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntLockViewController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntLockViewController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x44);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLockStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PropHuntLockViewController*))(Il2CppBase() + 0x34AF460))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PropHuntLockViewController*))(Il2CppBase() + 0x34AF504))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(PropHuntLockViewController*))(Il2CppBase() + 0x34AF620))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PropHuntLockViewController*))(Il2CppBase() + 0x34AF6E4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PropHuntLockViewController*))(Il2CppBase() + 0x34AF80C))(this);
	}
	template <typename T = void> T OnLockStateChanged(uintptr_t Msg) {
		return ((T (*)(PropHuntLockViewController*, uintptr_t))(Il2CppBase() + 0x34AF8C8))(this, Msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PropHuntLockViewController*))(Il2CppBase() + 0x34AF988))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PropHuntLockViewController*))(Il2CppBase() + 0x34AF990))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnShow() {
		return ((T (*)(PropHuntLockViewController*))(Il2CppBase() + 0x34AF998))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PropHuntLockViewController*))(Il2CppBase() + 0x34AF9A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PropHuntLockViewController*))(Il2CppBase() + 0x34AF9A8))(this);
	}

};

}
