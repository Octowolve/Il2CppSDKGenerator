#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HandleShopDataListcAnonStorey9
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<HandleShopDataList>c__AnonStorey9"));
	}

	template <typename T = int32_t> T& subTagId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(HandleShopDataListcAnonStorey9*, uintptr_t))(Il2CppBase() + 0x23C0ED0))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(HandleShopDataListcAnonStorey9*, uintptr_t))(Il2CppBase() + 0x23C0F64))(this, it);
	}

};

}
