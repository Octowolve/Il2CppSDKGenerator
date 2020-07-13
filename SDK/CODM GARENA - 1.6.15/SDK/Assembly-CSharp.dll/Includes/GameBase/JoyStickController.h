#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class JoyStickController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "JoyStickController"));
	}

	template <typename T = uintptr_t> T& m_JoyStickView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_JoyStickConfig() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFromConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_InitFromConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Relocate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSettingResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T get_JoyStickView() {
		return ((T (*)(JoyStickController*))(Il2CppBase() + 0x2E15E68))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(JoyStickController*))(Il2CppBase() + 0x2E15E70))(this);
	}
	template <typename T = uintptr_t> T GetConfig() {
		return ((T (*)(JoyStickController*))(Il2CppBase() + 0x2E15F7C))(this);
	}
	template <typename T = void> T InitConfig(uintptr_t config) {
		return ((T (*)(JoyStickController*, uintptr_t))(Il2CppBase() + 0x2E1601C))(this, config);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(JoyStickController*))(Il2CppBase() + 0x2E160D8))(this);
	}
	template <typename T = void> T InitFromConfig() {
		return ((T (*)(JoyStickController*))(Il2CppBase() + 0x2E16288))(this);
	}
	template <typename T = void> T InitFromConfig_1(uintptr_t config) {
		return ((T (*)(JoyStickController*, uintptr_t))(Il2CppBase() + 0x2E163B4))(this, config);
	}
	template <typename T = void> T Relocate() {
		return ((T (*)(JoyStickController*))(Il2CppBase() + 0x2E164EC))(this);
	}
	template <typename T = void> T SetActive(bool isActive, bool recursively, bool enableOptimize) {
		return ((T (*)(JoyStickController*, bool, bool, bool))(Il2CppBase() + 0x2E165B0))(this, isActive, recursively, enableOptimize);
	}
	template <typename T = bool> T GetSettingResult() {
		return ((T (*)(JoyStickController*))(Il2CppBase() + 0x2E166B0))(this);
	}
	template <typename T = void> T SetUIActive(bool IsActive, bool recursively, bool RemoveDelegate) {
		return ((T (*)(JoyStickController*, bool, bool, bool))(Il2CppBase() + 0x2E16750))(this, IsActive, recursively, RemoveDelegate);
	}
	template <typename T = void> T DisableView(bool disable) {
		return ((T (*)(JoyStickController*, bool))(Il2CppBase() + 0x2E1688C))(this, disable);
	}
	template <typename T = void> T DisableEvent(bool disable) {
		return ((T (*)(JoyStickController*, bool))(Il2CppBase() + 0x2E16ADC))(this, disable);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(JoyStickController*))(Il2CppBase() + 0x2E16BFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetActive(bool P0, bool P1, bool P2) {
		return ((T (*)(JoyStickController*, bool, bool, bool))(Il2CppBase() + 0x2E16C04))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_SetUIActive(bool P0, bool P1, bool P2) {
		return ((T (*)(JoyStickController*, bool, bool, bool))(Il2CppBase() + 0x2E16C24))(this, P0, P1, P2);
	}

};

}
