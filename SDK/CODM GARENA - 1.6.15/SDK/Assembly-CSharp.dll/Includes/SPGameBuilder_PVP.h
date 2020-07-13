#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SPGameBuilderPVP
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SPGameBuilder_PVP"));
	}

	template <typename T = uintptr_t> T& m_CachedUISceneType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_CachedGameInfoType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_subModeType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetBuildGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActorInfoRegFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(SPGameBuilderPVP*))(Il2CppBase() + 0x39141C0))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(SPGameBuilderPVP*))(Il2CppBase() + 0x39141C8))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(SPGameBuilderPVP*))(Il2CppBase() + 0x39141D0))(this);
	}
	template <typename T = uintptr_t> T get_m_GameEventChannelType() {
		return ((T (*)(SPGameBuilderPVP*))(Il2CppBase() + 0x39141D8))(this);
	}
	template <typename T = uintptr_t> T get_CurSubModeType() {
		return ((T (*)(SPGameBuilderPVP*))(Il2CppBase() + 0x3914294))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SPGameBuilderPVP*))(Il2CppBase() + 0x391429C))(this);
	}
	template <typename T = void> T ResetBuildGame() {
		return ((T (*)(SPGameBuilderPVP*))(Il2CppBase() + 0x3914358))(this);
	}
	template <typename T = void> T ActorInfoRegFunc(uintptr_t InActorInfo) {
		return ((T (*)(SPGameBuilderPVP*, uintptr_t))(Il2CppBase() + 0x39146E4))(this, InActorInfo);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SPGameBuilderPVP*))(Il2CppBase() + 0x3914850))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ActorInfoRegFunc(uintptr_t P0) {
		return ((T (*)(SPGameBuilderPVP*, uintptr_t))(Il2CppBase() + 0x3914858))(this, P0);
	}

};

}
