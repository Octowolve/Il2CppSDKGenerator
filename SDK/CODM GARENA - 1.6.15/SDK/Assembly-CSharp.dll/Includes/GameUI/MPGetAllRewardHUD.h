#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class MPGetAllRewardHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "MPGetAllRewardHUD"));
	}

	template <typename T = uintptr_t> T& QuitBtn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ResumeBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ResumeLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& autoCloseDuration() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& autoCloseCountDown() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerInitialized() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CountDownTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuitBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuitClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuitCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T ForceRegisterDelegates() {
		return ((T (*)(MPGetAllRewardHUD*))(Il2CppBase() + 0x1FA5B98))(this);
	}
	template <typename T = void> T OnServerInitialized() {
		return ((T (*)(MPGetAllRewardHUD*))(Il2CppBase() + 0x1FA5C30))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(MPGetAllRewardHUD*))(Il2CppBase() + 0x1FA5CC8))(this);
	}
	template <typename T = void> T CountDownTimer() {
		return ((T (*)(MPGetAllRewardHUD*))(Il2CppBase() + 0x1FA5FE4))(this);
	}
	template <typename T = void> T UpdateCountDown() {
		return ((T (*)(MPGetAllRewardHUD*))(Il2CppBase() + 0x1FA5E84))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(MPGetAllRewardHUD*))(Il2CppBase() + 0x1FA6188))(this);
	}
	template <typename T = void> T OnQuitBtnClick() {
		return ((T (*)(MPGetAllRewardHUD*))(Il2CppBase() + 0x1FA62D0))(this);
	}
	template <typename T = void> T OnQuitClick() {
		return ((T (*)(MPGetAllRewardHUD*))(Il2CppBase() + 0x1FA6374))(this);
	}
	template <typename T = void> T OnQuitCallBack(uintptr_t result, int32_t context) {
		return ((T (*)(MPGetAllRewardHUD*, uintptr_t, int32_t))(Il2CppBase() + 0x1FA6500))(this, result, context);
	}
	template <typename T = void> T StopSound() {
		return ((T (*)(MPGetAllRewardHUD*))(Il2CppBase() + 0x1FA6650))(this);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(MPGetAllRewardHUD*))(Il2CppBase() + 0x1FA60D0))(this);
	}
	template <typename T = void> T OnShowView(uintptr_t MSG) {
		return ((T (*)(MPGetAllRewardHUD*, uintptr_t))(Il2CppBase() + 0x1FA68D0))(this, MSG);
	}
	template <typename T = void> T xLuaBaseProxy_ForceRegisterDelegates() {
		return ((T (*)(MPGetAllRewardHUD*))(Il2CppBase() + 0x1FA6A18))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(MPGetAllRewardHUD*))(Il2CppBase() + 0x1FA6A20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(MPGetAllRewardHUD*))(Il2CppBase() + 0x1FA6A28))(this);
	}

};

}
