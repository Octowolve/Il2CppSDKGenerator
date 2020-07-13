#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TutorialFinal {

class TutorialFinalJudgeAutoFireMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TutorialFinal", "TutorialFinalJudgeAutoFireMode"));
	}

	template <typename T = uintptr_t> T& SettingHud() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& bSwitchType() {
		return *(T*)((uintptr_t)this + 0x2C);
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
		return ((T (*)(TutorialFinalJudgeAutoFireMode*))(Il2CppBase() + 0x42499DC))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(TutorialFinalJudgeAutoFireMode*))(Il2CppBase() + 0x4249E40))(this);
	}
	template <typename T = void> T Judge() {
		return ((T (*)(TutorialFinalJudgeAutoFireMode*))(Il2CppBase() + 0x4249AE8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(TutorialFinalJudgeAutoFireMode*))(Il2CppBase() + 0x4249EE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpdate() {
		return ((T (*)(TutorialFinalJudgeAutoFireMode*))(Il2CppBase() + 0x4249EEC))(this);
	}

};

}
