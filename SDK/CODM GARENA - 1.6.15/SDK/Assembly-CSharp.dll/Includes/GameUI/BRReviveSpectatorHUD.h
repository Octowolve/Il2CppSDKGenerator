#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRReviveSpectatorHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRReviveSpectatorHUD"));
	}

	template <typename T = uintptr_t> T& CardImg() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& DropBg() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& BaseMsg() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& AirplaneCountDown() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& BtnHelpMe() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& HelpMeAnime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& m_FaileAutoCloseTime() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& m_NextUpdateAirplane() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_CardInfo() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_LastState() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& m_IsShowing() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDropBg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAirPlaneCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BaseCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDropState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPickUpState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSuccessState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFailState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowHelpMeAnime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnHelpMeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = bool> T get_IsShowing() {
		return ((T (*)(BRReviveSpectatorHUD*))(Il2CppBase() + 0x2DAE4B4))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRReviveSpectatorHUD*))(Il2CppBase() + 0x2DB2AF4))(this);
	}
	template <typename T = uint64_t> T get_AlwaysShowGameHudState() {
		return ((T (*)(BRReviveSpectatorHUD*))(Il2CppBase() + 0x2DB2AFC))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(BRReviveSpectatorHUD*))(Il2CppBase() + 0x2DB2B08))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRReviveSpectatorHUD*))(Il2CppBase() + 0x2DB2B14))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BRReviveSpectatorHUD*))(Il2CppBase() + 0x2DB2B1C))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(BRReviveSpectatorHUD*))(Il2CppBase() + 0x2DB2C88))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRReviveSpectatorHUD*))(Il2CppBase() + 0x2DB2D34))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRReviveSpectatorHUD*))(Il2CppBase() + 0x2DB2E38))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRReviveSpectatorHUD*, float))(Il2CppBase() + 0x2DB2F48))(this, dt);
	}
	template <typename T = void> T UpdateDropBg() {
		return ((T (*)(BRReviveSpectatorHUD*))(Il2CppBase() + 0x2DB3420))(this);
	}
	template <typename T = void> T UpdateAirPlaneCountDown() {
		return ((T (*)(BRReviveSpectatorHUD*))(Il2CppBase() + 0x2DB35D4))(this);
	}
	template <typename T = bool> T BaseCheck() {
		return ((T (*)(BRReviveSpectatorHUD*))(Il2CppBase() + 0x2DB30B0))(this);
	}
	template <typename T = void> T ChangeState() {
		return ((T (*)(BRReviveSpectatorHUD*))(Il2CppBase() + 0x2DB32F0))(this);
	}
	template <typename T = void> T OnDropState() {
		return ((T (*)(BRReviveSpectatorHUD*))(Il2CppBase() + 0x2DB3A24))(this);
	}
	template <typename T = void> T OnPickUpState() {
		return ((T (*)(BRReviveSpectatorHUD*))(Il2CppBase() + 0x2DB3B9C))(this);
	}
	template <typename T = void> T OnSuccessState() {
		return ((T (*)(BRReviveSpectatorHUD*))(Il2CppBase() + 0x2DB3D14))(this);
	}
	template <typename T = void> T OnFailState() {
		return ((T (*)(BRReviveSpectatorHUD*))(Il2CppBase() + 0x2DB38C4))(this);
	}
	template <typename T = void> T ShowHelpMeAnime() {
		return ((T (*)(BRReviveSpectatorHUD*))(Il2CppBase() + 0x2DB3E74))(this);
	}
	template <typename T = void> T OnBtnHelpMeClick() {
		return ((T (*)(BRReviveSpectatorHUD*))(Il2CppBase() + 0x2DB3F60))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BRReviveSpectatorHUD*))(Il2CppBase() + 0x2DB40D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(BRReviveSpectatorHUD*))(Il2CppBase() + 0x2DB40D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRReviveSpectatorHUD*))(Il2CppBase() + 0x2DB40DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRReviveSpectatorHUD*))(Il2CppBase() + 0x2DB40E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRReviveSpectatorHUD*, float))(Il2CppBase() + 0x2DB40E4))(this, P0);
	}

};

}
