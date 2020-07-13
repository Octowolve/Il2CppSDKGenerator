#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetPerkIDForBuffcAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetPerkIDForBuff>c__AnonStorey3"));
	}

	template <typename T = int32_t> T& buffID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(GetPerkIDForBuffcAnonStorey3*, uintptr_t))(Il2CppBase() + 0x1DEA224))(this, e);
	}

};

}
