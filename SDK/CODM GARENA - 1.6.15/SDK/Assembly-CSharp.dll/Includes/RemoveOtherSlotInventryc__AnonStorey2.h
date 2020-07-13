#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RemoveOtherSlotInventrycAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RemoveOtherSlotInventry>c__AnonStorey2"));
	}

	template <typename T = int32_t> T& wantItemID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = unsigned char> T& slot() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t _inv) {
		return ((T (*)(RemoveOtherSlotInventrycAnonStorey2*, uintptr_t))(Il2CppBase() + 0x2473548))(this, _inv);
	}

};

}
