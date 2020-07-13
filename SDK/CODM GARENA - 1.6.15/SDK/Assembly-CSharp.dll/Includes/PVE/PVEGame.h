#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEGame"));
	}

	template <typename T = uintptr_t> T& m_CompSPVE() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitialLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateGameComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyAllPVEAIPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleActorEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_ActorFactory() {
		return ((T (*)(PVEGame*))(Il2CppBase() + 0x438AE20))(this);
	}
	template <typename T = uintptr_t> T get_GameAISightManager() {
		return ((T (*)(PVEGame*))(Il2CppBase() + 0x436522C))(this);
	}
	template <typename T = void> T StartMatch() {
		return ((T (*)(PVEGame*))(Il2CppBase() + 0x438AE4C))(this);
	}
	template <typename T = void> T InitialLocalPlayer() {
		return ((T (*)(PVEGame*))(Il2CppBase() + 0x438AEFC))(this);
	}
	template <typename T = void> T CreateGameComponents() {
		return ((T (*)(PVEGame*))(Il2CppBase() + 0x438AFF8))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(PVEGame*))(Il2CppBase() + 0x438B0C8))(this);
	}
	template <typename T = void> T DestroyPawn(uint32_t PawnID) {
		return ((T (*)(PVEGame*, uint32_t))(Il2CppBase() + 0x438B394))(this, PawnID);
	}
	template <typename T = void> T DestroyAllPVEAIPawn() {
		return ((T (*)(PVEGame*))(Il2CppBase() + 0x438B178))(this);
	}
	template <typename T = bool> T HandleActorEvent(uintptr_t Msg) {
		return ((T (*)(PVEGame*, uintptr_t))(Il2CppBase() + 0x438B5A0))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_StartMatch() {
		return ((T (*)(PVEGame*))(Il2CppBase() + 0x438B724))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateGameComponents() {
		return ((T (*)(PVEGame*))(Il2CppBase() + 0x438B72C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(PVEGame*))(Il2CppBase() + 0x438B734))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyPawn(uint32_t P0) {
		return ((T (*)(PVEGame*, uint32_t))(Il2CppBase() + 0x438B73C))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_HandleActorEvent(uintptr_t P0) {
		return ((T (*)(PVEGame*, uintptr_t))(Il2CppBase() + 0x438B744))(this, P0);
	}

};

}
