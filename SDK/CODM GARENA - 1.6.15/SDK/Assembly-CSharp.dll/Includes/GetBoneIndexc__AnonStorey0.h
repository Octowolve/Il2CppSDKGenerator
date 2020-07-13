#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetBoneIndexcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetBoneIndex>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& bone() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetBoneIndexcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3E272B4))(this, it);
	}

};

}
