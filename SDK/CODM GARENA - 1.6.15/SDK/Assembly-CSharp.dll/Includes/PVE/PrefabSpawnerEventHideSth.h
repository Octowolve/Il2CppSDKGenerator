#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PrefabSpawnerEventHideSth
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PrefabSpawnerEventHideSth"));
	}

	template <typename T = uintptr_t> T& SpecifedObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> static T& SpawnTimes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& SpawnCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Invoke() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T Invoke(uintptr_t inGO) {
		return ((T (*)(PrefabSpawnerEventHideSth*, uintptr_t))(Il2CppBase() + 0x4364420))(this, inGO);
	}
	template <typename T = bool> T xLuaBaseProxy_Invoke(uintptr_t P0) {
		return ((T (*)(PrefabSpawnerEventHideSth*, uintptr_t))(Il2CppBase() + 0x4364594))(this, P0);
	}

};

}
