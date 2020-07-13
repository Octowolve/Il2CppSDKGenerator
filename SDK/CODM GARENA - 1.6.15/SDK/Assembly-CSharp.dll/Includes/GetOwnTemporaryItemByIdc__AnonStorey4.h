#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetOwnTemporaryItemByIdcAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetOwnTemporaryItemById>c__AnonStorey4"));
	}

	template <typename T = uint32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(GetOwnTemporaryItemByIdcAnonStorey4*, uintptr_t))(Il2CppBase() + 0x392F610))(this, x);
	}

};

}
