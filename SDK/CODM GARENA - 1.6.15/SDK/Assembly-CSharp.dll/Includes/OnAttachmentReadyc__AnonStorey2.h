#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnAttachmentReadycAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnAttachmentReady>c__AnonStorey2"));
	}

	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(OnAttachmentReadycAnonStorey2*, uintptr_t))(Il2CppBase() + 0x28E3BA8))(this, it);
	}

};

}
