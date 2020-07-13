#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SharecAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Share>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& shareData() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& captureCallback() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T m__0(uintptr_t textrue) {
		return ((T (*)(SharecAnonStorey1*, uintptr_t))(Il2CppBase() + 0x3C83E78))(this, textrue);
	}

};

}
