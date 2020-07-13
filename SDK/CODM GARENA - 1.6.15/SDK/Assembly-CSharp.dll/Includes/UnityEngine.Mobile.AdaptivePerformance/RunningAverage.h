#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance {

class RunningAverage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance", "RunningAverage"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_Values() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_NumValues() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_LastIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_AverageValue() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNumValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSampleWindowSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAverage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMostRecentValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = int32_t> T GetNumValues() {
		return ((T (*)(RunningAverage*))(Il2CppBase() + 0x420EDD4))(this);
	}
	template <typename T = int32_t> T GetSampleWindowSize() {
		return ((T (*)(RunningAverage*))(Il2CppBase() + 0x420EE74))(this);
	}
	template <typename T = float> T GetAverage() {
		return ((T (*)(RunningAverage*))(Il2CppBase() + 0x420EB28))(this);
	}
	template <typename T = float> T GetMostRecentValue() {
		return ((T (*)(RunningAverage*))(Il2CppBase() + 0x420EBC8))(this);
	}
	template <typename T = void> T AddValue(float NewValue) {
		return ((T (*)(RunningAverage*, float))(Il2CppBase() + 0x420E3F4))(this, NewValue);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(RunningAverage*))(Il2CppBase() + 0x420FC08))(this);
	}

};

}
