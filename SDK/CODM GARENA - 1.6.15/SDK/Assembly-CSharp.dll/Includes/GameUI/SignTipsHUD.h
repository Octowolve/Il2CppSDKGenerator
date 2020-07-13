#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SignTipsHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SignTipsHUD"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& TipsItemsPool() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_LeftTipsItemOutOfViewList() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RightTipsItemOutOfViewList() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& DefaultItemConfigs() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& TipsItemTemplate() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& TipsItemsList() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppDictionary<uint32_t, uint32_t>*> T& m_LeftItemCurVal() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppDictionary<uint32_t, uint32_t>*> T& m_RightItemCurVal() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDelSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindAvailableItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateIconList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSideItemOutOfView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTipsItemOutOfView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSignsOutOfViewInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SignTipsHUD*))(Il2CppBase() + 0x3C97E64))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(SignTipsHUD*, float))(Il2CppBase() + 0x3C980D0))(this, DeltaTime);
	}
	template <typename T = void> T TickItems(Il2CppList<uintptr_t>* Items, float DeltaTime) {
		return ((T (*)(SignTipsHUD*, Il2CppList<uintptr_t>*, float))(Il2CppBase() + 0x3C9818C))(this, Items, DeltaTime);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(SignTipsHUD*))(Il2CppBase() + 0x3C98458))(this);
	}
	template <typename T = bool> T NeedShowTips() {
		return ((T (*)(SignTipsHUD*))(Il2CppBase() + 0x3C98460))(this);
	}
	template <typename T = void> T Show(bool isShow) {
		return ((T (*)(SignTipsHUD*, bool))(Il2CppBase() + 0x3C97FDC))(this, isShow);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SignTipsHUD*))(Il2CppBase() + 0x3C98568))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SignTipsHUD*))(Il2CppBase() + 0x3C986C0))(this);
	}
	template <typename T = void> T OnAddSign(uintptr_t msg) {
		return ((T (*)(SignTipsHUD*, uintptr_t))(Il2CppBase() + 0x3C98790))(this, msg);
	}
	template <typename T = void> T OnDelSign(uintptr_t msg) {
		return ((T (*)(SignTipsHUD*, uintptr_t))(Il2CppBase() + 0x3C98E1C))(this, msg);
	}
	template <typename T = uintptr_t> T FindAvailableItem(uintptr_t ItemsPool, Il2CppList<uintptr_t>* Items, uintptr_t ItemTemplate) {
		return ((T (*)(SignTipsHUD*, uintptr_t, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3C98A84))(this, ItemsPool, Items, ItemTemplate);
	}
	template <typename T = uintptr_t> T GetItem(Il2CppList<uintptr_t>* Items, uintptr_t OwnerSignCom, bool IsIdle) {
		return ((T (*)(SignTipsHUD*, Il2CppList<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x3C99008))(this, Items, OwnerSignCom, IsIdle);
	}
	template <typename T = void> T UpdateIconList(Il2CppDictionary<uint32_t, uint32_t>* ItemCurVal, Il2CppList<uintptr_t>* TipsItemOutOfViewList, uintptr_t configIdx, uintptr_t curIdx) {
		return ((T (*)(SignTipsHUD*, Il2CppDictionary<uint32_t, uint32_t>*, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C9933C))(this, ItemCurVal, TipsItemOutOfViewList, configIdx, curIdx);
	}
	template <typename T = void> T UpdateSideItemOutOfView(Il2CppDictionary<uint32_t, uint32_t>* ItemCurVal, Il2CppList<uintptr_t>* TipsItemOutOfViewList) {
		return ((T (*)(SignTipsHUD*, Il2CppDictionary<uint32_t, uint32_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3C995CC))(this, ItemCurVal, TipsItemOutOfViewList);
	}
	template <typename T = void> T UpdateTipsItemOutOfView() {
		return ((T (*)(SignTipsHUD*))(Il2CppBase() + 0x3C9838C))(this);
	}
	template <typename T = void> T GetSignsOutOfViewInfo(Il2CppDictionary<uint32_t, uint32_t>* LeftItemCurVal, Il2CppDictionary<uint32_t, uint32_t>* RightItemCurVal) {
		return ((T (*)(SignTipsHUD*, Il2CppDictionary<uint32_t, uint32_t>*, Il2CppDictionary<uint32_t, uint32_t>*))(Il2CppBase() + 0x3C997CC))(this, LeftItemCurVal, RightItemCurVal);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SignTipsHUD*))(Il2CppBase() + 0x3C99CE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SignTipsHUD*, float))(Il2CppBase() + 0x3C99CE8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SignTipsHUD*))(Il2CppBase() + 0x3C99CF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SignTipsHUD*))(Il2CppBase() + 0x3C99CF8))(this);
	}

};

}
