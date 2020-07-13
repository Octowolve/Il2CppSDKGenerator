#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddPerspectiveInfocAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<AddPerspectiveInfo>c__AnonStorey0"));
	}

	template <typename T = uint32_t> T& exposedPawnId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(AddPerspectiveInfocAnonStorey0*, uintptr_t))(Il2CppBase() + 0x34D83CC))(this, e);
	}

};

}
