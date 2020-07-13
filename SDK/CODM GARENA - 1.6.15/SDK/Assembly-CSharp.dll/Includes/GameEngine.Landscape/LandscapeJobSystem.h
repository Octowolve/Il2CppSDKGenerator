#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.Landscape {

class LandscapeJobSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.Landscape", "LandscapeJobSystem"));
	}

	template <typename T = void*> T& jobQueue() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& thread() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& semaphore() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& quitThread() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScheduleJob() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WaitForDone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThreadEntry() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Destroy() {
		return ((T (*)(LandscapeJobSystem*))(Il2CppBase() + 0x2480468))(this);
	}
	template <typename T = void> T ScheduleJob(uintptr_t job) {
		return ((T (*)(LandscapeJobSystem*, uintptr_t))(Il2CppBase() + 0x24887D8))(this, job);
	}
	template <typename T = void> T WaitForDone(uintptr_t job) {
		return ((T (*)(LandscapeJobSystem*, uintptr_t))(Il2CppBase() + 0x2488960))(this, job);
	}
	template <typename T = void> T ThreadEntry() {
		return ((T (*)(LandscapeJobSystem*))(Il2CppBase() + 0x2488A30))(this);
	}

};

}
