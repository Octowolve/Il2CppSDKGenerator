#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class TutorialFinalDefine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "TutorialFinalDefine"));
	}

	template <typename T = int32_t> static T& TutorialFinalMapID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TutorialMapID_StandOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TutorialFinalMissileID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTutorialFinalMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTutorial_StandOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> static T IsTutorialFinalMap() {
		return ((T (*)(void *))(Il2CppBase() + 0x4238C18))(0);
	}
	template <typename T = bool> static T IsTutorial_StandOff() {
		return ((T (*)(void *))(Il2CppBase() + 0x4238E20))(0);
	}

};

}
