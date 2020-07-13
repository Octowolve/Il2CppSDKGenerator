#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ZMNextRoundWaitHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ZMNextRoundWaitHUD"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& RoundBeginLeft() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& m_LeftTime() {
		return *(T*)((uintptr_t)this + 0x84);
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
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyWaveWaitTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ZMNextRoundWaitHUD*))(Il2CppBase() + 0x2A59B04))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ZMNextRoundWaitHUD*))(Il2CppBase() + 0x2A59C18))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ZMNextRoundWaitHUD*))(Il2CppBase() + 0x2A59CD4))(this);
	}
	template <typename T = void> T Show(bool bShow) {
		return ((T (*)(ZMNextRoundWaitHUD*, bool))(Il2CppBase() + 0x2A59D88))(this, bShow);
	}
	template <typename T = void> T OnNotifyWaveWaitTime(uintptr_t MSG) {
		return ((T (*)(ZMNextRoundWaitHUD*, uintptr_t))(Il2CppBase() + 0x2A59E7C))(this, MSG);
	}
	template <typename T = void> T CountDown() {
		return ((T (*)(ZMNextRoundWaitHUD*))(Il2CppBase() + 0x2A5A044))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ZMNextRoundWaitHUD*))(Il2CppBase() + 0x2A5A18C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ZMNextRoundWaitHUD*))(Il2CppBase() + 0x2A5A194))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(ZMNextRoundWaitHUD*))(Il2CppBase() + 0x2A5A19C))(this);
	}

};

}
