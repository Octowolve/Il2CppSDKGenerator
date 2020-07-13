#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.CTFGame {

class CTFGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.CTFGame", "CTFGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init1PPawnActorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init3PPawnActorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(CTFGameBuilder*))(Il2CppBase() + 0x2B27874))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(CTFGameBuilder*))(Il2CppBase() + 0x2B2787C))(this);
	}
	template <typename T = uintptr_t> T get_m_GameEventChannelType() {
		return ((T (*)(CTFGameBuilder*))(Il2CppBase() + 0x2B27938))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(CTFGameBuilder*))(Il2CppBase() + 0x2B279F4))(this);
	}
	template <typename T = uintptr_t> T get_m_PlayerInfoType() {
		return ((T (*)(CTFGameBuilder*))(Il2CppBase() + 0x2B27AB0))(this);
	}
	template <typename T = void> T Init1PPawnActorInfo(uintptr_t actorInfo) {
		return ((T (*)(CTFGameBuilder*, uintptr_t))(Il2CppBase() + 0x2B27B6C))(this, actorInfo);
	}
	template <typename T = void> T Init3PPawnActorInfo(uintptr_t actorInfo) {
		return ((T (*)(CTFGameBuilder*, uintptr_t))(Il2CppBase() + 0x2B27C58))(this, actorInfo);
	}
	template <typename T = void> T xLuaBaseProxy_Init1PPawnActorInfo(uintptr_t P0) {
		return ((T (*)(CTFGameBuilder*, uintptr_t))(Il2CppBase() + 0x2B27D44))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Init3PPawnActorInfo(uintptr_t P0) {
		return ((T (*)(CTFGameBuilder*, uintptr_t))(Il2CppBase() + 0x2B27D4C))(this, P0);
	}

};

}
