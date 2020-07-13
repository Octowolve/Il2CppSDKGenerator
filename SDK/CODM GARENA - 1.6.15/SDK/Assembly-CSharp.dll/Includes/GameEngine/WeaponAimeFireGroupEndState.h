#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponAimeFireGroupEndState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponAimeFireGroupEndState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T PlayAnim() {
		return ((T (*)(WeaponAimeFireGroupEndState*))(Il2CppBase() + 0x2E952E0))(this);
	}
	template <typename T = void> T StopAim() {
		return ((T (*)(WeaponAimeFireGroupEndState*))(Il2CppBase() + 0x2E953F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayAnim() {
		return ((T (*)(WeaponAimeFireGroupEndState*))(Il2CppBase() + 0x2E95530))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopAim() {
		return ((T (*)(WeaponAimeFireGroupEndState*))(Il2CppBase() + 0x2E95538))(this);
	}

};

}
