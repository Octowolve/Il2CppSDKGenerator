#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FindRolecAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FindRole>c__AnonStorey0"));
	}

	template <typename T = uint64_t> T& GUID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(FindRolecAnonStorey0*, uintptr_t))(Il2CppBase() + 0x2992EB0))(this, x);
	}

};

}
