#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetAllCitysForProvincecAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetAllCitysForProvince>c__AnonStorey0"));
	}

	template <typename T = Il2CppString*> T& ProvinceName() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t a) {
		return ((T (*)(GetAllCitysForProvincecAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3BC5B98))(this, a);
	}

};

}
