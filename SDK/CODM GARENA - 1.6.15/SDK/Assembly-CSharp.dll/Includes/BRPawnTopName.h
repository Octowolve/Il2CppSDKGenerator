#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRPawnTopName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRPawnTopName"));
	}

	template <typename T = uintptr_t> T& DistanceBR() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& SaveSprite() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& SeatSprite() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& SeatLabel() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector2> T& ClampOffset() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppRect> T& m_ClampRect() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitStyle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetArenaSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSeatSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDistanceLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateClampEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBloodValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BetweenClamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLevelInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Init(uintptr_t owner) {
		return ((T (*)(BRPawnTopName*, uintptr_t))(Il2CppBase() + 0x52F750C))(this, owner);
	}
	template <typename T = void> T InitStyle() {
		return ((T (*)(BRPawnTopName*))(Il2CppBase() + 0x52F8410))(this);
	}
	template <typename T = Il2CppString*> T GetArenaSpriteName() {
		return ((T (*)(BRPawnTopName*))(Il2CppBase() + 0x52F98E0))(this);
	}
	template <typename T = Il2CppString*> T GetSeatSpriteName(int32_t seatID) {
		return ((T (*)(BRPawnTopName*, int32_t))(Il2CppBase() + 0x52F97B8))(this, seatID);
	}
	template <typename T = void> T UpdateDistanceLabel(bool showDistance, float distance) {
		return ((T (*)(BRPawnTopName*, bool, float))(Il2CppBase() + 0x52F9988))(this, showDistance, distance);
	}
	template <typename T = bool> T UpdateClampEffect(Il2CppVector3 screenPos) {
		return ((T (*)(BRPawnTopName*, Il2CppVector3))(Il2CppBase() + 0x52F9B68))(this, screenPos);
	}
	template <typename T = void> T SetBloodValue(float crtHealth, float maxHealth) {
		return ((T (*)(BRPawnTopName*, float, float))(Il2CppBase() + 0x52F8074))(this, crtHealth, maxHealth);
	}
	template <typename T = bool> T BetweenClamp(Il2CppVector3 screenPos) {
		return ((T (*)(BRPawnTopName*, Il2CppVector3))(Il2CppBase() + 0x52F9C68))(this, screenPos);
	}
	template <typename T = void> T UpdateLevelInfo() {
		return ((T (*)(BRPawnTopName*))(Il2CppBase() + 0x52F9D44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(BRPawnTopName*, uintptr_t))(Il2CppBase() + 0x52F9FDC))(this, P0);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetArenaSpriteName() {
		return ((T (*)(BRPawnTopName*))(Il2CppBase() + 0x52F9FE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateDistanceLabel(bool P0, float P1) {
		return ((T (*)(BRPawnTopName*, bool, float))(Il2CppBase() + 0x52F9FEC))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_UpdateClampEffect(Il2CppVector3 P0) {
		return ((T (*)(BRPawnTopName*, Il2CppVector3))(Il2CppBase() + 0x52F9FF4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetBloodValue(float P0, float P1) {
		return ((T (*)(BRPawnTopName*, float, float))(Il2CppBase() + 0x52FA014))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateLevelInfo() {
		return ((T (*)(BRPawnTopName*))(Il2CppBase() + 0x52FA01C))(this);
	}

};

}
