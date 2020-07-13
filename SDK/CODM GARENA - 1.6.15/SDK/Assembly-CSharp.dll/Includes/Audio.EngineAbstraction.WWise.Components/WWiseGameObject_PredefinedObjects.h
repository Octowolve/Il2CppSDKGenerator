#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.WWise.Components {

class WWiseGameObjectPredefinedObjects
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.WWise.Components", "WWiseGameObject_PredefinedObjects"));
	}


	template <typename T = void> T RegisterManually(uint64_t iSpecificGameObjectID) {
		return ((T (*)(WWiseGameObjectPredefinedObjects*, uint64_t))(Il2CppBase() + 0x44FAB10))(this, iSpecificGameObjectID);
	}

};

}
