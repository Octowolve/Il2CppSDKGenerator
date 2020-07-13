#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class HelicopterSkillComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "HelicopterSkillComponent"));
	}

	template <typename T = Il2CppString*> T& lockedIconName() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& warningFx() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPressSkillBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Tick(float dt) {
		return ((T (*)(HelicopterSkillComponent*, float))(Il2CppBase() + 0x36FC380))(this, dt);
	}
	template <typename T = void> T OnPressSkillBtn() {
		return ((T (*)(HelicopterSkillComponent*))(Il2CppBase() + 0x36FC614))(this);
	}
	template <typename T = bool> T OnGamepadClick() {
		return ((T (*)(HelicopterSkillComponent*))(Il2CppBase() + 0x36FC6EC))(this);
	}
	template <typename T = void> T RefreshState() {
		return ((T (*)(HelicopterSkillComponent*))(Il2CppBase() + 0x36FC84C))(this);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(HelicopterSkillComponent*))(Il2CppBase() + 0x36FC94C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(HelicopterSkillComponent*, float))(Il2CppBase() + 0x36FCA4C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnPressSkillBtn() {
		return ((T (*)(HelicopterSkillComponent*))(Il2CppBase() + 0x36FCA54))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_OnGamepadClick() {
		return ((T (*)(HelicopterSkillComponent*))(Il2CppBase() + 0x36FCA5C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshState() {
		return ((T (*)(HelicopterSkillComponent*))(Il2CppBase() + 0x36FCA64))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshView() {
		return ((T (*)(HelicopterSkillComponent*))(Il2CppBase() + 0x36FCA6C))(this);
	}

};

}
