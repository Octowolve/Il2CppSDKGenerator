#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class ILoadingFlowManagerCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "ILoadingFlowManagerCallback"));
	}


	template <typename T = void> T OnFlowStart(uintptr_t controller) {
		return ((T (*)(ILoadingFlowManagerCallback*, uintptr_t))(Il2CppBase() + 0x0))(this, controller);
	}
	template <typename T = void> T OnFlowProcessing(uintptr_t controller, float progress, Il2CppString* tips, bool showprogress) {
		return ((T (*)(ILoadingFlowManagerCallback*, uintptr_t, float, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, controller, progress, tips, showprogress);
	}
	template <typename T = void> T OnFlowFinish(uintptr_t controller, uintptr_t result, Il2CppString* errorMessage) {
		return ((T (*)(ILoadingFlowManagerCallback*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, controller, result, errorMessage);
	}
	template <typename T = void> T OnFlowsStart() {
		return ((T (*)(ILoadingFlowManagerCallback*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnMainFlowsFinish(uintptr_t result, Il2CppString* errorMessage) {
		return ((T (*)(ILoadingFlowManagerCallback*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, result, errorMessage);
	}
	template <typename T = void> T OnAllFlowsFinish() {
		return ((T (*)(ILoadingFlowManagerCallback*))(Il2CppBase() + 0x0))(this);
	}

};

}
