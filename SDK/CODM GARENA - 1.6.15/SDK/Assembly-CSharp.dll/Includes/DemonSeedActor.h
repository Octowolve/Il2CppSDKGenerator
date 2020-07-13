#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DemonSeedActor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DemonSeedActor"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMeshLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_ShouldCheckDetailCollider() {
		return ((T (*)(DemonSeedActor*))(Il2CppBase() + 0x417433C))(this);
	}
	template <typename T = void> T Init(uintptr_t inData) {
		return ((T (*)(DemonSeedActor*, uintptr_t))(Il2CppBase() + 0x4174344))(this, inData);
	}
	template <typename T = bool> T get_DisplayImpactEffect() {
		return ((T (*)(DemonSeedActor*))(Il2CppBase() + 0x4174400))(this);
	}
	template <typename T = void> T OnMeshLoaded(uintptr_t mesh) {
		return ((T (*)(DemonSeedActor*, uintptr_t))(Il2CppBase() + 0x4174408))(this, mesh);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(DemonSeedActor*, uintptr_t))(Il2CppBase() + 0x41744C8))(this, P0);
	}

};

}
