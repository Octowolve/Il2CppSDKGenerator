#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponSwimGotoChangeClipState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponSwimGotoChangeClipState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCountDownSetAnimationValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcSwimEquipDestState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnCountDownSetAnimationValue() {
		return ((T (*)(WeaponSwimGotoChangeClipState*))(Il2CppBase() + 0x33C0D04))(this);
	}
	template <typename T = void> T OnCountDown() {
		return ((T (*)(WeaponSwimGotoChangeClipState*))(Il2CppBase() + 0x33C0EE0))(this);
	}
	template <typename T = void> T CalcSwimEquipDestState() {
		return ((T (*)(WeaponSwimGotoChangeClipState*))(Il2CppBase() + 0x33C0F8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCountDown() {
		return ((T (*)(WeaponSwimGotoChangeClipState*))(Il2CppBase() + 0x33C1030))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CalcSwimEquipDestState() {
		return ((T (*)(WeaponSwimGotoChangeClipState*))(Il2CppBase() + 0x33C1034))(this);
	}

};

}
