#pragma once
#include <Il2Cpp/Il2Cpp.h>

class getFieldcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<getField>c__AnonStorey0"));
	}

	template <typename T = Il2CppString*> T& field() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t m) {
		return ((T (*)(getFieldcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x480808C))(this, m);
	}

};

}
