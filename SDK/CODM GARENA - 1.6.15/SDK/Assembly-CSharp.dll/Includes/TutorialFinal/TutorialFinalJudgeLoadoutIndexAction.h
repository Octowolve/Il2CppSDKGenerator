#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TutorialFinal {

class TutorialFinalJudgeLoadoutIndexAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TutorialFinal", "TutorialFinalJudgeLoadoutIndexAction"));
	}

	template <typename T = int32_t> T& TargetIndex() {
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
		return ((T (*)(TutorialFinalJudgeLoadoutIndexAction*))(Il2CppBase() + 0x424A814))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(TutorialFinalJudgeLoadoutIndexAction*))(Il2CppBase() + 0x424A9CC))(this);
	}
	template <typename T = void> T Judge() {
		return ((T (*)(TutorialFinalJudgeLoadoutIndexAction*))(Il2CppBase() + 0x424A8B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(TutorialFinalJudgeLoadoutIndexAction*))(Il2CppBase() + 0x424AA70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpdate() {
		return ((T (*)(TutorialFinalJudgeLoadoutIndexAction*))(Il2CppBase() + 0x424AA78))(this);
	}

};

}
