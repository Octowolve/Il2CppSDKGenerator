#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRLotteryMachineHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRLotteryMachineHUD"));
	}

	template <typename T = uintptr_t> T& UseBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& m_HideBtnTime() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uint32_t> T& m_MachineID() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIBanClickType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Hide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoUseBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestUseBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBtnActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoCheckRootActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = uintptr_t> T get_BrEventBtnType() {
		return ((T (*)(BRLotteryMachineHUD*))(Il2CppBase() + 0x194E8D4))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRLotteryMachineHUD*))(Il2CppBase() + 0x194E8DC))(this);
	}
	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(BRLotteryMachineHUD*))(Il2CppBase() + 0x194E8E4))(this);
	}
	template <typename T = float> T get_ChangeBtnCd() {
		return ((T (*)(BRLotteryMachineHUD*))(Il2CppBase() + 0x194E988))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRLotteryMachineHUD*, float))(Il2CppBase() + 0x194E9D0))(this, dt);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(BRLotteryMachineHUD*))(Il2CppBase() + 0x194EB84))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BRLotteryMachineHUD*))(Il2CppBase() + 0x194EC34))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRLotteryMachineHUD*))(Il2CppBase() + 0x194EDD4))(this);
	}
	template <typename T = void> T ForceRegisterDelegates() {
		return ((T (*)(BRLotteryMachineHUD*))(Il2CppBase() + 0x194EF1C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRLotteryMachineHUD*))(Il2CppBase() + 0x194EFB4))(this);
	}
	template <typename T = bool> T OnGamepadBtn() {
		return ((T (*)(BRLotteryMachineHUD*))(Il2CppBase() + 0x194F0F0))(this);
	}
	template <typename T = void> T Show(uint32_t machineID) {
		return ((T (*)(BRLotteryMachineHUD*, uint32_t))(Il2CppBase() + 0x19319E4))(this, machineID);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(BRLotteryMachineHUD*))(Il2CppBase() + 0x1931AB8))(this);
	}
	template <typename T = void> T OnUseBtn() {
		return ((T (*)(BRLotteryMachineHUD*))(Il2CppBase() + 0x194F238))(this);
	}
	template <typename T = void> T DoUseBtn(bool checkClickBtn) {
		return ((T (*)(BRLotteryMachineHUD*, bool))(Il2CppBase() + 0x194F2E0))(this, checkClickBtn);
	}
	template <typename T = void> T RequestUseBtn() {
		return ((T (*)(BRLotteryMachineHUD*))(Il2CppBase() + 0x194F4B0))(this);
	}
	template <typename T = void> T ChangeBtnState() {
		return ((T (*)(BRLotteryMachineHUD*))(Il2CppBase() + 0x194F3E0))(this);
	}
	template <typename T = void> T CheckBtnActive() {
		return ((T (*)(BRLotteryMachineHUD*))(Il2CppBase() + 0x194EA8C))(this);
	}
	template <typename T = bool> T DoCheckRootActive() {
		return ((T (*)(BRLotteryMachineHUD*))(Il2CppBase() + 0x194F57C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetUIBanClickType() {
		return ((T (*)(BRLotteryMachineHUD*))(Il2CppBase() + 0x194F7C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRLotteryMachineHUD*, float))(Il2CppBase() + 0x194F7C8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(BRLotteryMachineHUD*))(Il2CppBase() + 0x194F7D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BRLotteryMachineHUD*))(Il2CppBase() + 0x194F7D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRLotteryMachineHUD*))(Il2CppBase() + 0x194F7E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ForceRegisterDelegates() {
		return ((T (*)(BRLotteryMachineHUD*))(Il2CppBase() + 0x194F7E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRLotteryMachineHUD*))(Il2CppBase() + 0x194F7F0))(this);
	}

};

}
