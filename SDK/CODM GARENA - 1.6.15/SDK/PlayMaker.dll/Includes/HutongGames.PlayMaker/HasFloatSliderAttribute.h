#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class HasFloatSliderAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "HasFloatSliderAttribute"));
	}

	template <typename T = float> T& minValue() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& maxValue() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = float> T get_MinValue() {
		return ((T (*)(HasFloatSliderAttribute*))(Il2CppBase() + 0x2F225F4))(this);
	}
	template <typename T = float> T get_MaxValue() {
		return ((T (*)(HasFloatSliderAttribute*))(Il2CppBase() + 0x2F225FC))(this);
	}

};

}
