#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ColorQualityProbabilityView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ColorQualityProbabilityView"));
	}

	template <typename T = uintptr_t> T& ColorQualityLabel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ColorQualityProbabilityLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ColorIcon() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateColorQualityProbabilityView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T UpdateColorQualityProbabilityView(uint32_t color, double colorQualityProbability, uint32_t max_lucky_value) {
		return ((T (*)(ColorQualityProbabilityView*, uint32_t, double, uint32_t))(Il2CppBase() + 0x28CCB5C))(this, color, colorQualityProbability, max_lucky_value);
	}

};

}
