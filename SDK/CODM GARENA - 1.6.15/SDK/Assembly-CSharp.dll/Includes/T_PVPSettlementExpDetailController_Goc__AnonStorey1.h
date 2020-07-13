#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TPVPSettlementExpDetailControllerGocAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<T_PVPSettlementExpDetailController_Go>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& ds() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(TPVPSettlementExpDetailControllerGocAnonStorey1*, uintptr_t))(Il2CppBase() + 0x3B46B34))(this, s);
	}

};

}
