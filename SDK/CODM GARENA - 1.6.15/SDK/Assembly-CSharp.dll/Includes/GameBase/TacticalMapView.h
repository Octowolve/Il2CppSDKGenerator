#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalMapView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalMapView"));
	}

	template <typename T = uintptr_t> T& m_TacticalMapPanel() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& m_Tips() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& m_TipsFadeOutTime() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppVector2> T& m_TexCenterOffset() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInactiveGameHudState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Startup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScreenPosToMapUIPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMapTexCenterOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSatelliteMapByViewTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnchors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(TacticalMapView*))(Il2CppBase() + 0x2784254))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(TacticalMapView*))(Il2CppBase() + 0x278425C))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(TacticalMapView*))(Il2CppBase() + 0x278426C))(this);
	}
	template <typename T = uint64_t> T GetInactiveGameHudState() {
		return ((T (*)(TacticalMapView*))(Il2CppBase() + 0x2784278))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(TacticalMapView*))(Il2CppBase() + 0x27843C4))(this);
	}
	template <typename T = Il2CppVector2> T get_TexCenterOffset() {
		return ((T (*)(TacticalMapView*))(Il2CppBase() + 0x27844FC))(this);
	}
	template <typename T = bool> T Startup(uintptr_t inGPS) {
		return ((T (*)(TacticalMapView*, uintptr_t))(Il2CppBase() + 0x2784510))(this, inGPS);
	}
	template <typename T = bool> T CheckResource() {
		return ((T (*)(TacticalMapView*))(Il2CppBase() + 0x27845E8))(this);
	}
	template <typename T = bool> T InitResources() {
		return ((T (*)(TacticalMapView*))(Il2CppBase() + 0x2784890))(this);
	}
	template <typename T = void> T OnClickSwitch(uintptr_t gameObject, bool isPressed) {
		return ((T (*)(TacticalMapView*, uintptr_t, bool))(Il2CppBase() + 0x27851D0))(this, gameObject, isPressed);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(TacticalMapView*))(Il2CppBase() + 0x278544C))(this);
	}
	template <typename T = Il2CppVector2> T ScreenPosToMapUIPos(Il2CppVector2 inScreenPos) {
		return ((T (*)(TacticalMapView*, Il2CppVector2))(Il2CppBase() + 0x2785640))(this, inScreenPos);
	}
	template <typename T = void> T UpdateMapTexCenterOffset() {
		return ((T (*)(TacticalMapView*))(Il2CppBase() + 0x2785884))(this);
	}
	template <typename T = void> T UpdateSatelliteMapByViewTarget(uintptr_t inViewTarget) {
		return ((T (*)(TacticalMapView*, uintptr_t))(Il2CppBase() + 0x2785A00))(this, inViewTarget);
	}
	template <typename T = void> T SetAnchors(bool bUpdateImmediately) {
		return ((T (*)(TacticalMapView*, bool))(Il2CppBase() + 0x2785AB8))(this, bUpdateImmediately);
	}
	template <typename T = uint64_t> T xLuaBaseProxy_GetInactiveGameHudState() {
		return ((T (*)(TacticalMapView*))(Il2CppBase() + 0x2785C6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(TacticalMapView*))(Il2CppBase() + 0x2785C74))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_Startup(uintptr_t P0) {
		return ((T (*)(TacticalMapView*, uintptr_t))(Il2CppBase() + 0x2785C7C))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckResource() {
		return ((T (*)(TacticalMapView*))(Il2CppBase() + 0x2785C80))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_InitResources() {
		return ((T (*)(TacticalMapView*))(Il2CppBase() + 0x2785C84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClickSwitch(uintptr_t P0, bool P1) {
		return ((T (*)(TacticalMapView*, uintptr_t, bool))(Il2CppBase() + 0x2785C88))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnShow() {
		return ((T (*)(TacticalMapView*))(Il2CppBase() + 0x2785C8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateSatelliteMapByViewTarget(uintptr_t P0) {
		return ((T (*)(TacticalMapView*, uintptr_t))(Il2CppBase() + 0x2785C90))(this, P0);
	}

};

}
