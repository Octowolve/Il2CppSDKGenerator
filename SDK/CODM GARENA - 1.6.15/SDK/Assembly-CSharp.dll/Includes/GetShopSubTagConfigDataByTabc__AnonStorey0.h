#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetShopSubTagConfigDataByTabcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetShopSubTagConfigDataByTab>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& tab() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t subTab) {
		return ((T (*)(GetShopSubTagConfigDataByTabcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x23C0E48))(this, subTab);
	}

};

}
