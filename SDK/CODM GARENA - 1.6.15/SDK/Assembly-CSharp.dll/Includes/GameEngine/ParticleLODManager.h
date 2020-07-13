#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ParticleLODManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ParticleLODManager"));
	}

	template <typename T = float> static T& LODUpdateDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> T& CameraUpdated() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& m_LastCamPos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_CameraUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_CameraUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x2707F10))(0);
	}
	template <typename T = void> T add_CameraUpdated(void* value) {
		return ((T (*)(ParticleLODManager*, void*))(Il2CppBase() + 0x2708290))(this, value);
	}
	template <typename T = void> T remove_CameraUpdated(void* value) {
		return ((T (*)(ParticleLODManager*, void*))(Il2CppBase() + 0x27086C0))(this, value);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ParticleLODManager*))(Il2CppBase() + 0x272E56C))(this);
	}

};

}
