#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetPreWarPreparationListcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetPreWarPreparationList>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& modeId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t v) {
		return ((T (*)(GetPreWarPreparationListcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x1E8EA90))(this, v);
	}

};

}
