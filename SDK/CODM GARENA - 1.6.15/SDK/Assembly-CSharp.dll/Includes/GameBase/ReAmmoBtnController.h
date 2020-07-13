#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ReAmmoBtnController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ReAmmoBtnController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartReAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStopReAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadReAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ReAmmoBtnController*))(Il2CppBase() + 0x2DDD820))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ReAmmoBtnController*))(Il2CppBase() + 0x2DDD8C4))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(ReAmmoBtnController*))(Il2CppBase() + 0x2DDDB28))(this);
	}
	template <typename T = void> T OnWeaponActive(uintptr_t msg) {
		return ((T (*)(ReAmmoBtnController*, uintptr_t))(Il2CppBase() + 0x2DDDC64))(this, msg);
	}
	template <typename T = void> T OnStartReAmmo(uintptr_t msg) {
		return ((T (*)(ReAmmoBtnController*, uintptr_t))(Il2CppBase() + 0x2DDDD58))(this, msg);
	}
	template <typename T = void> T OnStopReAmmo(uintptr_t msg) {
		return ((T (*)(ReAmmoBtnController*, uintptr_t))(Il2CppBase() + 0x2DDE110))(this, msg);
	}
	template <typename T = bool> T OnGamepadReAmmo() {
		return ((T (*)(ReAmmoBtnController*))(Il2CppBase() + 0x2DDE43C))(this);
	}
	template <typename T = void> T OnBtnUp() {
		return ((T (*)(ReAmmoBtnController*))(Il2CppBase() + 0x2DDE4E4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ReAmmoBtnController*))(Il2CppBase() + 0x2DDED00))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ReAmmoBtnController*))(Il2CppBase() + 0x2DDED08))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(ReAmmoBtnController*))(Il2CppBase() + 0x2DDED10))(this);
	}

};

}
