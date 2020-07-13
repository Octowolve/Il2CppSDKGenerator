#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ParticleLODSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ParticleLODSetting"));
	}

	template <typename T = int32_t> T& MaxParticleNum_Middle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& MiddleEmitterSetting() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& MaxParticleNum_Low() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& LowEmitterSetting() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& LODSettings() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCameraUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ParticleLODSetting*))(Il2CppBase() + 0x272E9D8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ParticleLODSetting*))(Il2CppBase() + 0x272F0A8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ParticleLODSetting*))(Il2CppBase() + 0x272F280))(this);
	}
	template <typename T = void> T OnCameraUpdated(Il2CppVector3 newPos) {
		return ((T (*)(ParticleLODSetting*, Il2CppVector3))(Il2CppBase() + 0x272F458))(this, newPos);
	}

};

}
