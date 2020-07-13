#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class TutorialEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "TutorialEffect"));
	}

	template <typename T = uintptr_t> T& effectObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEffectActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEffectInactive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetEffectActive() {
		return ((T (*)(TutorialEffect*))(Il2CppBase() + 0x42388A0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(TutorialEffect*))(Il2CppBase() + 0x42389B8))(this);
	}
	template <typename T = void> T SetEffectInactive() {
		return ((T (*)(TutorialEffect*))(Il2CppBase() + 0x4238A5C))(this);
	}

};

}
