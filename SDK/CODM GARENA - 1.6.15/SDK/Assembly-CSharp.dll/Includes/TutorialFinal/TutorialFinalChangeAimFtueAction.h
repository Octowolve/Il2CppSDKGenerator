#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TutorialFinal {

class TutorialFinalChangeAimFtueAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TutorialFinal", "TutorialFinalChangeAimFtueAction"));
	}

	template <typename T = bool> T& AimFtue() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& AimAccurate() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(TutorialFinalChangeAimFtueAction*))(Il2CppBase() + 0x42484E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(TutorialFinalChangeAimFtueAction*))(Il2CppBase() + 0x42486F0))(this);
	}

};

}
