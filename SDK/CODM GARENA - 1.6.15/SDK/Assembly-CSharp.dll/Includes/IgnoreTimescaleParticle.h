#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IgnoreTimescaleParticle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IgnoreTimescaleParticle"));
	}

	template <typename T = uintptr_t> T& particle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(IgnoreTimescaleParticle*))(Il2CppBase() + 0x4983740))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(IgnoreTimescaleParticle*))(Il2CppBase() + 0x4983804))(this);
	}

};

}
