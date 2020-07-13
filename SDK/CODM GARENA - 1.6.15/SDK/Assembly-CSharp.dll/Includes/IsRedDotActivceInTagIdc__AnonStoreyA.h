#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IsRedDotActivceInTagIdcAnonStoreyA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IsRedDotActivceInTagId>c__AnonStoreyA"));
	}

	template <typename T = uint32_t> T& tagId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t data) {
		return ((T (*)(IsRedDotActivceInTagIdcAnonStoreyA*, uintptr_t))(Il2CppBase() + 0x236B2C8))(this, data);
	}

};

}
