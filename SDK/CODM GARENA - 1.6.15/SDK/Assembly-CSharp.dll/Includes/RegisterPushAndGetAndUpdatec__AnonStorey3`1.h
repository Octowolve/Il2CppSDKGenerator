#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RegisterPushAndGetAndUpdatecAnonStorey31
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RegisterPushAndGetAndUpdate>c__AnonStorey3`1"));
	}

	template <typename T = void*> T& get() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& push() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& update() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T m__0(uintptr_t L, int32_t idx) {
		return ((T (*)(RegisterPushAndGetAndUpdatecAnonStorey31*, uintptr_t, int32_t))(Il2CppBase() + 0x518FA40))(this, L, idx);
	}
	template <typename T = void> T m__1(uintptr_t L, uintptr_t obj) {
		return ((T (*)(RegisterPushAndGetAndUpdatecAnonStorey31*, uintptr_t, uintptr_t))(Il2CppBase() + 0x518FA94))(this, L, obj);
	}
	template <typename T = uintptr_t> T m__2(uintptr_t L, int32_t idx) {
		return ((T (*)(RegisterPushAndGetAndUpdatecAnonStorey31*, uintptr_t, int32_t))(Il2CppBase() + 0x518FC04))(this, L, idx);
	}
	template <typename T = void> T m__3(uintptr_t L, int32_t idx, uintptr_t obj) {
		return ((T (*)(RegisterPushAndGetAndUpdatecAnonStorey31*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x518FC58))(this, L, idx, obj);
	}

};

}
