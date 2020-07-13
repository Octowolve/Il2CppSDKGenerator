#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalRadarView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalRadarView"));
	}

	template <typename T = bool> T& m_IsRectangleRadar() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& m_RectangleRadarSizeX() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& m_RectangleRadarSizeY() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& m_RectangleRadarEdgeSizeX() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = float> T& m_RectangleRadarEdgeSizeY() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_GPSBoundaries() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = float> T& TextureScale() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Startup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRadarClippingBorder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGPSBoundary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSatelliteMapByViewTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSpriteInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVehicleShowOnMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(TacticalRadarView*))(Il2CppBase() + 0x279D51C))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(TacticalRadarView*))(Il2CppBase() + 0x279D524))(this);
	}
	template <typename T = float> T get_RectangleRadarSizeX() {
		return ((T (*)(TacticalRadarView*))(Il2CppBase() + 0x279D534))(this);
	}
	template <typename T = void> T set_RectangleRadarSizeX(float value) {
		return ((T (*)(TacticalRadarView*, float))(Il2CppBase() + 0x279D53C))(this, value);
	}
	template <typename T = float> T get_RectangleRadarSizeY() {
		return ((T (*)(TacticalRadarView*))(Il2CppBase() + 0x279D544))(this);
	}
	template <typename T = void> T set_RectangleRadarSizeY(float value) {
		return ((T (*)(TacticalRadarView*, float))(Il2CppBase() + 0x279D54C))(this, value);
	}
	template <typename T = float> T get_RectangleRadarEdgeSizeX() {
		return ((T (*)(TacticalRadarView*))(Il2CppBase() + 0x279D554))(this);
	}
	template <typename T = void> T set_RectangleRadarEdgeSizeX(float value) {
		return ((T (*)(TacticalRadarView*, float))(Il2CppBase() + 0x279D55C))(this, value);
	}
	template <typename T = float> T get_RectangleRadarEdgeSizeY() {
		return ((T (*)(TacticalRadarView*))(Il2CppBase() + 0x279D564))(this);
	}
	template <typename T = void> T set_RectangleRadarEdgeSizeY(float value) {
		return ((T (*)(TacticalRadarView*, float))(Il2CppBase() + 0x279D56C))(this, value);
	}
	template <typename T = bool> T Startup(uintptr_t inGPS) {
		return ((T (*)(TacticalRadarView*, uintptr_t))(Il2CppBase() + 0x279D574))(this, inGPS);
	}
	template <typename T = bool> T CheckResource() {
		return ((T (*)(TacticalRadarView*))(Il2CppBase() + 0x279D64C))(this);
	}
	template <typename T = bool> T InitResources() {
		return ((T (*)(TacticalRadarView*))(Il2CppBase() + 0x279D8F4))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(TacticalRadarView*))(Il2CppBase() + 0x279E1B8))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(TacticalRadarView*, float))(Il2CppBase() + 0x279E1C0))(this, dt);
	}
	template <typename T = void> T UpdateRadarClippingBorder() {
		return ((T (*)(TacticalRadarView*))(Il2CppBase() + 0x279E6E8))(this);
	}
	template <typename T = void> T UpdateGPSBoundary() {
		return ((T (*)(TacticalRadarView*))(Il2CppBase() + 0x279E278))(this);
	}
	template <typename T = void> T UpdateSatelliteMapByViewTarget(uintptr_t inViewTarget) {
		return ((T (*)(TacticalRadarView*, uintptr_t))(Il2CppBase() + 0x279E8B0))(this, inViewTarget);
	}
	template <typename T = bool> T UpdateSpriteInfo(uintptr_t inSprite, Il2CppVector3 position, Il2CppQuaternion rotation, bool ignorePosition, bool ignoreRotation, bool ignoreEdge) {
		return ((T (*)(TacticalRadarView*, uintptr_t, Il2CppVector3, Il2CppQuaternion, bool, bool, bool))(Il2CppBase() + 0x1B9A910))(this, inSprite, position, rotation, ignorePosition, ignoreRotation, ignoreEdge);
	}
	template <typename T = bool> T UpdateVehicleShowOnMap(uintptr_t inSprite, uintptr_t inVehicle) {
		return ((T (*)(TacticalRadarView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x279EB78))(this, inSprite, inVehicle);
	}
	template <typename T = bool> T xLuaBaseProxy_Startup(uintptr_t P0) {
		return ((T (*)(TacticalRadarView*, uintptr_t))(Il2CppBase() + 0x279F298))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckResource() {
		return ((T (*)(TacticalRadarView*))(Il2CppBase() + 0x279F29C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_InitResources() {
		return ((T (*)(TacticalRadarView*))(Il2CppBase() + 0x279F2A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(TacticalRadarView*, float))(Il2CppBase() + 0x279F2A4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateSatelliteMapByViewTarget(uintptr_t P0) {
		return ((T (*)(TacticalRadarView*, uintptr_t))(Il2CppBase() + 0x279F2A8))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_UpdateVehicleShowOnMap(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(TacticalRadarView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x279F2AC))(this, P0, P1);
	}

};

}
