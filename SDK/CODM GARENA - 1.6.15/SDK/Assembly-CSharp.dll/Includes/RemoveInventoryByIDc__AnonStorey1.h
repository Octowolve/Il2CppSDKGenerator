#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RemoveInventoryByIDcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RemoveInventoryByID>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& inItemID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = unsigned char> T& inSlot() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t _inv) {
		return ((T (*)(RemoveInventoryByIDcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x24734FC))(this, _inv);
	}

};

}
