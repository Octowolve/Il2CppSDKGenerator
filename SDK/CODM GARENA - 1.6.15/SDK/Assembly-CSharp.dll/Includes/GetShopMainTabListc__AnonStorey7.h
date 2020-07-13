#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetShopMainTabListcAnonStorey7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetShopMainTabList>c__AnonStorey7"));
	}

	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$6() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t tagItem) {
		return ((T (*)(GetShopMainTabListcAnonStorey7*, uintptr_t))(Il2CppBase() + 0x236B1AC))(this, tagItem);
	}

};

}
