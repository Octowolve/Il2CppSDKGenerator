#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangeToBREquippedSkincAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ChangeToBREquippedSkin>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& brEquipmentType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& equippedItem() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(ChangeToBREquippedSkincAnonStorey1*, uintptr_t))(Il2CppBase() + 0x374302C))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(ChangeToBREquippedSkincAnonStorey1*, uintptr_t))(Il2CppBase() + 0x374308C))(this, it);
	}

};

}
