#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class FramerateProfiler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "FramerateProfiler"));
	}

	template <typename T = Il2CppList<uintptr_t>*> static T& FramerateProfilers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& m_Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int64_t> T& m_SampleCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_SampleFrameTimeSum() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_MinFramerate() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_MaxFramerate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_LastFramerate() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_AbnormalFramerateCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& ABNORMAL_FRAMERATE_INTERVAL_DEFINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_LittleAbnormalFramerateCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> static T& LITTLE_ABNORMAL_FRAMERATE_INTERVAL_DEFINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& BEGIN_SAMPLE_ABNORMAL_FRAMERATE_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_FirstAbnormalArisingTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_CheckFirstAbnormalTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetSampleData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginSample() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndSample() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Sample() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAverageFramerate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAverageFrameTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = float> T get_MinFramerate() {
		return ((T (*)(FramerateProfiler*))(Il2CppBase() + 0x51C1FAC))(this);
	}
	template <typename T = float> T get_MaxFramerate() {
		return ((T (*)(FramerateProfiler*))(Il2CppBase() + 0x51C1FB4))(this);
	}
	template <typename T = int32_t> T get_AbnormalFramerateCount() {
		return ((T (*)(FramerateProfiler*))(Il2CppBase() + 0x51C1FBC))(this);
	}
	template <typename T = int32_t> T get_LittleAbnormalFramerateCount() {
		return ((T (*)(FramerateProfiler*))(Il2CppBase() + 0x51C1FC4))(this);
	}
	template <typename T = float> T get_FirstAbnormalArisingTime() {
		return ((T (*)(FramerateProfiler*))(Il2CppBase() + 0x51C1FCC))(this);
	}
	template <typename T = void> T ResetSampleData() {
		return ((T (*)(FramerateProfiler*))(Il2CppBase() + 0x51C1FD4))(this);
	}
	template <typename T = void> T BeginSample(Il2CppString* profilerName) {
		return ((T (*)(FramerateProfiler*, Il2CppString*))(Il2CppBase() + 0x51C20D8))(this, profilerName);
	}
	template <typename T = void> T EndSample() {
		return ((T (*)(FramerateProfiler*))(Il2CppBase() + 0x51C223C))(this);
	}
	template <typename T = void> T Sample(float deltaTime) {
		return ((T (*)(FramerateProfiler*, float))(Il2CppBase() + 0x51C237C))(this, deltaTime);
	}
	template <typename T = float> T GetAverageFramerate() {
		return ((T (*)(FramerateProfiler*))(Il2CppBase() + 0x51C250C))(this);
	}
	template <typename T = float> T GetAverageFrameTime() {
		return ((T (*)(FramerateProfiler*))(Il2CppBase() + 0x51C2608))(this);
	}
	template <typename T = void> static T Tick(float deltaTime) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x51C2718))(0, deltaTime);
	}

};

}
