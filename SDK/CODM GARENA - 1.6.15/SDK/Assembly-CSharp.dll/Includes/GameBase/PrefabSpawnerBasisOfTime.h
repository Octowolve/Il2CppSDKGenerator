#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PrefabSpawnerBasisOfTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PrefabSpawnerBasisOfTime"));
	}

	template <typename T = bool> T& AllowSpawn() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& MaxSpawnCnt() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& SpawnInterval() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& TimingAtPostDestroy() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& LastSpawnTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostDestroyObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Update() {
		return ((T (*)(PrefabSpawnerBasisOfTime*))(Il2CppBase() + 0x170CB04))(this);
	}
	template <typename T = void> T PostDestroyObject() {
		return ((T (*)(PrefabSpawnerBasisOfTime*))(Il2CppBase() + 0x170CC58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PostDestroyObject() {
		return ((T (*)(PrefabSpawnerBasisOfTime*))(Il2CppBase() + 0x170CD1C))(this);
	}

};

}
