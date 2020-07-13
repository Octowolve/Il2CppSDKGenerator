#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetCommnPanelcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetCommnPanel>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& setting() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& commonPanel() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(SetCommnPanelcAnonStorey0*))(Il2CppBase() + 0x25994A0))(this);
	}
	template <typename T = void> T m__1() {
		return ((T (*)(SetCommnPanelcAnonStorey0*))(Il2CppBase() + 0x25994F4))(this);
	}

};

}
