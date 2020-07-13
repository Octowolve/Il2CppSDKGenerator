#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class StoryGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "StoryGameBuilder"));
	}

	template <typename T = Il2CppString*> T& m_CachedUISceneConfig() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_CachedUISceneType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildGameUIScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActorInfoRegFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T get_m_PawnCfgPathFor3P() {
		return ((T (*)(StoryGameBuilder*))(Il2CppBase() + 0x3F1C1E0))(this);
	}
	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(StoryGameBuilder*))(Il2CppBase() + 0x3F1C258))(this);
	}
	template <typename T = uintptr_t> T get_m_PlayerInfoType() {
		return ((T (*)(StoryGameBuilder*))(Il2CppBase() + 0x3F1C260))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(StoryGameBuilder*))(Il2CppBase() + 0x3F1C31C))(this);
	}
	template <typename T = uintptr_t> T get_m_GameEventChannelType() {
		return ((T (*)(StoryGameBuilder*))(Il2CppBase() + 0x3F1C3D8))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(StoryGameBuilder*))(Il2CppBase() + 0x3F1C494))(this);
	}
	template <typename T = uintptr_t> T BuildGameUIScene() {
		return ((T (*)(StoryGameBuilder*))(Il2CppBase() + 0x3F1C49C))(this);
	}
	template <typename T = void> T ActorInfoRegFunc(uintptr_t InActorInfo) {
		return ((T (*)(StoryGameBuilder*, uintptr_t))(Il2CppBase() + 0x3F1C574))(this, InActorInfo);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_BuildGameUIScene() {
		return ((T (*)(StoryGameBuilder*))(Il2CppBase() + 0x3F1CA30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ActorInfoRegFunc(uintptr_t P0) {
		return ((T (*)(StoryGameBuilder*, uintptr_t))(Il2CppBase() + 0x3F1CA38))(this, P0);
	}

};

}
