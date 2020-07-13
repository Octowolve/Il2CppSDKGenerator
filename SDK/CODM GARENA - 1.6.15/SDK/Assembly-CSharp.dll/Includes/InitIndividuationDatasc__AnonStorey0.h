#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitIndividuationDatascAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InitIndividuationDatas>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(InitIndividuationDatascAnonStorey0*, uintptr_t))(Il2CppBase() + 0x22E74B0))(this, e);
	}

};

}
