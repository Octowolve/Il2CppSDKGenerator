#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DeleteMailcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DeleteMail>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& mail() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t m) {
		return ((T (*)(DeleteMailcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x36BD738))(this, m);
	}

};

}
