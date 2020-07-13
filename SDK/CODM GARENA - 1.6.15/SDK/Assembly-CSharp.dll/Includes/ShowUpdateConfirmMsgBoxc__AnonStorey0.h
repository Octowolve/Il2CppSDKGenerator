#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowUpdateConfirmMsgBoxcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShowUpdateConfirmMsgBox>c__AnonStorey0"));
	}

	template <typename T = bool> T& isUpdateRes() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& forceUpdate() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(ShowUpdateConfirmMsgBoxcAnonStorey0*))(Il2CppBase() + 0x195C7C4))(this);
	}

};

}
