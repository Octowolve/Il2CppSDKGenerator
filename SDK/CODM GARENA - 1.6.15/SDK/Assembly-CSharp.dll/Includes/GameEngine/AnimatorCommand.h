#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AnimatorCommand
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AnimatorCommand"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_CommandList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_RunCommand() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearSetLayerWeightCommand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLayerWeightCommand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init() {
		return ((T (*)(AnimatorCommand*))(Il2CppBase() + 0x2B581B8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AnimatorCommand*))(Il2CppBase() + 0x2B45114))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(AnimatorCommand*, float))(Il2CppBase() + 0x2B4B454))(this, deltaTime);
	}
	template <typename T = void> T ClearSetLayerWeightCommand(int32_t layerIndex) {
		return ((T (*)(AnimatorCommand*, int32_t))(Il2CppBase() + 0x2B4C86C))(this, layerIndex);
	}
	template <typename T = void> T SetLayerWeightCommand(uintptr_t animator, int32_t layerIndex, float layerWeight, float time) {
		return ((T (*)(AnimatorCommand*, uintptr_t, int32_t, float, float))(Il2CppBase() + 0x2B4C57C))(this, animator, layerIndex, layerWeight, time);
	}

};

}
