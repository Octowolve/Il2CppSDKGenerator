#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class PVPGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "PVPGameBuilder"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_LoadBanks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPlayerControllerActorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init1PPawnActorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init3PPawnActorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Add3PCommonComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(PVPGameBuilder*))(Il2CppBase() + 0x2AE0DE4))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(PVPGameBuilder*))(Il2CppBase() + 0x2AE0EA0))(this);
	}
	template <typename T = uintptr_t> T get_m_GameEventChannelType() {
		return ((T (*)(PVPGameBuilder*))(Il2CppBase() + 0x2AE0F5C))(this);
	}
	template <typename T = uintptr_t> T BuildGameUIScene() {
		return ((T (*)(PVPGameBuilder*))(Il2CppBase() + 0x2AE1018))(this);
	}
	template <typename T = void> T ActorInfoRegFunc(uintptr_t InActorInfo) {
		return ((T (*)(PVPGameBuilder*, uintptr_t))(Il2CppBase() + 0x2AE1118))(this, InActorInfo);
	}
	template <typename T = void> T LoadBanks() {
		return ((T (*)(PVPGameBuilder*))(Il2CppBase() + 0x2AE1BB4))(this);
	}
	template <typename T = void> T InitPlayerControllerActorInfo(uintptr_t actorInfo) {
		return ((T (*)(PVPGameBuilder*, uintptr_t))(Il2CppBase() + 0x2AE1F44))(this, actorInfo);
	}
	template <typename T = void> T Init1PPawnActorInfo(uintptr_t actorInfo) {
		return ((T (*)(PVPGameBuilder*, uintptr_t))(Il2CppBase() + 0x2AE2030))(this, actorInfo);
	}
	template <typename T = void> T Init3PPawnActorInfo(uintptr_t actorInfo) {
		return ((T (*)(PVPGameBuilder*, uintptr_t))(Il2CppBase() + 0x2AE211C))(this, actorInfo);
	}
	template <typename T = void> T Add3PCommonComponent(uintptr_t actorInfo) {
		return ((T (*)(PVPGameBuilder*, uintptr_t))(Il2CppBase() + 0x2AE2208))(this, actorInfo);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_BuildGameUIScene() {
		return ((T (*)(PVPGameBuilder*))(Il2CppBase() + 0x2AE2314))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ActorInfoRegFunc(uintptr_t P0) {
		return ((T (*)(PVPGameBuilder*, uintptr_t))(Il2CppBase() + 0x2AE231C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_LoadBanks() {
		return ((T (*)(PVPGameBuilder*))(Il2CppBase() + 0x2AE2324))(this);
	}

};

}
