#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class BloodAndStreakHUDCTF
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "BloodAndStreakHUD_CTF"));
	}

	template <typename T = uintptr_t> T& TestValue() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> static T& HP_THREE_STYLE_VALUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T SetHPValue(float hpPercent) {
		return ((T (*)(BloodAndStreakHUDCTF*, float))(Il2CppBase() + 0x40760F8))(this, hpPercent);
	}

};

}
