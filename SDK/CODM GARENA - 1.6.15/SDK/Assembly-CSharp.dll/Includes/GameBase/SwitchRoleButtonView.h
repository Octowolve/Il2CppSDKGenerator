#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SwitchRoleButtonView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SwitchRoleButtonView"));
	}

	template <typename T = uintptr_t> T& SwitchBtn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_TargetClickedHandler() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetClickHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(SwitchRoleButtonView*))(Il2CppBase() + 0x30B716C))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(SwitchRoleButtonView*, float))(Il2CppBase() + 0x30B7174))(this, dt);
	}
	template <typename T = void> T SetSelect() {
		return ((T (*)(SwitchRoleButtonView*))(Il2CppBase() + 0x30B6FE4))(this);
	}
	template <typename T = void> T SetClickHandler(uintptr_t clickHandler) {
		return ((T (*)(SwitchRoleButtonView*, uintptr_t))(Il2CppBase() + 0x30B74F8))(this, clickHandler);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SwitchRoleButtonView*, float))(Il2CppBase() + 0x30B75A0))(this, P0);
	}

};

}
