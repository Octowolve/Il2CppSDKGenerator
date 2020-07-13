#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SceneStreamOperation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SceneStreamOperation"));
	}

	template <typename T = uintptr_t> T& m_AsyncOp() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_streamParam() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_StartTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_IsStreamOut() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mSceneRootGOs() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> static T& m_GloableOpIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> T& m_OpIndex() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FinishSteamIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActivateScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uint32_t> T get_OpIndex() {
		return ((T (*)(SceneStreamOperation*))(Il2CppBase() + 0x33F15BC))(this);
	}
	template <typename T = Il2CppString*> T get_ScenePath() {
		return ((T (*)(SceneStreamOperation*))(Il2CppBase() + 0x33F15C4))(this);
	}
	template <typename T = Il2CppString*> T get_SceneName() {
		return ((T (*)(SceneStreamOperation*))(Il2CppBase() + 0x33F15CC))(this);
	}
	template <typename T = bool> T get_SetActiveSceneOnLoaded() {
		return ((T (*)(SceneStreamOperation*))(Il2CppBase() + 0x33F1678))(this);
	}
	template <typename T = bool> T get_SetVisible() {
		return ((T (*)(SceneStreamOperation*))(Il2CppBase() + 0x33F1680))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(SceneStreamOperation*))(Il2CppBase() + 0x33F1688))(this);
	}
	template <typename T = bool> T get_IsBlocking() {
		return ((T (*)(SceneStreamOperation*))(Il2CppBase() + 0x33F17CC))(this);
	}
	template <typename T = void> T Init(uintptr_t asyncOp, uintptr_t streamParam, bool isStreamOut) {
		return ((T (*)(SceneStreamOperation*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x33F1808))(this, asyncOp, streamParam, isStreamOut);
	}
	template <typename T = void> T FinishSteamIn() {
		return ((T (*)(SceneStreamOperation*))(Il2CppBase() + 0x33F1918))(this);
	}
	template <typename T = void> T ActivateScene(bool setActiveSceneOnLoaded, bool setVisible) {
		return ((T (*)(SceneStreamOperation*, bool, bool))(Il2CppBase() + 0x33F19B0))(this, setActiveSceneOnLoaded, setVisible);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SceneStreamOperation*))(Il2CppBase() + 0x33F1AB8))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(SceneStreamOperation*))(Il2CppBase() + 0x33F1B64))(this);
	}

};

}
