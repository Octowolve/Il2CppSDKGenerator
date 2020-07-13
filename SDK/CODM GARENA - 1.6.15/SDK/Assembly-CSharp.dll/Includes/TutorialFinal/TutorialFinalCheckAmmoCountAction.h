#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TutorialFinal {

class TutorialFinalCheckAmmoCountAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TutorialFinal", "TutorialFinalCheckAmmoCountAction"));
	}

	template <typename T = bool> T& IsGreaterOrSmaller() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& FinishWhenZero() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& UpdateCheck() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = uintptr_t> T& currentWeapon() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(TutorialFinalCheckAmmoCountAction*))(Il2CppBase() + 0x424879C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(TutorialFinalCheckAmmoCountAction*))(Il2CppBase() + 0x4248BB8))(this);
	}
	template <typename T = bool> T Check() {
		return ((T (*)(TutorialFinalCheckAmmoCountAction*))(Il2CppBase() + 0x4248A44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(TutorialFinalCheckAmmoCountAction*))(Il2CppBase() + 0x4248D20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpdate() {
		return ((T (*)(TutorialFinalCheckAmmoCountAction*))(Il2CppBase() + 0x4248D28))(this);
	}

};

}
