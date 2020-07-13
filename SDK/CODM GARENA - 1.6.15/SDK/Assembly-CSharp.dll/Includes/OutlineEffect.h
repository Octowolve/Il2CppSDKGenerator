#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OutlineEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OutlineEffect"));
	}

	template <typename T = uintptr_t> T& color() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& nearWidth() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& farWidth() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& farDistance() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& rimIntensity() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& rimRange() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& style() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& priority() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& mAllowParticleSystem() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_AllowParticleSystem() {
		return ((T (*)(OutlineEffect*))(Il2CppBase() + 0x3EF6358))(this);
	}
	template <typename T = void> T set_AllowParticleSystem(bool value) {
		return ((T (*)(OutlineEffect*, bool))(Il2CppBase() + 0x3EF6360))(this, value);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(OutlineEffect*))(Il2CppBase() + 0x3EF6368))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(OutlineEffect*))(Il2CppBase() + 0x3EF6400))(this);
	}

};

}
