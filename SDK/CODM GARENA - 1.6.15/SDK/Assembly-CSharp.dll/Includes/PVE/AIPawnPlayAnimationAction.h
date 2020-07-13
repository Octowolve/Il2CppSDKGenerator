#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIPawnPlayAnimationAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIPawnPlayAnimationAction"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& AnimationName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& RandomAnim() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(AIPawnPlayAnimationAction*))(Il2CppBase() + 0x49AAC58))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(AIPawnPlayAnimationAction*))(Il2CppBase() + 0x49AACFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(AIPawnPlayAnimationAction*))(Il2CppBase() + 0x49AAF04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(AIPawnPlayAnimationAction*))(Il2CppBase() + 0x49AAF0C))(this);
	}

};

}
