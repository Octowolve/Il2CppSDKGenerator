#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SceneStreamingTask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SceneStreamingTask"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& scenePathListArg() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& streamInModeArg() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& setActiveSceneOnLoadedArg() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& streamIn() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
