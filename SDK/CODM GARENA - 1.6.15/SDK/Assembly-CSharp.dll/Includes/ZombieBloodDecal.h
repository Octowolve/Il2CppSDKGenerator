#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ZombieBloodDecal
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ZombieBloodDecal"));
	}

	template <typename T = uintptr_t> T& Mat() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& MeshRender() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& DecalObj() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroySelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ZombieBloodDecal*))(Il2CppBase() + 0x4DDE8E4))(this);
	}
	template <typename T = void> T SetSize(float size) {
		return ((T (*)(ZombieBloodDecal*, float))(Il2CppBase() + 0x4DDEA44))(this, size);
	}
	template <typename T = void> T DestroySelf() {
		return ((T (*)(ZombieBloodDecal*))(Il2CppBase() + 0x4DDECB4))(this);
	}

};

}
