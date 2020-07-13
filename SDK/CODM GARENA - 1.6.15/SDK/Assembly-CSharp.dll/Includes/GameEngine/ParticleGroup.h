#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ParticleGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ParticleGroup"));
	}

	template <typename T = uintptr_t> T& m_HighParticle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_MidParticle() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_LowParticle() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_Prefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& m_PrefabName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_Instance() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitParticle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ParticleGroup*))(Il2CppBase() + 0x272DE14))(this);
	}
	template <typename T = void> T InitConfig() {
		return ((T (*)(ParticleGroup*))(Il2CppBase() + 0x272DEB8))(this);
	}
	template <typename T = void> T InitParticle() {
		return ((T (*)(ParticleGroup*))(Il2CppBase() + 0x272E11C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ParticleGroup*))(Il2CppBase() + 0x272E3A4))(this);
	}

};

}
