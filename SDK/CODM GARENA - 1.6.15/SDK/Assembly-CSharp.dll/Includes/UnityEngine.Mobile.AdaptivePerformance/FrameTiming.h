#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance {

class FrameTiming
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance", "FrameTiming"));
	}

	template <typename T = float> T& CurrentFrameTime() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& AverageFrameTime() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& CurrentGpuFrameTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& AverageGpuFrameTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& CurrentCpuFrameTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& AverageCpuFrameTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = float> T get_CurrentFrameTime() {
		return ((T (*)(FrameTiming*))(Il2CppBase() + 0x4216C80))(this);
	}
	template <typename T = void> T set_CurrentFrameTime(float value) {
		return ((T (*)(FrameTiming*, float))(Il2CppBase() + 0x4216C88))(this, value);
	}
	template <typename T = float> T get_AverageFrameTime() {
		return ((T (*)(FrameTiming*))(Il2CppBase() + 0x4216C90))(this);
	}
	template <typename T = void> T set_AverageFrameTime(float value) {
		return ((T (*)(FrameTiming*, float))(Il2CppBase() + 0x4216C98))(this, value);
	}
	template <typename T = float> T get_CurrentGpuFrameTime() {
		return ((T (*)(FrameTiming*))(Il2CppBase() + 0x4216CA0))(this);
	}
	template <typename T = void> T set_CurrentGpuFrameTime(float value) {
		return ((T (*)(FrameTiming*, float))(Il2CppBase() + 0x4216CA8))(this, value);
	}
	template <typename T = float> T get_AverageGpuFrameTime() {
		return ((T (*)(FrameTiming*))(Il2CppBase() + 0x4216CB0))(this);
	}
	template <typename T = void> T set_AverageGpuFrameTime(float value) {
		return ((T (*)(FrameTiming*, float))(Il2CppBase() + 0x4216CB8))(this, value);
	}
	template <typename T = float> T get_CurrentCpuFrameTime() {
		return ((T (*)(FrameTiming*))(Il2CppBase() + 0x4216CC0))(this);
	}
	template <typename T = void> T set_CurrentCpuFrameTime(float value) {
		return ((T (*)(FrameTiming*, float))(Il2CppBase() + 0x4216CC8))(this, value);
	}
	template <typename T = float> T get_AverageCpuFrameTime() {
		return ((T (*)(FrameTiming*))(Il2CppBase() + 0x4216CD0))(this);
	}
	template <typename T = void> T set_AverageCpuFrameTime(float value) {
		return ((T (*)(FrameTiming*, float))(Il2CppBase() + 0x4216CD8))(this, value);
	}

};

}
