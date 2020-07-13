#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TutorialFinal {

class TutorialFinalJudgeFireMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TutorialFinal", "TutorialFinalJudgeFireMode"));
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
		return ((T (*)(TutorialFinalJudgeFireMode*))(Il2CppBase() + 0x424A498))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(TutorialFinalJudgeFireMode*))(Il2CppBase() + 0x424A6BC))(this);
	}
	template <typename T = void> T Judge() {
		return ((T (*)(TutorialFinalJudgeFireMode*))(Il2CppBase() + 0x424A53C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(TutorialFinalJudgeFireMode*))(Il2CppBase() + 0x424A760))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpdate() {
		return ((T (*)(TutorialFinalJudgeFireMode*))(Il2CppBase() + 0x424A768))(this);
	}

};

}
