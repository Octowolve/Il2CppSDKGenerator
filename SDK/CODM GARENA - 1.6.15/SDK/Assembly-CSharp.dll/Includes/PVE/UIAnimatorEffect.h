#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class UIAnimatorEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "UIAnimatorEffect"));
	}

	template <typename T = uintptr_t> T& m_Animator() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& m_bRootPosition() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T set_IsRootPosition(bool value) {
		return ((T (*)(UIAnimatorEffect*, bool))(Il2CppBase() + 0x40565EC))(this, value);
	}
	template <typename T = void> T InitResource() {
		return ((T (*)(UIAnimatorEffect*))(Il2CppBase() + 0x40565F4))(this);
	}
	template <typename T = void> T PlayEffect() {
		return ((T (*)(UIAnimatorEffect*))(Il2CppBase() + 0x40567A8))(this);
	}
	template <typename T = void> T StopEffect() {
		return ((T (*)(UIAnimatorEffect*))(Il2CppBase() + 0x4056918))(this);
	}

};

}
