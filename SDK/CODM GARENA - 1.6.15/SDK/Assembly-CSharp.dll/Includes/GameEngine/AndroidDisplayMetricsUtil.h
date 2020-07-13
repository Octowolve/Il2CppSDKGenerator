#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AndroidDisplayMetricsUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AndroidDisplayMetricsUtil"));
	}

	template <typename T = int32_t> static T& DensityDPI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& XDPI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& YDPI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = int32_t> static T get_DensityDPI() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B40FF4))(0);
	}
	template <typename T = void> static T set_DensityDPI(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2B40CEC))(0, value);
	}
	template <typename T = float> static T get_XDPI() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B410A4))(0);
	}
	template <typename T = void> static T set_XDPI(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x2B40DA0))(0, value);
	}
	template <typename T = float> static T get_YDPI() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B41154))(0);
	}
	template <typename T = void> static T set_YDPI(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x2B40E60))(0, value);
	}

};

}
