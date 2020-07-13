#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PVPDroppedPickUpConfirmController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PVPDroppedPickUpConfirmController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& mCenterIndex() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mCachedDroppedPickUp() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadPickup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickConfirmPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowDroppedPickUpItemInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideDroppedPickUpItemInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPickUpDroppedWeaponDisappear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClearDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PVPDroppedPickUpConfirmController*))(Il2CppBase() + 0x2DD2048))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PVPDroppedPickUpConfirmController*))(Il2CppBase() + 0x2DD20EC))(this);
	}
	template <typename T = bool> T OnGamepadPickup() {
		return ((T (*)(PVPDroppedPickUpConfirmController*))(Il2CppBase() + 0x2DD23AC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PVPDroppedPickUpConfirmController*))(Il2CppBase() + 0x2DD28DC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PVPDroppedPickUpConfirmController*))(Il2CppBase() + 0x2DD2A24))(this);
	}
	template <typename T = void> T DelayPickUp() {
		return ((T (*)(PVPDroppedPickUpConfirmController*))(Il2CppBase() + 0x2DD2B6C))(this);
	}
	template <typename T = void> T OnClickConfirmPickUp() {
		return ((T (*)(PVPDroppedPickUpConfirmController*))(Il2CppBase() + 0x2DD2518))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(PVPDroppedPickUpConfirmController*))(Il2CppBase() + 0x2DD3804))(this);
	}
	template <typename T = void> T ShowDroppedPickUpItemInfo(uintptr_t droppedPickUp) {
		return ((T (*)(PVPDroppedPickUpConfirmController*, uintptr_t))(Il2CppBase() + 0x2DD38AC))(this, droppedPickUp);
	}
	template <typename T = void> T HideDroppedPickUpItemInfo(uintptr_t droppedPickUp) {
		return ((T (*)(PVPDroppedPickUpConfirmController*, uintptr_t))(Il2CppBase() + 0x2DD35F0))(this, droppedPickUp);
	}
	template <typename T = void> T OnPickUpDroppedWeaponDisappear(uintptr_t inMsg) {
		return ((T (*)(PVPDroppedPickUpConfirmController*, uintptr_t))(Il2CppBase() + 0x2DD42A4))(this, inMsg);
	}
	template <typename T = void> T OnClearDroppedPickUp(uintptr_t inMsg) {
		return ((T (*)(PVPDroppedPickUpConfirmController*, uintptr_t))(Il2CppBase() + 0x2DD4430))(this, inMsg);
	}
	template <typename T = void> T DisableView(bool disable) {
		return ((T (*)(PVPDroppedPickUpConfirmController*, bool))(Il2CppBase() + 0x2DD44F4))(this, disable);
	}
	template <typename T = void> T Initm__0(uintptr_t go) {
		return ((T (*)(PVPDroppedPickUpConfirmController*, uintptr_t))(Il2CppBase() + 0x2DD46FC))(this, go);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PVPDroppedPickUpConfirmController*))(Il2CppBase() + 0x2DD4700))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVPDroppedPickUpConfirmController*))(Il2CppBase() + 0x2DD4708))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PVPDroppedPickUpConfirmController*))(Il2CppBase() + 0x2DD4710))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PVPDroppedPickUpConfirmController*))(Il2CppBase() + 0x2DD4718))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(PVPDroppedPickUpConfirmController*))(Il2CppBase() + 0x2DD4720))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DisableView(bool P0) {
		return ((T (*)(PVPDroppedPickUpConfirmController*, bool))(Il2CppBase() + 0x2DD4728))(this, P0);
	}

};

}
