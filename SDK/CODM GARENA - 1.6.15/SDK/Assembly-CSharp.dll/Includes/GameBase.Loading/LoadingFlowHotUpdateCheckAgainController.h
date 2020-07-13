#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowHotUpdateCheckAgainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowHotUpdateCheckAgainController"));
	}


	template <typename T = bool> T FirstCheckHotfix() {
		return ((T (*)(LoadingFlowHotUpdateCheckAgainController*))(Il2CppBase() + 0x2E47F94))(this);
	}

};

}
