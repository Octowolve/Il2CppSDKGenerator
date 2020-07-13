#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class FireModeChangedTipsHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "FireModeChangedTipsHUD"));
	}

	template <typename T = uintptr_t> T& Tips() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_Timer() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFireModeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFireHandleChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(FireModeChangedTipsHUD*))(Il2CppBase() + 0x31E17A4))(this);
	}
	template <typename T = void> T OnFireModeChanged(uintptr_t msg) {
		return ((T (*)(FireModeChangedTipsHUD*, uintptr_t))(Il2CppBase() + 0x31E18FC))(this, msg);
	}
	template <typename T = void> T OnFireHandleChanged(uintptr_t msg) {
		return ((T (*)(FireModeChangedTipsHUD*, uintptr_t))(Il2CppBase() + 0x31E1C1C))(this, msg);
	}
	template <typename T = void> T ShowTips() {
		return ((T (*)(FireModeChangedTipsHUD*))(Il2CppBase() + 0x31E1A74))(this);
	}
	template <typename T = void> T OnTimer() {
		return ((T (*)(FireModeChangedTipsHUD*))(Il2CppBase() + 0x31E1D94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(FireModeChangedTipsHUD*))(Il2CppBase() + 0x31E1E4C))(this);
	}

};

}
