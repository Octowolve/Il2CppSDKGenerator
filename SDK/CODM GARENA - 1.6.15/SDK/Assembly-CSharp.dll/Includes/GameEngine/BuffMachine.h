#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BuffMachine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BuffMachine"));
	}

	template <typename T = bool> T& ControlledByLua() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& OpenEffect() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& m_Pawn() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_Hud() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelObjectType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerEnterExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyInteractiveContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BuffMachine*))(Il2CppBase() + 0x418B9A8))(this);
	}
	template <typename T = uintptr_t> T GetLevelObjectType() {
		return ((T (*)(BuffMachine*))(Il2CppBase() + 0x418BADC))(this);
	}
	template <typename T = void> T OnLocalPlayerEnterExit(uintptr_t p, bool enter) {
		return ((T (*)(BuffMachine*, uintptr_t, bool))(Il2CppBase() + 0x418BB7C))(this, p, enter);
	}
	template <typename T = void> T NotifyInteractiveContext(bool show) {
		return ((T (*)(BuffMachine*, bool))(Il2CppBase() + 0x418BC4C))(this, show);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BuffMachine*))(Il2CppBase() + 0x418BE34))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BuffMachine*))(Il2CppBase() + 0x418BFD8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(BuffMachine*))(Il2CppBase() + 0x418C1E4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetLevelObjectType() {
		return ((T (*)(BuffMachine*))(Il2CppBase() + 0x418C1EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLocalPlayerEnterExit(uintptr_t P0, bool P1) {
		return ((T (*)(BuffMachine*, uintptr_t, bool))(Il2CppBase() + 0x418C1F4))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_NotifyInteractiveContext(bool P0) {
		return ((T (*)(BuffMachine*, bool))(Il2CppBase() + 0x418C1FC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(BuffMachine*))(Il2CppBase() + 0x418C204))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(BuffMachine*))(Il2CppBase() + 0x418C20C))(this);
	}

};

}
