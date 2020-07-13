#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetItemTransferEnablecAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetItemTransferEnable>c__AnonStorey1"));
	}

	template <typename T = uint32_t> T& localID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& enable() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T m__0(uintptr_t item) {
		return ((T (*)(SetItemTransferEnablecAnonStorey1*, uintptr_t))(Il2CppBase() + 0x3DCED18))(this, item);
	}

};

}
