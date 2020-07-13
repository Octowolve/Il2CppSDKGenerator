#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UILuckyBoxSingleAwardController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UILuckyBoxSingleAwardController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& mProp() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint32_t> T& mBoxID() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& mTurnToMail() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector3> T& FAR_POSITION() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& FLY_DURATION() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnContineBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLuckyBoxSingleAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShow3DView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStyle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLuckyBoxSingleAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAvatarAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SingleItemFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnGroupActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSingleAwardInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOkBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseDoing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenBoxAgainBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCommonReceiveRareViewClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnKeyPressed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(UILuckyBoxSingleAwardController*))(Il2CppBase() + 0x2F61AE0))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(UILuckyBoxSingleAwardController*))(Il2CppBase() + 0x2F61D84))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(UILuckyBoxSingleAwardController*))(Il2CppBase() + 0x2F61E28))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(UILuckyBoxSingleAwardController*))(Il2CppBase() + 0x2F6204C))(this);
	}
	template <typename T = void> T OnContineBtnClick() {
		return ((T (*)(UILuckyBoxSingleAwardController*))(Il2CppBase() + 0x2F621DC))(this);
	}
	template <typename T = void> T SetLuckyBoxSingleAward(uintptr_t item, uintptr_t prop, bool turnToMail, uint32_t boxId) {
		return ((T (*)(UILuckyBoxSingleAwardController*, uintptr_t, uintptr_t, bool, uint32_t))(Il2CppBase() + 0x2F62528))(this, item, prop, turnToMail, boxId);
	}
	template <typename T = void> T SetUI() {
		return ((T (*)(UILuckyBoxSingleAwardController*))(Il2CppBase() + 0x2F62FAC))(this);
	}
	template <typename T = bool> T IsShow3DView(int32_t itemID) {
		return ((T (*)(UILuckyBoxSingleAwardController*, int32_t))(Il2CppBase() + 0x2F62658))(this, itemID);
	}
	template <typename T = void> T SetStyle() {
		return ((T (*)(UILuckyBoxSingleAwardController*))(Il2CppBase() + 0x2F63290))(this);
	}
	template <typename T = void> T ShowLuckyBoxSingleAward() {
		return ((T (*)(UILuckyBoxSingleAwardController*))(Il2CppBase() + 0x2F636FC))(this);
	}
	template <typename T = void> T StartAvatarAnimation() {
		return ((T (*)(UILuckyBoxSingleAwardController*))(Il2CppBase() + 0x2F641F8))(this);
	}
	template <typename T = void> T SingleItemFinish() {
		return ((T (*)(UILuckyBoxSingleAwardController*))(Il2CppBase() + 0x2F63F24))(this);
	}
	template <typename T = void> T SetBtnGroupActive(bool isActive) {
		return ((T (*)(UILuckyBoxSingleAwardController*, bool))(Il2CppBase() + 0x2F64C00))(this, isActive);
	}
	template <typename T = void> T SetSingleAwardInfo(uintptr_t itemProp, bool cacheTurnToMail) {
		return ((T (*)(UILuckyBoxSingleAwardController*, uintptr_t, bool))(Il2CppBase() + 0x2F643FC))(this, itemProp, cacheTurnToMail);
	}
	template <typename T = void> T OnOkBtnClick() {
		return ((T (*)(UILuckyBoxSingleAwardController*))(Il2CppBase() + 0x2F64D2C))(this);
	}
	template <typename T = void> T OnCloseDoing(bool showBpUI) {
		return ((T (*)(UILuckyBoxSingleAwardController*, bool))(Il2CppBase() + 0x2F64DD4))(this, showBpUI);
	}
	template <typename T = void> T OnOpenBoxAgainBtnClick() {
		return ((T (*)(UILuckyBoxSingleAwardController*))(Il2CppBase() + 0x2F64F50))(this);
	}
	template <typename T = void> T OnNotifyCommonReceiveRareViewClose(uintptr_t Msg) {
		return ((T (*)(UILuckyBoxSingleAwardController*, uintptr_t))(Il2CppBase() + 0x2F65334))(this, Msg);
	}
	template <typename T = bool> T OnReturnKeyPressed() {
		return ((T (*)(UILuckyBoxSingleAwardController*))(Il2CppBase() + 0x2F654F4))(this);
	}
	template <typename T = bool> T SetStylem__0(uintptr_t item) {
		return ((T (*)(UILuckyBoxSingleAwardController*, uintptr_t))(Il2CppBase() + 0x2F65610))(this, item);
	}
	template <typename T = void> T StartAvatarAnimationm__1() {
		return ((T (*)(UILuckyBoxSingleAwardController*))(Il2CppBase() + 0x2F65654))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(UILuckyBoxSingleAwardController*))(Il2CppBase() + 0x2F65658))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(UILuckyBoxSingleAwardController*))(Il2CppBase() + 0x2F65660))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(UILuckyBoxSingleAwardController*))(Il2CppBase() + 0x2F65668))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(UILuckyBoxSingleAwardController*))(Il2CppBase() + 0x2F65670))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnContineBtnClick() {
		return ((T (*)(UILuckyBoxSingleAwardController*))(Il2CppBase() + 0x2F65678))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_OnReturnKeyPressed() {
		return ((T (*)(UILuckyBoxSingleAwardController*))(Il2CppBase() + 0x2F65680))(this);
	}

};

}
