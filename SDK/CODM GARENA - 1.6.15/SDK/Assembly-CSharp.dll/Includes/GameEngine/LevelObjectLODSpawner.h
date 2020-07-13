#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LevelObjectLODSpawner
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LevelObjectLODSpawner"));
	}

	template <typename T = Il2CppString*> static T& SFX_TAG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MaxLODLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_AssetID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_RequireLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LODPath() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_ActiveLODs() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_bGOActive() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_TargetGO() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnParticle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LevelObjectLODSpawner*))(Il2CppBase() + 0x249655C))(this);
	}
	template <typename T = uintptr_t> T SpawnParticle() {
		return ((T (*)(LevelObjectLODSpawner*))(Il2CppBase() + 0x2496664))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LevelObjectLODSpawner*))(Il2CppBase() + 0x2496738))(this);
	}

};

}
