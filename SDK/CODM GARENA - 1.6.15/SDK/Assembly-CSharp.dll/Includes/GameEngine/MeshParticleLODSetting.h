#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MeshParticleLODSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MeshParticleLODSetting"));
	}

	template <typename T = bool> static T& EnableDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& IsHideList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& MiddleEmitterSetting() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& LowEmitterSetting() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& LODSettings() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyParticle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWithQualityLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCameraUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMiddle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T DestroyParticle(uintptr_t trans, bool destroyImmediate) {
		return ((T (*)(MeshParticleLODSetting*, uintptr_t, bool))(Il2CppBase() + 0x2707164))(this, trans, destroyImmediate);
	}
	template <typename T = void> T InitWithQualityLevel(uintptr_t qualityLevel, bool destroyImmediate) {
		return ((T (*)(MeshParticleLODSetting*, uintptr_t, bool))(Il2CppBase() + 0x27074AC))(this, qualityLevel, destroyImmediate);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(MeshParticleLODSetting*))(Il2CppBase() + 0x2707BC4))(this);
	}
	template <typename T = void> T DestroyObject(uintptr_t go) {
		return ((T (*)(MeshParticleLODSetting*, uintptr_t))(Il2CppBase() + 0x2707324))(this, go);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(MeshParticleLODSetting*))(Il2CppBase() + 0x2707D08))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(MeshParticleLODSetting*))(Il2CppBase() + 0x27084B8))(this);
	}
	template <typename T = void> T OnCameraUpdated(Il2CppVector3 newPos) {
		return ((T (*)(MeshParticleLODSetting*, Il2CppVector3))(Il2CppBase() + 0x27088E8))(this, newPos);
	}
	template <typename T = void> T ShowLow() {
		return ((T (*)(MeshParticleLODSetting*))(Il2CppBase() + 0x2708C9C))(this);
	}
	template <typename T = void> T ShowMiddle() {
		return ((T (*)(MeshParticleLODSetting*))(Il2CppBase() + 0x2708D78))(this);
	}

};

}
