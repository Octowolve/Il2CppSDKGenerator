#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AirborneBoardingHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AirborneBoardingHUD"));
	}

	template <typename T = uintptr_t> T& NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& NewGuideText() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& OpenButton() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& OpenTipsLabel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uint32_t> T& m_ActorID() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uint32_t> T& m_HostActorID() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uint32_t> T& m_LauncherID() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIBanClickType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTipsLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickBoardingBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uint32_t> T get_ActorID() {
		return ((T (*)(AirborneBoardingHUD*))(Il2CppBase() + 0x3B6D2DC))(this);
	}
	template <typename T = void> T set_ActorID(uint32_t value) {
		return ((T (*)(AirborneBoardingHUD*, uint32_t))(Il2CppBase() + 0x3B6D2E4))(this, value);
	}
	template <typename T = uint32_t> T get_HostActorID() {
		return ((T (*)(AirborneBoardingHUD*))(Il2CppBase() + 0x3B6D2EC))(this);
	}
	template <typename T = void> T set_HostActorID(uint32_t value) {
		return ((T (*)(AirborneBoardingHUD*, uint32_t))(Il2CppBase() + 0x3B6D2F4))(this, value);
	}
	template <typename T = uintptr_t> T get_BrEventBtnType() {
		return ((T (*)(AirborneBoardingHUD*))(Il2CppBase() + 0x3B6D2FC))(this);
	}
	template <typename T = uintptr_t> T get_mPawnSwitchState() {
		return ((T (*)(AirborneBoardingHUD*))(Il2CppBase() + 0x3B6D304))(this);
	}
	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(AirborneBoardingHUD*))(Il2CppBase() + 0x3B6D310))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(AirborneBoardingHUD*))(Il2CppBase() + 0x3B6D3B4))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(AirborneBoardingHUD*))(Il2CppBase() + 0x3B6D3BC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AirborneBoardingHUD*))(Il2CppBase() + 0x3B6D3CC))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AirborneBoardingHUD*))(Il2CppBase() + 0x3B6D5F4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(AirborneBoardingHUD*))(Il2CppBase() + 0x3B6D69C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(AirborneBoardingHUD*))(Il2CppBase() + 0x3B6D83C))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(AirborneBoardingHUD*, float))(Il2CppBase() + 0x3B6D8E4))(this, dt);
	}
	template <typename T = void> T SetTipsLabel() {
		return ((T (*)(AirborneBoardingHUD*))(Il2CppBase() + 0x3B6D490))(this);
	}
	template <typename T = void> T OnClickBoardingBtn() {
		return ((T (*)(AirborneBoardingHUD*))(Il2CppBase() + 0x3B6D998))(this);
	}
	template <typename T = void> T SetData(uint32_t uHostActorID, uint32_t uActorID) {
		return ((T (*)(AirborneBoardingHUD*, uint32_t, uint32_t))(Il2CppBase() + 0x3B6E7C8))(this, uHostActorID, uActorID);
	}
	template <typename T = void> T Show(bool bShow) {
		return ((T (*)(AirborneBoardingHUD*, bool))(Il2CppBase() + 0x3B6E88C))(this, bShow);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(AirborneBoardingHUD*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3B6EB44))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(AirborneBoardingHUD*, uintptr_t))(Il2CppBase() + 0x3B6EDB8))(this, itemType);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetUIBanClickType() {
		return ((T (*)(AirborneBoardingHUD*))(Il2CppBase() + 0x3B6EEF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(AirborneBoardingHUD*))(Il2CppBase() + 0x3B6EEFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(AirborneBoardingHUD*))(Il2CppBase() + 0x3B6EF04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(AirborneBoardingHUD*))(Il2CppBase() + 0x3B6EF0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(AirborneBoardingHUD*))(Il2CppBase() + 0x3B6EF14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(AirborneBoardingHUD*, float))(Il2CppBase() + 0x3B6EF1C))(this, P0);
	}

};

}
