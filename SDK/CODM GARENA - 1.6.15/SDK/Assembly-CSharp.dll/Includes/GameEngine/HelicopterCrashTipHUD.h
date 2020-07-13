#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class HelicopterCrashTipHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "HelicopterCrashTipHUD"));
	}

	template <typename T = uintptr_t> T& SafeWidget() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& AlarmWidget() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& AlarmEffect() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_CurrentState() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& m_HideTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTipState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(HelicopterCrashTipHUD*))(Il2CppBase() + 0x36FA5B8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(HelicopterCrashTipHUD*))(Il2CppBase() + 0x36FA6F4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(HelicopterCrashTipHUD*))(Il2CppBase() + 0x36FA894))(this);
	}
	template <typename T = void> T RefreshTipState(uintptr_t Msg) {
		return ((T (*)(HelicopterCrashTipHUD*, uintptr_t))(Il2CppBase() + 0x36FA9A8))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(HelicopterCrashTipHUD*))(Il2CppBase() + 0x36FAE2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(HelicopterCrashTipHUD*))(Il2CppBase() + 0x36FAE34))(this);
	}

};

}
