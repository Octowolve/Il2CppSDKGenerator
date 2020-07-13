#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetLevelObjectTypecAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetLevelObjectType>c__AnonStorey3"));
	}

	template <typename T = uint32_t> T& uid() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(GetLevelObjectTypecAnonStorey3*, uintptr_t))(Il2CppBase() + 0x372AE14))(this, e);
	}

};

}
