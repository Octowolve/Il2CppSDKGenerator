#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class RechargeDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "RechargeDataStore"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_List() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_Res() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_PayInfoState() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateServerData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGoods() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMidasData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRechargeProductID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__CheckPosValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SetPosDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MaxRowInFlowGrid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__RefreshPosInFlowGrid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_List() {
		return ((T (*)(RechargeDataStore*))(Il2CppBase() + 0x23594FC))(this);
	}
	template <typename T = uintptr_t> T get_PayInfoState() {
		return ((T (*)(RechargeDataStore*))(Il2CppBase() + 0x235A024))(this);
	}
	template <typename T = void> T ChangeState(uintptr_t state) {
		return ((T (*)(RechargeDataStore*, uintptr_t))(Il2CppBase() + 0x235A02C))(this, state);
	}
	template <typename T = void> T UpdateServerData(uintptr_t res) {
		return ((T (*)(RechargeDataStore*, uintptr_t))(Il2CppBase() + 0x235A0DC))(this, res);
	}
	template <typename T = bool> T IsGoods(Il2CppString* idStr) {
		return ((T (*)(RechargeDataStore*, Il2CppString*))(Il2CppBase() + 0x235A77C))(this, idStr);
	}
	template <typename T = void> T CheckMidasData(Il2CppDictionary<Il2CppString*, Il2CppString*>* midasData) {
		return ((T (*)(RechargeDataStore*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x235A988))(this, midasData);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetRechargeProductID() {
		return ((T (*)(RechargeDataStore*))(Il2CppBase() + 0x235B174))(this);
	}
	template <typename T = bool> T _CheckPosValid() {
		return ((T (*)(RechargeDataStore*))(Il2CppBase() + 0x2359878))(this);
	}
	template <typename T = void> T _SetPosDefault() {
		return ((T (*)(RechargeDataStore*))(Il2CppBase() + 0x2359C80))(this);
	}
	template <typename T = int32_t> T MaxRowInFlowGrid() {
		return ((T (*)(RechargeDataStore*))(Il2CppBase() + 0x235B32C))(this);
	}
	template <typename T = void> T _RefreshPosInFlowGrid() {
		return ((T (*)(RechargeDataStore*))(Il2CppBase() + 0x2359DDC))(this);
	}
	template <typename T = int32_t> static T _CheckPosValidm__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x235B4BC))(0, a, b);
	}

};

}
