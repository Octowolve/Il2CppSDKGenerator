#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance {

class PerformanceMetrics
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance", "PerformanceMetrics"));
	}

	template <typename T = int32_t> T& CurrentCpuLevel() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& CurrentGpuLevel() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& PerformanceBottleneck() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = int32_t> T get_CurrentCpuLevel() {
		return ((T (*)(PerformanceMetrics*))(Il2CppBase() + 0x421721C))(this);
	}
	template <typename T = void> T set_CurrentCpuLevel(int32_t value) {
		return ((T (*)(PerformanceMetrics*, int32_t))(Il2CppBase() + 0x4217224))(this, value);
	}
	template <typename T = int32_t> T get_CurrentGpuLevel() {
		return ((T (*)(PerformanceMetrics*))(Il2CppBase() + 0x421722C))(this);
	}
	template <typename T = void> T set_CurrentGpuLevel(int32_t value) {
		return ((T (*)(PerformanceMetrics*, int32_t))(Il2CppBase() + 0x4217234))(this, value);
	}
	template <typename T = uintptr_t> T get_PerformanceBottleneck() {
		return ((T (*)(PerformanceMetrics*))(Il2CppBase() + 0x421723C))(this);
	}
	template <typename T = void> T set_PerformanceBottleneck(uintptr_t value) {
		return ((T (*)(PerformanceMetrics*, uintptr_t))(Il2CppBase() + 0x4217244))(this, value);
	}

};

}
