#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SceneStreamParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SceneStreamParam"));
	}

	template <typename T = Il2CppString*> T& scenePath() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& setActiveSceneOnLoaded() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = bool> T& setVisible() {
		return *(T*)((uintptr_t)this + 0x5);
	}


};

}
