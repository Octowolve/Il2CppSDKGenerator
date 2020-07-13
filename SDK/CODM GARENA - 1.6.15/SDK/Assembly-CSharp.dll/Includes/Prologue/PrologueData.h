#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Prologue {

class PrologueData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Prologue", "PrologueData"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_SetResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> static T SetResult(bool isHard) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4CD8BD8))(0, isHard);
	}
	template <typename T = bool> static T GetResult() {
		return ((T (*)(void *))(Il2CppBase() + 0x4CD8CEC))(0);
	}

};

}
