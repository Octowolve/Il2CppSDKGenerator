#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class ILoadingFlowManagerContrller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "ILoadingFlowManagerContrller"));
	}


	template <typename T = int32_t> T GetCheckableControllerCount() {
		return ((T (*)(ILoadingFlowManagerContrller*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddCheckableController(uintptr_t controller) {
		return ((T (*)(ILoadingFlowManagerContrller*, uintptr_t))(Il2CppBase() + 0x0))(this, controller);
	}
	template <typename T = void> T RemoveCheckableController(uintptr_t controller) {
		return ((T (*)(ILoadingFlowManagerContrller*, uintptr_t))(Il2CppBase() + 0x0))(this, controller);
	}
	template <typename T = uintptr_t> T GetLoadingFlowManagerType() {
		return ((T (*)(ILoadingFlowManagerContrller*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T FlowStart(uintptr_t controller) {
		return ((T (*)(ILoadingFlowManagerContrller*, uintptr_t))(Il2CppBase() + 0x0))(this, controller);
	}
	template <typename T = void> T FlowProcessing(uintptr_t controller, float progress, Il2CppString* tips) {
		return ((T (*)(ILoadingFlowManagerContrller*, uintptr_t, float, Il2CppString*))(Il2CppBase() + 0x0))(this, controller, progress, tips);
	}
	template <typename T = void> T FlowFinish(uintptr_t controller, uintptr_t result, Il2CppString* errorMessage) {
		return ((T (*)(ILoadingFlowManagerContrller*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, controller, result, errorMessage);
	}

};

}
