#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UsingTheirs.RemoteInspector {

class HelperSceneList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UsingTheirs.RemoteInspector", "HelperSceneList"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_GetScenes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDontDestroyOnLoadScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppList<uintptr_t>*> static T GetScenes() {
		return ((T (*)(void *))(Il2CppBase() + 0x422EE9C))(0);
	}
	template <typename T = uintptr_t> static T GetDontDestroyOnLoadScene() {
		return ((T (*)(void *))(Il2CppBase() + 0x4231594))(0);
	}

};

}
