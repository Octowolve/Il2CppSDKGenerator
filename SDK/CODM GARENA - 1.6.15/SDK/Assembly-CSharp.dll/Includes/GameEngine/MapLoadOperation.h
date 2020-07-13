#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MapLoadOperation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MapLoadOperation"));
	}

	template <typename T = Il2CppList<Il2CppString*>*> T& m_ScenePathList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_SceneLoadStatus() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSceneLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppList<Il2CppString*>*> T get_ScenePathList() {
		return ((T (*)(MapLoadOperation*))(Il2CppBase() + 0x4AA4A98))(this);
	}
	template <typename T = void> T set_ScenePathList(Il2CppList<Il2CppString*>* value) {
		return ((T (*)(MapLoadOperation*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x4A9D804))(this, value);
	}
	template <typename T = bool> T get_IsDone() {
		return ((T (*)(MapLoadOperation*))(Il2CppBase() + 0x4A9BD8C))(this);
	}
	template <typename T = void> T OnSceneLoaded(Il2CppString* scenePath) {
		return ((T (*)(MapLoadOperation*, Il2CppString*))(Il2CppBase() + 0x4AA414C))(this, scenePath);
	}

};

}
