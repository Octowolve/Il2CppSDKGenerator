#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PrefabSpawner
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PrefabSpawner"));
	}

	template <typename T = uintptr_t> T& PrefabResource() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SpawnedList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PostSpawnEventList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InvokeSpawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostSpawnObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrevDestroyObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostDestroyObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T InvokeSpawn() {
		return ((T (*)(PrefabSpawner*))(Il2CppBase() + 0x170BF78))(this);
	}
	template <typename T = bool> T PostSpawnObject(uintptr_t inGO) {
		return ((T (*)(PrefabSpawner*, uintptr_t))(Il2CppBase() + 0x170C444))(this, inGO);
	}
	template <typename T = void> T PrevDestroyObject(uintptr_t inGO) {
		return ((T (*)(PrefabSpawner*, uintptr_t))(Il2CppBase() + 0x170C4EC))(this, inGO);
	}
	template <typename T = void> T PostDestroyObject() {
		return ((T (*)(PrefabSpawner*))(Il2CppBase() + 0x170C58C))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(PrefabSpawner*))(Il2CppBase() + 0x170C624))(this);
	}

};

}
