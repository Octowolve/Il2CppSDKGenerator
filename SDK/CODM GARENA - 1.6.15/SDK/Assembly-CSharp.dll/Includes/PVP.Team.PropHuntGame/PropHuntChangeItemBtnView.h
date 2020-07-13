#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntChangeItemBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntChangeItemBtnView"));
	}

	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ChangeCntLabel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& m_CurIsLocked() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGamepadAlphaWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRateScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetJoySticksPanelController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PropHuntChangeItemBtnView*))(Il2CppBase() + 0x34928A8))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(PropHuntChangeItemBtnView*))(Il2CppBase() + 0x3492950))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(PropHuntChangeItemBtnView*))(Il2CppBase() + 0x3492958))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(PropHuntChangeItemBtnView*))(Il2CppBase() + 0x3492964))(this);
	}
	template <typename T = uintptr_t> T GetGamepadAlphaWidget() {
		return ((T (*)(PropHuntChangeItemBtnView*))(Il2CppBase() + 0x3492974))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PropHuntChangeItemBtnView*))(Il2CppBase() + 0x3492A48))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PropHuntChangeItemBtnView*))(Il2CppBase() + 0x3492AF0))(this);
	}
	template <typename T = float> T GetRateScale() {
		return ((T (*)(PropHuntChangeItemBtnView*))(Il2CppBase() + 0x3492B98))(this);
	}
	template <typename T = uintptr_t> T GetJoySticksPanelController() {
		return ((T (*)(PropHuntChangeItemBtnView*))(Il2CppBase() + 0x3492C38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PropHuntChangeItemBtnView*))(Il2CppBase() + 0x3492D90))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetGamepadAlphaWidget() {
		return ((T (*)(PropHuntChangeItemBtnView*))(Il2CppBase() + 0x3492D98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PropHuntChangeItemBtnView*))(Il2CppBase() + 0x3492DA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PropHuntChangeItemBtnView*))(Il2CppBase() + 0x3492DA8))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetRateScale() {
		return ((T (*)(PropHuntChangeItemBtnView*))(Il2CppBase() + 0x3492DB0))(this);
	}

};

}
