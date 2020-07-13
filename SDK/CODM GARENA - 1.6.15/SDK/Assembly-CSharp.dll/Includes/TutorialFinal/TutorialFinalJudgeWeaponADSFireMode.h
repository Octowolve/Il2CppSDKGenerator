#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TutorialFinal {

class TutorialFinalJudgeWeaponADSFireMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TutorialFinal", "TutorialFinalJudgeWeaponADSFireMode"));
	}

	template <typename T = uintptr_t> T& WeaponCategory() {
		return *(T*)((uintptr_t)this + 0x28);
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
	template <typename T = uintptr_t> static T& __Hotfix0_Judge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(TutorialFinalJudgeWeaponADSFireMode*))(Il2CppBase() + 0x424AB24))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(TutorialFinalJudgeWeaponADSFireMode*))(Il2CppBase() + 0x424AD2C))(this);
	}
	template <typename T = void> T Judge() {
		return ((T (*)(TutorialFinalJudgeWeaponADSFireMode*))(Il2CppBase() + 0x424ABC8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(TutorialFinalJudgeWeaponADSFireMode*))(Il2CppBase() + 0x424ADD0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpdate() {
		return ((T (*)(TutorialFinalJudgeWeaponADSFireMode*))(Il2CppBase() + 0x424ADD8))(this);
	}

};

}
