#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetActvInfoByTimeIdcAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetActvInfoByTimeId>c__AnonStorey3"));
	}

	template <typename T = double> T& serverTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& actvId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& type() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetActvInfoByTimeIdcAnonStorey3*, uintptr_t))(Il2CppBase() + 0x43443C8))(this, it);
	}

};

}
