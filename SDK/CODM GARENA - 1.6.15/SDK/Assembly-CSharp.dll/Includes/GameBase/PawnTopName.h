#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PawnTopName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PawnTopName"));
	}

	template <typename T = uintptr_t> T& NameLabel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& LevelLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& LevelSprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& ArenaSprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> static T& Nearest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& Furthest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& FurthestScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& OcclusionAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& m_RaycastIntv() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& FixedHeadNameOffset() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& OffsetPosition() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_transform() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& Owner() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_LastRaycastTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_LastRaycastResult() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_LastHeadBoneOffsetY() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_fadeOutStartTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& m_isFadeOut() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_fadeOutTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckActive_DeadReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BaseCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBloodValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDistanceLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDirection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateHUDPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateClampEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLevelInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetArenaSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNameHUDAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNameAndBloodScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFadeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoingFadeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndFadeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = void> T Init(uintptr_t inPawn) {
		return ((T (*)(PawnTopName*, uintptr_t))(Il2CppBase() + 0x16CB594))(this, inPawn);
	}
	template <typename T = void> T CheckActive_DeadReplay() {
		return ((T (*)(PawnTopName*))(Il2CppBase() + 0x16CB634))(this);
	}
	template <typename T = Il2CppVector3> T get_OwnerPosition() {
		return ((T (*)(PawnTopName*))(Il2CppBase() + 0x16CB77C))(this);
	}
	template <typename T = bool> T BaseCheck(uintptr_t worldCam, uintptr_t uiCam) {
		return ((T (*)(PawnTopName*, uintptr_t, uintptr_t))(Il2CppBase() + 0x16CB888))(this, worldCam, uiCam);
	}
	template <typename T = void> T UpdateUI(float dt, uintptr_t worldCam, uintptr_t uiCam) {
		return ((T (*)(PawnTopName*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x16CBC30))(this, dt, worldCam, uiCam);
	}
	template <typename T = void> T SetBloodValue(float crtHealth, float maxHealth) {
		return ((T (*)(PawnTopName*, float, float))(Il2CppBase() + 0x16CCAA0))(this, crtHealth, maxHealth);
	}
	template <typename T = float> T UpdatePosition(Il2CppVector3 ownerPos, Il2CppVector3 playerCameraPos) {
		return ((T (*)(PawnTopName*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x16CC2E4))(this, ownerPos, playerCameraPos);
	}
	template <typename T = void> T UpdateDistanceLabel(bool showDistance, float distance) {
		return ((T (*)(PawnTopName*, bool, float))(Il2CppBase() + 0x16CCB54))(this, showDistance, distance);
	}
	template <typename T = bool> T UpdateDirection(Il2CppVector3 ownerPos, Il2CppVector3 playerCameraPos, Il2CppVector3 forwardDirection) {
		return ((T (*)(PawnTopName*, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x16CC140))(this, ownerPos, playerCameraPos, forwardDirection);
	}
	template <typename T = bool> T UpdateHUDPosition(uintptr_t uiCam, uintptr_t worldCam, float tofdistance) {
		return ((T (*)(PawnTopName*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x16CC590))(this, uiCam, worldCam, tofdistance);
	}
	template <typename T = bool> T UpdateClampEffect(Il2CppVector3 screenPos) {
		return ((T (*)(PawnTopName*, Il2CppVector3))(Il2CppBase() + 0x16CCC08))(this, screenPos);
	}
	template <typename T = void> T UpdateLevelInfo() {
		return ((T (*)(PawnTopName*))(Il2CppBase() + 0x16CCCD0))(this);
	}
	template <typename T = Il2CppString*> T GetLevelSpriteName() {
		return ((T (*)(PawnTopName*))(Il2CppBase() + 0x16CCD68))(this);
	}
	template <typename T = int32_t> T GetLevelText() {
		return ((T (*)(PawnTopName*))(Il2CppBase() + 0x16CCE20))(this);
	}
	template <typename T = Il2CppString*> T GetArenaSpriteName() {
		return ((T (*)(PawnTopName*))(Il2CppBase() + 0x16CD098))(this);
	}
	template <typename T = void> T SetNameHUDAlpha(float value) {
		return ((T (*)(PawnTopName*, float))(Il2CppBase() + 0x16CD378))(this, value);
	}
	template <typename T = void> T SetNameAndBloodScale(float value) {
		return ((T (*)(PawnTopName*, float))(Il2CppBase() + 0x16CD4A0))(this, value);
	}
	template <typename T = uintptr_t> T GetGameMode() {
		return ((T (*)(PawnTopName*))(Il2CppBase() + 0x16CD67C))(this);
	}
	template <typename T = void> T OnFadeout() {
		return ((T (*)(PawnTopName*))(Il2CppBase() + 0x16CD7CC))(this);
	}
	template <typename T = void> T DoingFadeout() {
		return ((T (*)(PawnTopName*))(Il2CppBase() + 0x16CD8C4))(this);
	}
	template <typename T = void> T EndFadeout() {
		return ((T (*)(PawnTopName*))(Il2CppBase() + 0x16CDA08))(this);
	}

};

}
