#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayAgainFunctionReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayAgainFunctionReport"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(PlayAgainFunctionReport*))(Il2CppBase() + 0x494A03C))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs(uintptr_t mode, Il2CppString* bStart, bool bPlayAgain) {
		return ((T (*)(PlayAgainFunctionReport*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x494A0B4))(this, mode, bStart, bPlayAgain);
	}

};

}
