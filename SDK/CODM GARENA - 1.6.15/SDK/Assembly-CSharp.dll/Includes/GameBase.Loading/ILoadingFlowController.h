#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class ILoadingFlowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "ILoadingFlowController"));
	}


	template <typename T = void> T OnFlowStart() {
		return ((T (*)(ILoadingFlowController*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnFlowProcessing(Il2CppString* tips, float progress) {
		return ((T (*)(ILoadingFlowController*, Il2CppString*, float))(Il2CppBase() + 0x0))(this, tips, progress);
	}
	template <typename T = void> T OnFlowFinish(uintptr_t result, Il2CppString* errorMessage) {
		return ((T (*)(ILoadingFlowController*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, result, errorMessage);
	}

};

}
