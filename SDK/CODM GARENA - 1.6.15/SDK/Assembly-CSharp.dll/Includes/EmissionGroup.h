#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EmissionGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EmissionGroup"));
	}

	template <typename T = Il2CppString*> T& shaderEmissionVarName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& targetMaterials() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& idleEmissionColor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& beatEmissionColor() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& beatType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& scale() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessEmission() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Beat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T ProcessEmission(float time, float bpm, float bpmBias) {
		return ((T (*)(EmissionGroup*, float, float, float))(Il2CppBase() + 0x324BA9C))(this, time, bpm, bpmBias);
	}
	template <typename T = float> T Beat(float time) {
		return ((T (*)(EmissionGroup*, float))(Il2CppBase() + 0x324BE94))(this, time);
	}

};

}
