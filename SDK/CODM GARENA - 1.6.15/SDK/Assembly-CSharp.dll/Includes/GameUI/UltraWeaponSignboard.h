#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UltraWeaponSignboard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UltraWeaponSignboard"));
	}

	template <typename T = uintptr_t> T& ImageObject() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& delayShowTime() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& InitTime() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowBoard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedClamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLabelImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init(uintptr_t targetVolume) {
		return ((T (*)(UltraWeaponSignboard*, uintptr_t))(Il2CppBase() + 0x2A2D694))(this, targetVolume);
	}
	template <typename T = void> T CheckShowBoard() {
		return ((T (*)(UltraWeaponSignboard*))(Il2CppBase() + 0x2A2D758))(this);
	}
	template <typename T = bool> T IsNeedClamp() {
		return ((T (*)(UltraWeaponSignboard*))(Il2CppBase() + 0x2A2D920))(this);
	}
	template <typename T = void> T UpdateLabelImpl() {
		return ((T (*)(UltraWeaponSignboard*))(Il2CppBase() + 0x2A2D9C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(UltraWeaponSignboard*, uintptr_t))(Il2CppBase() + 0x2A2DB38))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CheckShowBoard() {
		return ((T (*)(UltraWeaponSignboard*))(Il2CppBase() + 0x2A2DB40))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsNeedClamp() {
		return ((T (*)(UltraWeaponSignboard*))(Il2CppBase() + 0x2A2DB48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateLabelImpl() {
		return ((T (*)(UltraWeaponSignboard*))(Il2CppBase() + 0x2A2DBEC))(this);
	}

};

}
