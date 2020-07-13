#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SignableObjectTipsHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SignableObjectTipsHUD"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppVector2> T& Offset() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppVector3> T& UIAnchorOffset() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& AlignInWorld() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& DescLabel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& SignableLabel() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustUIPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SignableObjectTipsHUD*))(Il2CppBase() + 0x3C92F68))(this);
	}
	template <typename T = void> T Show(bool isShow) {
		return ((T (*)(SignableObjectTipsHUD*, bool))(Il2CppBase() + 0x3C93078))(this, isShow);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(SignableObjectTipsHUD*, float))(Il2CppBase() + 0x3C932F8))(this, dt);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(SignableObjectTipsHUD*))(Il2CppBase() + 0x3C934E8))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(SignableObjectTipsHUD*))(Il2CppBase() + 0x3C933A4))(this);
	}
	template <typename T = bool> T NeedShowTips(uintptr_t* HitInfo) {
		return ((T (*)(SignableObjectTipsHUD*, uintptr_t*))(Il2CppBase() + 0x3C934F0))(this, HitInfo);
	}
	template <typename T = void> T UpdateView_1(uintptr_t InImpactInfo) {
		return ((T (*)(SignableObjectTipsHUD*, uintptr_t))(Il2CppBase() + 0x3C936C0))(this, InImpactInfo);
	}
	template <typename T = void> T AdjustUIPos(Il2CppVector2 SceneTargetCenterPosInScreen) {
		return ((T (*)(SignableObjectTipsHUD*, Il2CppVector2))(Il2CppBase() + 0x3C93770))(this, SceneTargetCenterPosInScreen);
	}
	template <typename T = bool> T IsLocalPlayer(uint32_t PlayerID) {
		return ((T (*)(SignableObjectTipsHUD*, uint32_t))(Il2CppBase() + 0x3C93970))(this, PlayerID);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SignableObjectTipsHUD*))(Il2CppBase() + 0x3C93AF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SignableObjectTipsHUD*, float))(Il2CppBase() + 0x3C93AF8))(this, P0);
	}

};

}
