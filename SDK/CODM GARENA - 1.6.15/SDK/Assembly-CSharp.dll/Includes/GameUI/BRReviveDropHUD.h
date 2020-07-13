#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRReviveDropHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRReviveDropHUD"));
	}

	template <typename T = uintptr_t> T& NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& NewGuideText() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& RootUIPanel() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& OverlappingOffsetRoot() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& CardImg() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& CdBg() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& CdMk() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& CdBg2() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& CdObjIn() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& CdObjOut() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& TargetArrowObj() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& DistanceText() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& MinAlpha() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& YOffset() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& EffectYOffset() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& EffectMinDis() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& EffectUiRate() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = float> T& PickUpMoveTime() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& MaxShowTextDis() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& m_TeamHud() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& m_CardInfo() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& m_TeamHudTarget() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& minOverlapSize() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = bool> T& m_LastValid() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& m_ScreenRate() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = float> T& m_EffectUiRate() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& m_OverlappingOffset() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& CdInHelpEffect() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& CdOutHelpEffect() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& m_DropEffectObj() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTeammateRequestHelpPick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFinishTweener() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSeatIndexValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCardInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDropState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRootUIPanelAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCustomAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTargetArrow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCdBg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePickUpAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoSetOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOffsetForward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckOverlappingInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsOverlapping() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoSortEffObjs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeleteEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = uintptr_t> T get_DropEffectObject() {
		return ((T (*)(BRReviveDropHUD*))(Il2CppBase() + 0x2DAE9F0))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(BRReviveDropHUD*))(Il2CppBase() + 0x2DAE9F8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BRReviveDropHUD*))(Il2CppBase() + 0x2DAEBFC))(this);
	}
	template <typename T = void> T Init(uintptr_t cardInfo) {
		return ((T (*)(BRReviveDropHUD*, uintptr_t))(Il2CppBase() + 0x2DAED04))(this, cardInfo);
	}
	template <typename T = void> T OnNotifyTeammateRequestHelpPick() {
		return ((T (*)(BRReviveDropHUD*))(Il2CppBase() + 0x2DAF728))(this);
	}
	template <typename T = void> T OnFinishTweener() {
		return ((T (*)(BRReviveDropHUD*))(Il2CppBase() + 0x2DAF95C))(this);
	}
	template <typename T = void> T OnSeatIndexValid() {
		return ((T (*)(BRReviveDropHUD*))(Il2CppBase() + 0x2DAEFA0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BRReviveDropHUD*))(Il2CppBase() + 0x2DAFDD0))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(BRReviveDropHUD*))(Il2CppBase() + 0x2DAFE98))(this);
	}
	template <typename T = bool> T CheckCardInfo() {
		return ((T (*)(BRReviveDropHUD*))(Il2CppBase() + 0x2DB0100))(this);
	}
	template <typename T = void> T UpdateDropState() {
		return ((T (*)(BRReviveDropHUD*))(Il2CppBase() + 0x2DB029C))(this);
	}
	template <typename T = void> T UpdateRootUIPanelAlpha(Il2CppVector3 worldPos, bool needShowArrow) {
		return ((T (*)(BRReviveDropHUD*, Il2CppVector3, bool))(Il2CppBase() + 0x2DB0EE8))(this, worldPos, needShowArrow);
	}
	template <typename T = void> T SetCustomAlpha(float alpha) {
		return ((T (*)(BRReviveDropHUD*, float))(Il2CppBase() + 0x2DB19B8))(this, alpha);
	}
	template <typename T = void> T UpdateTargetArrow(Il2CppVector3 worldPos) {
		return ((T (*)(BRReviveDropHUD*, Il2CppVector3))(Il2CppBase() + 0x2DB1834))(this, worldPos);
	}
	template <typename T = void> T UpdateCdBg() {
		return ((T (*)(BRReviveDropHUD*))(Il2CppBase() + 0x2DAF0C0))(this);
	}
	template <typename T = void> T UpdateDistance(Il2CppVector3 worldPos) {
		return ((T (*)(BRReviveDropHUD*, Il2CppVector3))(Il2CppBase() + 0x2DB1478))(this, worldPos);
	}
	template <typename T = void> T UpdatePickUpAni() {
		return ((T (*)(BRReviveDropHUD*))(Il2CppBase() + 0x2DB0890))(this);
	}
	template <typename T = void> T AutoSetOffset(bool needShowArrow) {
		return ((T (*)(BRReviveDropHUD*, bool))(Il2CppBase() + 0x2DB12F4))(this, needShowArrow);
	}
	template <typename T = Il2CppVector3> T GetOffsetForward(bool needShowArrow) {
		return ((T (*)(BRReviveDropHUD*, bool))(Il2CppBase() + 0x2DB1B7C))(this, needShowArrow);
	}
	template <typename T = void> T CheckOverlappingInfo() {
		return ((T (*)(BRReviveDropHUD*))(Il2CppBase() + 0x2DAF320))(this);
	}
	template <typename T = bool> T CheckIsOverlapping(uintptr_t info) {
		return ((T (*)(BRReviveDropHUD*, uintptr_t))(Il2CppBase() + 0x2DB1D28))(this, info);
	}
	template <typename T = void> T PlayEffect() {
		return ((T (*)(BRReviveDropHUD*))(Il2CppBase() + 0x2DAFA9C))(this);
	}
	template <typename T = void> T AutoSortEffObjs() {
		return ((T (*)(BRReviveDropHUD*))(Il2CppBase() + 0x2DB1EEC))(this);
	}
	template <typename T = void> T DeleteEffect() {
		return ((T (*)(BRReviveDropHUD*))(Il2CppBase() + 0x2DAEAA4))(this);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(BRReviveDropHUD*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2DB26E4))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(BRReviveDropHUD*, uintptr_t))(Il2CppBase() + 0x2DB2958))(this, itemType);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(BRReviveDropHUD*))(Il2CppBase() + 0x2DB2A48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(BRReviveDropHUD*))(Il2CppBase() + 0x2DB2A4C))(this);
	}

};

}
