#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetDataByMatchServiceModulecAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetDataByMatchServiceModule>c__AnonStorey3"));
	}

	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(int32_t it) {
		return ((T (*)(GetDataByMatchServiceModulecAnonStorey3*, int32_t))(Il2CppBase() + 0x3AD1FF8))(this, it);
	}

};

}
