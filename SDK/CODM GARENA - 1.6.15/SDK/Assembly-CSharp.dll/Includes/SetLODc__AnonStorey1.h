#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetLODcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetLOD>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& lod() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$2() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0(uintptr_t e) {
		return ((T (*)(SetLODcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x3CD40C0))(this, e);
	}

};

}
