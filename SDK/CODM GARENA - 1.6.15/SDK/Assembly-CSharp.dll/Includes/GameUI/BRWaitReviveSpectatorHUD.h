#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRWaitReviveSpectatorHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRWaitReviveSpectatorHUD"));
	}

	template <typename T = uintptr_t> T& DropStateRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& PickUpStateRoot() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& WarningHudRoot() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& TipMsgRoot() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& DropImg() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& PickUpImg() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& CdBg() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& CdLabel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& AirplaneCdLabel() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& TipMsg() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& LabelObserve() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& BtnObserve() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& BtnQuit() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& BtnHelpMe() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& HelpMeAnime() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& LabelObserve2() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& BtnObserve2() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& BtnQuit2() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& BtnWarningExit() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& LabelExit() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& LabelExit2() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& m_CardInfo() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& m_LastState() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& m_LastShowTime() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& m_AutoSpectatorTime() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& m_AutoCloseTipMsg() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& m_LastSeatId() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSpectatorState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDropBg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDropLaber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAirplaneCd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshObserveTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BaseCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTipMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDropState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPickUpState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSuccessState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnObserveClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnQuitClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowHelpMeAnime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnHelpMeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnQuit2Click() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnWarningExitClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}

	template <typename T = int32_t> T get_needShowTime() {
		return ((T (*)(BRWaitReviveSpectatorHUD*))(Il2CppBase() + 0x3DD5A74))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRWaitReviveSpectatorHUD*))(Il2CppBase() + 0x3DD5AA8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BRWaitReviveSpectatorHUD*))(Il2CppBase() + 0x3DD5AB0))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BRWaitReviveSpectatorHUD*))(Il2CppBase() + 0x3DD5C00))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(BRWaitReviveSpectatorHUD*))(Il2CppBase() + 0x3DD5E3C))(this);
	}
	template <typename T = void> T CheckSpectatorState() {
		return ((T (*)(BRWaitReviveSpectatorHUD*))(Il2CppBase() + 0x3DD5FA8))(this);
	}
	template <typename T = void> T ClearData() {
		return ((T (*)(BRWaitReviveSpectatorHUD*))(Il2CppBase() + 0x3DD5EEC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRWaitReviveSpectatorHUD*))(Il2CppBase() + 0x3DD6454))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRWaitReviveSpectatorHUD*))(Il2CppBase() + 0x3DD66C4))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRWaitReviveSpectatorHUD*, float))(Il2CppBase() + 0x3DD6910))(this, dt);
	}
	template <typename T = void> T UpdateDropBg() {
		return ((T (*)(BRWaitReviveSpectatorHUD*))(Il2CppBase() + 0x3DD6E88))(this);
	}
	template <typename T = void> T UpdateDropLaber() {
		return ((T (*)(BRWaitReviveSpectatorHUD*))(Il2CppBase() + 0x3DD703C))(this);
	}
	template <typename T = void> T UpdateAirplaneCd() {
		return ((T (*)(BRWaitReviveSpectatorHUD*))(Il2CppBase() + 0x3DD71D0))(this);
	}
	template <typename T = void> T RefreshObserveTime() {
		return ((T (*)(BRWaitReviveSpectatorHUD*))(Il2CppBase() + 0x3DD7438))(this);
	}
	template <typename T = bool> T BaseCheck() {
		return ((T (*)(BRWaitReviveSpectatorHUD*))(Il2CppBase() + 0x3DD6B1C))(this);
	}
	template <typename T = void> T ShowTipMsg(Il2CppString* msgInfo) {
		return ((T (*)(BRWaitReviveSpectatorHUD*, Il2CppString*))(Il2CppBase() + 0x3DD78A4))(this, msgInfo);
	}
	template <typename T = void> T ChangeState() {
		return ((T (*)(BRWaitReviveSpectatorHUD*))(Il2CppBase() + 0x3DD6D2C))(this);
	}
	template <typename T = void> T OnDropState() {
		return ((T (*)(BRWaitReviveSpectatorHUD*))(Il2CppBase() + 0x3DD79C8))(this);
	}
	template <typename T = void> T OnPickUpState() {
		return ((T (*)(BRWaitReviveSpectatorHUD*))(Il2CppBase() + 0x3DD7B1C))(this);
	}
	template <typename T = void> T OnSuccessState() {
		return ((T (*)(BRWaitReviveSpectatorHUD*))(Il2CppBase() + 0x3DD7C70))(this);
	}
	template <typename T = void> T OnBtnObserveClick() {
		return ((T (*)(BRWaitReviveSpectatorHUD*))(Il2CppBase() + 0x3DD768C))(this);
	}
	template <typename T = void> T OnBtnQuitClick() {
		return ((T (*)(BRWaitReviveSpectatorHUD*))(Il2CppBase() + 0x3DD7DC4))(this);
	}
	template <typename T = void> T ShowHelpMeAnime() {
		return ((T (*)(BRWaitReviveSpectatorHUD*))(Il2CppBase() + 0x3DD7E84))(this);
	}
	template <typename T = void> T OnBtnHelpMeClick() {
		return ((T (*)(BRWaitReviveSpectatorHUD*))(Il2CppBase() + 0x3DD7F70))(this);
	}
	template <typename T = void> T OnBtnQuit2Click() {
		return ((T (*)(BRWaitReviveSpectatorHUD*))(Il2CppBase() + 0x3DD80E4))(this);
	}
	template <typename T = void> T OnBtnWarningExitClick() {
		return ((T (*)(BRWaitReviveSpectatorHUD*))(Il2CppBase() + 0x3DD81B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(BRWaitReviveSpectatorHUD*))(Il2CppBase() + 0x3DD8278))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BRWaitReviveSpectatorHUD*))(Il2CppBase() + 0x3DD8280))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(BRWaitReviveSpectatorHUD*))(Il2CppBase() + 0x3DD8288))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRWaitReviveSpectatorHUD*))(Il2CppBase() + 0x3DD8290))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRWaitReviveSpectatorHUD*))(Il2CppBase() + 0x3DD8298))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRWaitReviveSpectatorHUD*, float))(Il2CppBase() + 0x3DD82A0))(this, P0);
	}

};

}
