#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SafeManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SafeManager"));
	}

	template <typename T = uintptr_t> static T& _Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& AimAssistanceColliderRadius() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& AimAssistanceSpeed() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_StartData() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_EndData() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_EndDataEx() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x2DEFC8C))(0);
	}
	template <typename T = uintptr_t> T get_RoundStartData() {
		return ((T (*)(SafeManager*))(Il2CppBase() + 0x2DEFDE8))(this);
	}
	template <typename T = void> T set_RoundStartData(uintptr_t value) {
		return ((T (*)(SafeManager*, uintptr_t))(Il2CppBase() + 0x2DEFE88))(this, value);
	}
	template <typename T = uintptr_t> T get_RoundEndData() {
		return ((T (*)(SafeManager*))(Il2CppBase() + 0x2DEFE90))(this);
	}
	template <typename T = void> T set_RoundEndData(uintptr_t value) {
		return ((T (*)(SafeManager*, uintptr_t))(Il2CppBase() + 0x2DEFF30))(this, value);
	}
	template <typename T = uintptr_t> T get_RoundEndDataEx() {
		return ((T (*)(SafeManager*))(Il2CppBase() + 0x2DEFF38))(this);
	}
	template <typename T = void> T set_RoundEndDataEx(uintptr_t value) {
		return ((T (*)(SafeManager*, uintptr_t))(Il2CppBase() + 0x2DEFFD8))(this, value);
	}

};

}
