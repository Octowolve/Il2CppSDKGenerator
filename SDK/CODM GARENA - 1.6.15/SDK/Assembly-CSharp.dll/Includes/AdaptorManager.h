#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AdaptorManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AdaptorManager"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& IsComputeEachTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_AdaptRatio() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_IsComputeEachTime() {
		return ((T (*)(AdaptorManager*))(Il2CppBase() + 0x4A18704))(this);
	}
	template <typename T = void> T set_IsComputeEachTime(bool value) {
		return ((T (*)(AdaptorManager*, bool))(Il2CppBase() + 0x4A1870C))(this, value);
	}
	template <typename T = float> T get_AdaptRatio() {
		return ((T (*)(AdaptorManager*))(Il2CppBase() + 0x4A18714))(this);
	}

};

}
