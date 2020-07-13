#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance {

class CpuTimeProvider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance", "CpuTimeProvider"));
	}

	template <typename T = uintptr_t> T& m_RenderThreadCpuTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_MainThreadCpuTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndOfFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = float> T get_CpuFrameTime() {
		return ((T (*)(CpuTimeProvider*))(Il2CppBase() + 0x420E834))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CpuTimeProvider*))(Il2CppBase() + 0x420FCF0))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(CpuTimeProvider*))(Il2CppBase() + 0x420E668))(this);
	}
	template <typename T = void> T EndOfFrame() {
		return ((T (*)(CpuTimeProvider*))(Il2CppBase() + 0x420FE58))(this);
	}

};

}
