#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRMineHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRMineHUD"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Btn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& BtnIcon() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& BtnCancel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ProgressBar() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& DescLabel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& GoldWidget() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& CountLabel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& clickEventHandler() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uint32_t> T& actorId() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> static T& ActiveTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& startProgress() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameHUDStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnIteractiveMine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleMineView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyGoldTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleGoldTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayShakeAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayActiveAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRMineHUD*))(Il2CppBase() + 0x1AAF1BC))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRMineHUD*))(Il2CppBase() + 0x1AAF1C4))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRMineHUD*))(Il2CppBase() + 0x1AAF1D4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BRMineHUD*))(Il2CppBase() + 0x1AAF1DC))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BRMineHUD*))(Il2CppBase() + 0x1AAF350))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRMineHUD*))(Il2CppBase() + 0x1AAF404))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRMineHUD*))(Il2CppBase() + 0x1AAF65C))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BRMineHUD*))(Il2CppBase() + 0x1AAF720))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(BRMineHUD*))(Il2CppBase() + 0x1AAF7C8))(this);
	}
	template <typename T = void> T OnGameHUDStateChanged() {
		return ((T (*)(BRMineHUD*))(Il2CppBase() + 0x1AAF958))(this);
	}
	template <typename T = void> T OnIteractiveMine(uintptr_t msg) {
		return ((T (*)(BRMineHUD*, uintptr_t))(Il2CppBase() + 0x1AAFDB8))(this, msg);
	}
	template <typename T = void> T HandleMineView(bool state) {
		return ((T (*)(BRMineHUD*, bool))(Il2CppBase() + 0x1AAFB34))(this, state);
	}
	template <typename T = void> T OnNotifyGoldTip(uintptr_t msg) {
		return ((T (*)(BRMineHUD*, uintptr_t))(Il2CppBase() + 0x1AB0148))(this, msg);
	}
	template <typename T = void> T OnButtonClick() {
		return ((T (*)(BRMineHUD*))(Il2CppBase() + 0x1AB0348))(this);
	}
	template <typename T = void> T OnCancelClick() {
		return ((T (*)(BRMineHUD*))(Il2CppBase() + 0x1AAF878))(this);
	}
	template <typename T = void> T HandleGoldTip(bool state) {
		return ((T (*)(BRMineHUD*, bool))(Il2CppBase() + 0x1AAF290))(this, state);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRMineHUD*, float))(Il2CppBase() + 0x1AB0414))(this, dt);
	}
	template <typename T = void> T HandleSuccess() {
		return ((T (*)(BRMineHUD*))(Il2CppBase() + 0x1AB0688))(this);
	}
	template <typename T = void> T PlayShakeAni(bool state) {
		return ((T (*)(BRMineHUD*, bool))(Il2CppBase() + 0x1AAFC64))(this, state);
	}
	template <typename T = void> T PlayActiveAni() {
		return ((T (*)(BRMineHUD*))(Il2CppBase() + 0x1AB0748))(this);
	}
	template <typename T = void> T OnNotifyGoldTipm__0() {
		return ((T (*)(BRMineHUD*))(Il2CppBase() + 0x1AB0880))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BRMineHUD*))(Il2CppBase() + 0x1AB0888))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(BRMineHUD*))(Il2CppBase() + 0x1AB0890))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRMineHUD*))(Il2CppBase() + 0x1AB0898))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRMineHUD*))(Il2CppBase() + 0x1AB08A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BRMineHUD*))(Il2CppBase() + 0x1AB08A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(BRMineHUD*))(Il2CppBase() + 0x1AB08B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnGameHUDStateChanged() {
		return ((T (*)(BRMineHUD*))(Il2CppBase() + 0x1AB08B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRMineHUD*, float))(Il2CppBase() + 0x1AB08C0))(this, P0);
	}

};

}
