#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class FramerateMonitor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "FramerateMonitor"));
	}

	template <typename T = uintptr_t> T& m_Profiler() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_IsSampling() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_IsValid() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = float> T& m_SampleBeginTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T get_IsSampling() {
		return ((T (*)(FramerateMonitor*))(Il2CppBase() + 0x31E9550))(this);
	}
	template <typename T = float> T get_SamplingTime() {
		return ((T (*)(FramerateMonitor*))(Il2CppBase() + 0x31E9558))(this);
	}
	template <typename T = float> T get_AverageFramerate() {
		return ((T (*)(FramerateMonitor*))(Il2CppBase() + 0x31E959C))(this);
	}
	template <typename T = float> T get_MinFramerate() {
		return ((T (*)(FramerateMonitor*))(Il2CppBase() + 0x31E95D8))(this);
	}
	template <typename T = float> T get_MaxFramerate() {
		return ((T (*)(FramerateMonitor*))(Il2CppBase() + 0x31E9614))(this);
	}
	template <typename T = int32_t> T get_AbnormalFramerateCount() {
		return ((T (*)(FramerateMonitor*))(Il2CppBase() + 0x31E96B4))(this);
	}
	template <typename T = bool> T get_EnableRagdollOnLowEndDevice() {
		return ((T (*)(FramerateMonitor*))(Il2CppBase() + 0x31E96F0))(this);
	}
	template <typename T = int32_t> T get_LittleAbnormalFramerateCount() {
		return ((T (*)(FramerateMonitor*))(Il2CppBase() + 0x31E9818))(this);
	}
	template <typename T = float> T get_FirstAbnormalArisingTime() {
		return ((T (*)(FramerateMonitor*))(Il2CppBase() + 0x31E9854))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(FramerateMonitor*))(Il2CppBase() + 0x31E9890))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(FramerateMonitor*))(Il2CppBase() + 0x31E99BC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(FramerateMonitor*))(Il2CppBase() + 0x31E9A80))(this);
	}

};

}
