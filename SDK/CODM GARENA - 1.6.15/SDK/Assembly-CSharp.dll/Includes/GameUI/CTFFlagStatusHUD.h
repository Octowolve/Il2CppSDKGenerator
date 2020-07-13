#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CTFFlagStatusHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CTFFlagStatusHUD"));
	}

	template <typename T = uintptr_t> T& MineSideFlagBase() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& MineSideFlagAway() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& MineSideFlagGrabbed() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& EnemySideFlagBase() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& EnemySideFlagAway() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& EnemySideFlagGrabbed() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MineSideFlagScoreList() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& EnemySideFlagScoreList() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& CountDownRoot() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& CountDownMin() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& CountDownSec() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& TenSecondEffect() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& Losing() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& Wining() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& leftTimeSecond_Str() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& m_TotalTime() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& m_LeftTime() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& m_TimeBegin() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& m_LeftTimeCounting() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyRefreshInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundTimeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLeftTimeZero() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(CTFFlagStatusHUD*))(Il2CppBase() + 0x3DFF138))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(CTFFlagStatusHUD*))(Il2CppBase() + 0x3DFF140))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CTFFlagStatusHUD*))(Il2CppBase() + 0x3DFF14C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CTFFlagStatusHUD*))(Il2CppBase() + 0x3DFF2A4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CTFFlagStatusHUD*))(Il2CppBase() + 0x3DFF374))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(CTFFlagStatusHUD*))(Il2CppBase() + 0x3DFF9D4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(CTFFlagStatusHUD*))(Il2CppBase() + 0x3DFFA84))(this);
	}
	template <typename T = void> T OnNotifyRefreshInfo(uintptr_t MSG) {
		return ((T (*)(CTFFlagStatusHUD*, uintptr_t))(Il2CppBase() + 0x3DFFB7C))(this, MSG);
	}
	template <typename T = void> T RefreshInfo() {
		return ((T (*)(CTFFlagStatusHUD*))(Il2CppBase() + 0x3DFF4D0))(this);
	}
	template <typename T = void> T OnRoundTimeChanged(uintptr_t msg) {
		return ((T (*)(CTFFlagStatusHUD*, uintptr_t))(Il2CppBase() + 0x3DFFC28))(this, msg);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(CTFFlagStatusHUD*))(Il2CppBase() + 0x3DFFE1C))(this);
	}
	template <typename T = void> T SetLeftTimeZero() {
		return ((T (*)(CTFFlagStatusHUD*))(Il2CppBase() + 0x3DFFE24))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(CTFFlagStatusHUD*, float))(Il2CppBase() + 0x3DFFEC8))(this, dt);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CTFFlagStatusHUD*))(Il2CppBase() + 0x3E004F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CTFFlagStatusHUD*))(Il2CppBase() + 0x3E00500))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(CTFFlagStatusHUD*))(Il2CppBase() + 0x3E00508))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(CTFFlagStatusHUD*))(Il2CppBase() + 0x3E00510))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(CTFFlagStatusHUD*))(Il2CppBase() + 0x3E00518))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(CTFFlagStatusHUD*, float))(Il2CppBase() + 0x3E00520))(this, P0);
	}

};

}
