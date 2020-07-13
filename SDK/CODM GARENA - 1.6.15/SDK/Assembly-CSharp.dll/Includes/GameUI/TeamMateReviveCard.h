#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class TeamMateReviveCard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "TeamMateReviveCard"));
	}

	template <typename T = uintptr_t> T& DropStateObj() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& PickUpStaeObj() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& SuccessStateObj() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& BtnStateObj() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& DropImg() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& PickUpImg() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& BtnImg() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& DropBg() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& WaitPlaneMask() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& UseButton() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& PickUpEffectDelay() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uint32_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_TeamHud() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_CardInfo() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_BindTeamMateItem() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& m_LastState() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uint32_t> T& m_LastSeatId() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& m_NextShowErrorMsg() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& m_PickUpEffectTime() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& m_PickUpEffectHideTime() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& m_PickUpEffectObj() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& m_NextClikTime() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIBanClickType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoSetSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAndClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsStateChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BaseCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDropBg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWaitPlaneMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDropState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPickUpState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSuccessState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindToTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RepositionStateTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadPickUpEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPickUpEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePickUpEffectPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HidePickUpEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOffline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}

	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(TeamMateReviveCard*))(Il2CppBase() + 0x29B415C))(this);
	}
	template <typename T = uintptr_t> T get_mPawnSwitchState() {
		return ((T (*)(TeamMateReviveCard*))(Il2CppBase() + 0x29B4200))(this);
	}
	template <typename T = void> T Init(uintptr_t teamHud, uintptr_t cardInfo) {
		return ((T (*)(TeamMateReviveCard*, uintptr_t, uintptr_t))(Il2CppBase() + 0x29B420C))(this, teamHud, cardInfo);
	}
	template <typename T = void> T AutoSetSpriteName() {
		return ((T (*)(TeamMateReviveCard*))(Il2CppBase() + 0x29B4440))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TeamMateReviveCard*))(Il2CppBase() + 0x29B4770))(this);
	}
	template <typename T = void> T ClearAndClose() {
		return ((T (*)(TeamMateReviveCard*))(Il2CppBase() + 0x29B4910))(this);
	}
	template <typename T = bool> T IsStateChange(uintptr_t last, uintptr_t curr) {
		return ((T (*)(TeamMateReviveCard*, uintptr_t, uintptr_t))(Il2CppBase() + 0x29B4B20))(this, last, curr);
	}
	template <typename T = bool> T BaseCheck() {
		return ((T (*)(TeamMateReviveCard*))(Il2CppBase() + 0x29B4C08))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TeamMateReviveCard*))(Il2CppBase() + 0x29B459C))(this);
	}
	template <typename T = void> T UpdateDropBg() {
		return ((T (*)(TeamMateReviveCard*))(Il2CppBase() + 0x29B5368))(this);
	}
	template <typename T = void> T UpdateWaitPlaneMask() {
		return ((T (*)(TeamMateReviveCard*))(Il2CppBase() + 0x29B551C))(this);
	}
	template <typename T = void> T ChangeState() {
		return ((T (*)(TeamMateReviveCard*))(Il2CppBase() + 0x29B4E20))(this);
	}
	template <typename T = void> T OnDropState() {
		return ((T (*)(TeamMateReviveCard*))(Il2CppBase() + 0x29B5708))(this);
	}
	template <typename T = void> T OnPickUpState() {
		return ((T (*)(TeamMateReviveCard*))(Il2CppBase() + 0x29B57E8))(this);
	}
	template <typename T = void> T OnSuccessState() {
		return ((T (*)(TeamMateReviveCard*))(Il2CppBase() + 0x29B5AC4))(this);
	}
	template <typename T = void> T HideAll() {
		return ((T (*)(TeamMateReviveCard*))(Il2CppBase() + 0x29B4338))(this);
	}
	template <typename T = void> T BindToTarget(uint32_t targetId) {
		return ((T (*)(TeamMateReviveCard*, uint32_t))(Il2CppBase() + 0x29B5BA4))(this, targetId);
	}
	template <typename T = void> T RepositionStateTable() {
		return ((T (*)(TeamMateReviveCard*))(Il2CppBase() + 0x29B4F34))(this);
	}
	template <typename T = void> T OnUseBtnClick() {
		return ((T (*)(TeamMateReviveCard*))(Il2CppBase() + 0x29B61AC))(this);
	}
	template <typename T = bool> T CheckUseBtnClick() {
		return ((T (*)(TeamMateReviveCard*))(Il2CppBase() + 0x29B66A8))(this);
	}
	template <typename T = void> T LoadPickUpEffect() {
		return ((T (*)(TeamMateReviveCard*))(Il2CppBase() + 0x29B5F28))(this);
	}
	template <typename T = void> T ShowPickUpEffect() {
		return ((T (*)(TeamMateReviveCard*))(Il2CppBase() + 0x29B50AC))(this);
	}
	template <typename T = void> T UpdatePickUpEffectPos() {
		return ((T (*)(TeamMateReviveCard*))(Il2CppBase() + 0x29B51E0))(this);
	}
	template <typename T = void> T HidePickUpEffect() {
		return ((T (*)(TeamMateReviveCard*))(Il2CppBase() + 0x29B49F8))(this);
	}
	template <typename T = void> T SetOffline() {
		return ((T (*)(TeamMateReviveCard*))(Il2CppBase() + 0x29B6924))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetUIBanClickType() {
		return ((T (*)(TeamMateReviveCard*))(Il2CppBase() + 0x29B69E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(TeamMateReviveCard*))(Il2CppBase() + 0x29B69E8))(this);
	}

};

}
