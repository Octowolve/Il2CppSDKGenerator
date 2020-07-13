#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassPaymentPopupController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassPaymentPopupController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& m_UseTicketId() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& m_BeforeVoucherPrice() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& m_ChargeType() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& m_FinalPrice() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& m_ConfId() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppList<uint32_t>*> T& m_TicketList() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBattlePassPaymentView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshFinalPrice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnoughCurrency() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBattlePassPurchase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelectChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitTicketList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BattlePassPaymentPopupController*))(Il2CppBase() + 0x2C2B358))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BattlePassPaymentPopupController*))(Il2CppBase() + 0x2C2B3FC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BattlePassPaymentPopupController*))(Il2CppBase() + 0x2C2B558))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BattlePassPaymentPopupController*))(Il2CppBase() + 0x2C2B7F0))(this);
	}
	template <typename T = void> T SetBattlePassPaymentView(uintptr_t conf, bool IsCutOff) {
		return ((T (*)(BattlePassPaymentPopupController*, uintptr_t, bool))(Il2CppBase() + 0x2C2BA7C))(this, conf, IsCutOff);
	}
	template <typename T = void> T RefreshFinalPrice() {
		return ((T (*)(BattlePassPaymentPopupController*))(Il2CppBase() + 0x2C2C068))(this);
	}
	template <typename T = void> T OnBuyBtnClick() {
		return ((T (*)(BattlePassPaymentPopupController*))(Il2CppBase() + 0x2C2C2C4))(this);
	}
	template <typename T = bool> T IsEnoughCurrency() {
		return ((T (*)(BattlePassPaymentPopupController*))(Il2CppBase() + 0x2C2C73C))(this);
	}
	template <typename T = void> T ReportBattlePassPurchase() {
		return ((T (*)(BattlePassPaymentPopupController*))(Il2CppBase() + 0x2C2C424))(this);
	}
	template <typename T = void> T OnSelectChange(int32_t i) {
		return ((T (*)(BattlePassPaymentPopupController*, int32_t))(Il2CppBase() + 0x2C2C964))(this, i);
	}
	template <typename T = void> T InitTicketList() {
		return ((T (*)(BattlePassPaymentPopupController*))(Il2CppBase() + 0x2C2BEE0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BattlePassPaymentPopupController*))(Il2CppBase() + 0x2C2D530))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BattlePassPaymentPopupController*))(Il2CppBase() + 0x2C2D538))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BattlePassPaymentPopupController*))(Il2CppBase() + 0x2C2D540))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BattlePassPaymentPopupController*))(Il2CppBase() + 0x2C2D548))(this);
	}

};

}
