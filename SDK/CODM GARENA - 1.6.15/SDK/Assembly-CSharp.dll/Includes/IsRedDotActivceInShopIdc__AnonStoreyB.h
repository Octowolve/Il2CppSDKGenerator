#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IsRedDotActivceInShopIdcAnonStoreyB
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IsRedDotActivceInShopId>c__AnonStoreyB"));
	}

	template <typename T = uint32_t> T& shopID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t data) {
		return ((T (*)(IsRedDotActivceInShopIdcAnonStoreyB*, uintptr_t))(Il2CppBase() + 0x236B284))(this, data);
	}

};

}
