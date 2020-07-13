#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance {

class MainThreadCpuTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance", "MainThreadCpuTime"));
	}

	template <typename T = double> T& m_LastAbsoluteMainThreadCpuTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_LatestMainthreadCpuTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCpuTimeForCurrentThread() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLatestResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Measure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = int32_t> static T getrusage(int32_t who, uintptr_t usage) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x4216D60))(0, who, usage);
	}
	template <typename T = double> static T GetCpuTimeForCurrentThread() {
		return ((T (*)(void *))(Il2CppBase() + 0x4216FC0))(0);
	}
	template <typename T = float> T GetLatestResult() {
		return ((T (*)(MainThreadCpuTime*))(Il2CppBase() + 0x4215538))(this);
	}
	template <typename T = void> T Measure() {
		return ((T (*)(MainThreadCpuTime*))(Il2CppBase() + 0x42157AC))(this);
	}

};

}
