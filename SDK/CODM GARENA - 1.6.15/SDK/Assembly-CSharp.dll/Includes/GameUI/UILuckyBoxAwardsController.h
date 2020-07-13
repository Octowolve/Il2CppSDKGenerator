#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UILuckyBoxAwardsController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UILuckyBoxAwardsController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& localPlayerDS() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint32_t> T& m_treasureBoxId() {
		return *(T*)((uintptr_t)this + 0x5C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetTreasureBoxView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AgainBuyBtnCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAwards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseDoing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSkipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On3dViewClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTurnToMailTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnKeyPressed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(UILuckyBoxAwardsController*))(Il2CppBase() + 0x3AFA43C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(UILuckyBoxAwardsController*))(Il2CppBase() + 0x3AFA4E0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(UILuckyBoxAwardsController*))(Il2CppBase() + 0x3AFA79C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(UILuckyBoxAwardsController*))(Il2CppBase() + 0x3AFABC0))(this);
	}
	template <typename T = void> T SetTreasureBoxView(uint32_t treasureBoxId) {
		return ((T (*)(UILuckyBoxAwardsController*, uint32_t))(Il2CppBase() + 0x3AFAED4))(this, treasureBoxId);
	}
	template <typename T = void> T AgainBuyBtnCallback() {
		return ((T (*)(UILuckyBoxAwardsController*))(Il2CppBase() + 0x3AFB22C))(this);
	}
	template <typename T = void> T ShowAwards(Il2CppDictionary<uintptr_t, int32_t>* awardMap, bool turnToMail, uint32_t treasureBoxId) {
		return ((T (*)(UILuckyBoxAwardsController*, Il2CppDictionary<uintptr_t, int32_t>*, bool, uint32_t))(Il2CppBase() + 0x3AFB778))(this, awardMap, turnToMail, treasureBoxId);
	}
	template <typename T = void> T CloseWindow() {
		return ((T (*)(UILuckyBoxAwardsController*))(Il2CppBase() + 0x3AFBC50))(this);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(UILuckyBoxAwardsController*))(Il2CppBase() + 0x3AFBCF4))(this);
	}
	template <typename T = void> T OnCloseDoing(bool showBpUI) {
		return ((T (*)(UILuckyBoxAwardsController*, bool))(Il2CppBase() + 0x3AFB4A0))(this, showBpUI);
	}
	template <typename T = void> T OnSkipBtnClick() {
		return ((T (*)(UILuckyBoxAwardsController*))(Il2CppBase() + 0x3AFBEC0))(this);
	}
	template <typename T = void> T On3dViewClose(uintptr_t Msg) {
		return ((T (*)(UILuckyBoxAwardsController*, uintptr_t))(Il2CppBase() + 0x3AFC050))(this, Msg);
	}
	template <typename T = void> T SetTurnToMailTip(bool turnToMail) {
		return ((T (*)(UILuckyBoxAwardsController*, bool))(Il2CppBase() + 0x3AFBB34))(this, turnToMail);
	}
	template <typename T = bool> T OnReturnKeyPressed() {
		return ((T (*)(UILuckyBoxAwardsController*))(Il2CppBase() + 0x3AFC68C))(this);
	}
	template <typename T = void> T OnCloseDoingm__0() {
		return ((T (*)(UILuckyBoxAwardsController*))(Il2CppBase() + 0x3AFC7A8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(UILuckyBoxAwardsController*))(Il2CppBase() + 0x3AFC898))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(UILuckyBoxAwardsController*))(Il2CppBase() + 0x3AFC8A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(UILuckyBoxAwardsController*))(Il2CppBase() + 0x3AFC8A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(UILuckyBoxAwardsController*))(Il2CppBase() + 0x3AFC8A8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_OnReturnKeyPressed() {
		return ((T (*)(UILuckyBoxAwardsController*))(Il2CppBase() + 0x3AFC8AC))(this);
	}

};

}
