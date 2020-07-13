#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GoliathOverHeatProgressHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GoliathOverHeatProgressHUD"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& progressBar() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& overHotTxt() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWeaponHotValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(GoliathOverHeatProgressHUD*))(Il2CppBase() + 0x1ECE6DC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GoliathOverHeatProgressHUD*))(Il2CppBase() + 0x1ECE6E8))(this);
	}
	template <typename T = void> T OnApplicationPause(bool paused) {
		return ((T (*)(GoliathOverHeatProgressHUD*, bool))(Il2CppBase() + 0x1ECEBEC))(this, paused);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GoliathOverHeatProgressHUD*))(Il2CppBase() + 0x1ECEE50))(this);
	}
	template <typename T = void> T ShowUI(bool bShow) {
		return ((T (*)(GoliathOverHeatProgressHUD*, bool))(Il2CppBase() + 0x1ECF030))(this, bShow);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GoliathOverHeatProgressHUD*))(Il2CppBase() + 0x1ECF218))(this);
	}
	template <typename T = void> T RefreshWeaponHotValue() {
		return ((T (*)(GoliathOverHeatProgressHUD*))(Il2CppBase() + 0x1ECE834))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(GoliathOverHeatProgressHUD*))(Il2CppBase() + 0x1ECF478))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnApplicationPause(bool P0) {
		return ((T (*)(GoliathOverHeatProgressHUD*, bool))(Il2CppBase() + 0x1ECF480))(this, P0);
	}

};

}
