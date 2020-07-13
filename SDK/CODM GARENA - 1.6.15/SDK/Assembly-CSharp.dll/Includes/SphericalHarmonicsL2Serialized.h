#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SphericalHarmonicsL2Serialized
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SphericalHarmonicsL2Serialized"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& r() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& g() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& b() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_save() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_load() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T save(uintptr_t v) {
		return ((T (*)(SphericalHarmonicsL2Serialized*, uintptr_t))(Il2CppBase() + 0x42EAABC))(this, v);
	}
	template <typename T = uintptr_t> T load() {
		return ((T (*)(SphericalHarmonicsL2Serialized*))(Il2CppBase() + 0x42EAD68))(this);
	}

};

}
