#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class GameHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "GameHUD"));
	}

	template <typename T = uintptr_t> T& m_EventChannel() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& m_RoundEnd() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEventChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterZoneEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterZoneEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameHUDStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMessageBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ShowMessageBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T get_OwnerUIScene() {
		return ((T (*)(GameHUD*))(Il2CppBase() + 0x4710510))(this);
	}
	template <typename T = uintptr_t> T GetEventChannel() {
		return ((T (*)(GameHUD*))(Il2CppBase() + 0x47105D4))(this);
	}
	template <typename T = void> T RegisterEventHandler(uint32_t CommandId, void* CallFunc) {
		return ((T (*)(GameHUD*, uint32_t, void*))(Il2CppBase() + 0x4710674))(this, CommandId, CallFunc);
	}
	template <typename T = void> T UnregisterEventHandler(uint32_t CommandId) {
		return ((T (*)(GameHUD*, uint32_t))(Il2CppBase() + 0x4710758))(this, CommandId);
	}
	template <typename T = void> T RegisterZoneEventHandler(uintptr_t lobbyType, void* CallFunc) {
		return ((T (*)(GameHUD*, uintptr_t, void*))(Il2CppBase() + 0x4710820))(this, lobbyType, CallFunc);
	}
	template <typename T = void> T UnregisterZoneEventHandler(uintptr_t lobbyType) {
		return ((T (*)(GameHUD*, uintptr_t))(Il2CppBase() + 0x4710904))(this, lobbyType);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(GameHUD*))(Il2CppBase() + 0x47109CC))(this);
	}
	template <typename T = void> T OnRoundEnd(uintptr_t result) {
		return ((T (*)(GameHUD*, uintptr_t))(Il2CppBase() + 0x4710A9C))(this, result);
	}
	template <typename T = void> T OnSyncPlayerInfo(uint32_t playerID, uint32_t propertyID, uintptr_t msg) {
		return ((T (*)(GameHUD*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x4710B48))(this, playerID, propertyID, msg);
	}
	template <typename T = void> T OnGameHUDStateChanged() {
		return ((T (*)(GameHUD*))(Il2CppBase() + 0x4710C04))(this);
	}
	template <typename T = bool> T get_IsActive() {
		return ((T (*)(GameHUD*))(Il2CppBase() + 0x4710C9C))(this);
	}
	template <typename T = void> T ShowMessageBox(Il2CppString* message, uintptr_t callback, Il2CppString* title, uintptr_t buttonsType, int32_t userContext, bool isModal, bool isAboveAll, uintptr_t mode, Il2CppString* okButtonText, Il2CppString* cancelButtonText) {
		return ((T (*)(GameHUD*, Il2CppString*, uintptr_t, Il2CppString*, uintptr_t, int32_t, bool, bool, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4710CCC))(this, message, callback, title, buttonsType, userContext, isModal, isAboveAll, mode, okButtonText, cancelButtonText);
	}
	template <typename T = void> T ShowMessageBox_1(Il2CppString* message, uintptr_t callback, Il2CppString* title, uintptr_t buttonsType, int32_t userContext, bool isModal, bool isAboveAll, uintptr_t mode, Il2CppString* okButtonText, Il2CppString* cancelButtonText) {
		return ((T (*)(GameHUD*, Il2CppString*, uintptr_t, Il2CppString*, uintptr_t, int32_t, bool, bool, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1E85134))(this, message, callback, title, buttonsType, userContext, isModal, isAboveAll, mode, okButtonText, cancelButtonText);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(GameHUD*))(Il2CppBase() + 0x4710E10))(this);
	}

};

}
