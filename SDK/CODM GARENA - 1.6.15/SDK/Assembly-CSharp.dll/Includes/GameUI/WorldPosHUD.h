#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class WorldPosHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "WorldPosHUD"));
	}

	template <typename T = Il2CppVector2> T& ScreenEdgeOffset() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppRect> T& m_ClampRect() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& m_HasAutoSetClampRect() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppVector3> T& hidePos() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& FadeConfigData() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& CurDistToCenter() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoSetClampRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAcuteAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetScenePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedClamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UpdatePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetQuaternion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BetweenClamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEdgePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetArraw() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetArrowDirection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetScreenPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = void> T Init() {
		return ((T (*)(WorldPosHUD*))(Il2CppBase() + 0x2A3D1E4))(this);
	}
	template <typename T = void> T AutoSetClampRect() {
		return ((T (*)(WorldPosHUD*))(Il2CppBase() + 0x2A3D320))(this);
	}
	template <typename T = bool> T IsAcuteAngle(Il2CppVector3 worldPos) {
		return ((T (*)(WorldPosHUD*, Il2CppVector3))(Il2CppBase() + 0x2A3D6F4))(this, worldPos);
	}
	template <typename T = Il2CppVector3> T GetScenePos(Il2CppVector3 worldPos) {
		return ((T (*)(WorldPosHUD*, Il2CppVector3))(Il2CppBase() + 0x2A3D8D8))(this, worldPos);
	}
	template <typename T = void> T UpdatePos(Il2CppVector3 worldPos) {
		return ((T (*)(WorldPosHUD*, Il2CppVector3))(Il2CppBase() + 0x2A3DB70))(this, worldPos);
	}
	template <typename T = bool> T IsNeedClamp() {
		return ((T (*)(WorldPosHUD*))(Il2CppBase() + 0x2A2DB4C))(this);
	}
	template <typename T = void> T UpdatePos_1(Il2CppVector3 worldPos, Il2CppRect clampRect) {
		return ((T (*)(WorldPosHUD*, Il2CppVector3, Il2CppRect))(Il2CppBase() + 0x2A3DDCC))(this, worldPos, clampRect);
	}
	template <typename T = Il2CppQuaternion> T GetQuaternion(Il2CppVector3 worldPos, Il2CppRect clampRect) {
		return ((T (*)(WorldPosHUD*, Il2CppVector3, Il2CppRect))(Il2CppBase() + 0x2A3E7B0))(this, worldPos, clampRect);
	}
	template <typename T = bool> T BetweenClamp(Il2CppVector3 worldPos, Il2CppRect clampRect) {
		return ((T (*)(WorldPosHUD*, Il2CppVector3, Il2CppRect))(Il2CppBase() + 0x2A3EAC8))(this, worldPos, clampRect);
	}
	template <typename T = Il2CppVector2> static T GetEdgePosition(Il2CppVector2 offset, Il2CppRect clampRect, bool isAcuteAngle) {
		return ((T (*)(void *, Il2CppVector2, Il2CppRect, bool))(Il2CppBase() + 0x2A3E494))(0, offset, clampRect, isAcuteAngle);
	}
	template <typename T = Il2CppQuaternion> T GetTargetArraw(Il2CppVector3 worldPos, Il2CppRect clampRect) {
		return ((T (*)(WorldPosHUD*, Il2CppVector3, Il2CppRect))(Il2CppBase() + 0x2A3ED58))(this, worldPos, clampRect);
	}
	template <typename T = uintptr_t> T GetArrowDirection(Il2CppVector3 worldPos, Il2CppRect clampRect) {
		return ((T (*)(WorldPosHUD*, Il2CppVector3, Il2CppRect))(Il2CppBase() + 0x2A3EFFC))(this, worldPos, clampRect);
	}
	template <typename T = uintptr_t> T GetScreenPos(Il2CppVector3 worldPos, Il2CppRect clampRect) {
		return ((T (*)(WorldPosHUD*, Il2CppVector3, Il2CppRect))(Il2CppBase() + 0x2A3F1A0))(this, worldPos, clampRect);
	}
	template <typename T = void> T ChangeAlpha(float newAlpha) {
		return ((T (*)(WorldPosHUD*, float))(Il2CppBase() + 0x2A3F464))(this, newAlpha);
	}

};

}
