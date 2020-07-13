#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetShopListByTagIdcAnonStorey9
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetShopListByTagId>c__AnonStorey9"));
	}

	template <typename T = int32_t> T& tagId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& globalDS() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetShopListByTagIdcAnonStorey9*, uintptr_t))(Il2CppBase() + 0x236AE78))(this, it);
	}

};

}
