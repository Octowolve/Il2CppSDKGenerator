#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class HookWhipConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "HookWhipConfig"));
	}

	template <typename T = uintptr_t> T& prepAnim() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& hookWhipAnim() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& endAnim() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& fadeTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& attackCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& attackTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& attackRange() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& attackWidth() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& damage() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_prepareAnimLen() {
		return ((T (*)(HookWhipConfig*))(Il2CppBase() + 0x46006A4))(this);
	}
	template <typename T = float> T get_attackAnimLen() {
		return ((T (*)(HookWhipConfig*))(Il2CppBase() + 0x46006B4))(this);
	}
	template <typename T = float> T get_endAttackAnimLen() {
		return ((T (*)(HookWhipConfig*))(Il2CppBase() + 0x46006E4))(this);
	}

};

}
