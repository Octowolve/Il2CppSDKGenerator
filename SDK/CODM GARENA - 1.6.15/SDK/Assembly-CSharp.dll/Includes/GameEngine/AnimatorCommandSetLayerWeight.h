#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AnimatorCommandSetLayerWeight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AnimatorCommandSetLayerWeight"));
	}

	template <typename T = int32_t> T& m_LayerIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_TargetLayerWeight() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_StartLayerWeight() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_TickTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_TotalTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Run() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRepeatitive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetParams(int32_t layerIndex, float targetLayerWeight, float tickTime) {
		return ((T (*)(AnimatorCommandSetLayerWeight*, int32_t, float, float))(Il2CppBase() + 0x2B582FC))(this, layerIndex, targetLayerWeight, tickTime);
	}
	template <typename T = bool> T Run(float deltaTime) {
		return ((T (*)(AnimatorCommandSetLayerWeight*, float))(Il2CppBase() + 0x2B5864C))(this, deltaTime);
	}
	template <typename T = bool> T CheckRepeatitive(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(AnimatorCommandSetLayerWeight*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2B58830))(this, args);
	}
	template <typename T = bool> T xLuaBaseProxy_Run(float P0) {
		return ((T (*)(AnimatorCommandSetLayerWeight*, float))(Il2CppBase() + 0x2B58924))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckRepeatitive(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(AnimatorCommandSetLayerWeight*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2B58928))(this, P0);
	}

};

}
