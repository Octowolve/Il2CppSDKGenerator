#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PVPOpenSceneHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PVPOpenSceneHUD"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Cam() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ModeIcon() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& MapName() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ModeName() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& LeftCountDown() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& Skip() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& MapTexture() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& m_LeftTime() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppVector3> T& skipBtnScreenPos() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetMiniMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTransformLocalPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTransformEulerAngles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTransformLocalScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRightVector() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_List2Vector3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLeftTimeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSkipBtnScreenPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClickCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickSkip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(PVPOpenSceneHUD*))(Il2CppBase() + 0x3AB676C))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(PVPOpenSceneHUD*))(Il2CppBase() + 0x3AB6774))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PVPOpenSceneHUD*))(Il2CppBase() + 0x3AB6784))(this);
	}
	template <typename T = void> T Show(bool bShow) {
		return ((T (*)(PVPOpenSceneHUD*, bool))(Il2CppBase() + 0x3AB69F0))(this, bShow);
	}
	template <typename T = void> T ResetMiniMap(uintptr_t data) {
		return ((T (*)(PVPOpenSceneHUD*, uintptr_t))(Il2CppBase() + 0x3AB6EC0))(this, data);
	}
	template <typename T = void> T ResetTransformLocalPosition(uintptr_t transform, Il2CppArray<uintptr_t>* positions) {
		return ((T (*)(PVPOpenSceneHUD*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3AB7474))(this, transform, positions);
	}
	template <typename T = void> T ResetTransformEulerAngles(uintptr_t transform, Il2CppArray<uintptr_t>* angles) {
		return ((T (*)(PVPOpenSceneHUD*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3AB71A4))(this, transform, angles);
	}
	template <typename T = void> T ResetTransformLocalScale(uintptr_t transform, Il2CppArray<uintptr_t>* scales) {
		return ((T (*)(PVPOpenSceneHUD*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3AB730C))(this, transform, scales);
	}
	template <typename T = bool> T IsRightVector(Il2CppArray<uintptr_t>* vectorArray) {
		return ((T (*)(PVPOpenSceneHUD*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3AB7790))(this, vectorArray);
	}
	template <typename T = Il2CppVector3> T List2Vector3(Il2CppArray<uintptr_t>* list, Il2CppVector3 defaut) {
		return ((T (*)(PVPOpenSceneHUD*, Il2CppArray<uintptr_t>*, Il2CppVector3))(Il2CppBase() + 0x3AB760C))(this, list, defaut);
	}
	template <typename T = void> T SetLeftTimeInfo(float leftTime) {
		return ((T (*)(PVPOpenSceneHUD*, float))(Il2CppBase() + 0x3AB7850))(this, leftTime);
	}
	template <typename T = void> T GetSkipBtnScreenPos() {
		return ((T (*)(PVPOpenSceneHUD*))(Il2CppBase() + 0x3AB68A4))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(PVPOpenSceneHUD*))(Il2CppBase() + 0x3AB7914))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(PVPOpenSceneHUD*, float))(Il2CppBase() + 0x3AB791C))(this, dt);
	}
	template <typename T = void> T ClickCheck() {
		return ((T (*)(PVPOpenSceneHUD*))(Il2CppBase() + 0x3AB7B40))(this);
	}
	template <typename T = void> T OnClickSkip() {
		return ((T (*)(PVPOpenSceneHUD*))(Il2CppBase() + 0x3AB7D54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PVPOpenSceneHUD*))(Il2CppBase() + 0x3AB7E7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PVPOpenSceneHUD*, float))(Il2CppBase() + 0x3AB7E84))(this, P0);
	}

};

}
