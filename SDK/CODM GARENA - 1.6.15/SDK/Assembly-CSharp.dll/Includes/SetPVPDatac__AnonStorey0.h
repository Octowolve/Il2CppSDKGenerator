#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetPVPDatacAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetPVPData>c__AnonStorey0"));
	}

	template <typename T = uint64_t> T& playerId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mySelf() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(SetPVPDatacAnonStorey0*, uintptr_t))(Il2CppBase() + 0x1D0CF70))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(SetPVPDatacAnonStorey0*, uintptr_t))(Il2CppBase() + 0x1D0CFBC))(this, it);
	}
	template <typename T = bool> T m__2(uintptr_t it) {
		return ((T (*)(SetPVPDatacAnonStorey0*, uintptr_t))(Il2CppBase() + 0x1D0D008))(this, it);
	}
	template <typename T = bool> T m__3(uintptr_t it) {
		return ((T (*)(SetPVPDatacAnonStorey0*, uintptr_t))(Il2CppBase() + 0x1D0D060))(this, it);
	}

};

}
