#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRNoAmmoTipsHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRNoAmmoTipsHUD"));
	}

	template <typename T = uintptr_t> T& NoAmmoPromptRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_NoAmmoTimer() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyNoAmmoPrompt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideNoAmmoPrompt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNoAmmoPromptVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRNoAmmoTipsHUD*))(Il2CppBase() + 0x2DA6C8C))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRNoAmmoTipsHUD*))(Il2CppBase() + 0x2DA6C94))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRNoAmmoTipsHUD*))(Il2CppBase() + 0x2DA6CA4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BRNoAmmoTipsHUD*))(Il2CppBase() + 0x2DA6CAC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRNoAmmoTipsHUD*))(Il2CppBase() + 0x2DA6E50))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRNoAmmoTipsHUD*))(Il2CppBase() + 0x2DA6F60))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRNoAmmoTipsHUD*, float))(Il2CppBase() + 0x2DA7018))(this, dt);
	}
	template <typename T = void> T NotifyNoAmmoPrompt(uintptr_t msg) {
		return ((T (*)(BRNoAmmoTipsHUD*, uintptr_t))(Il2CppBase() + 0x2DA71B0))(this, msg);
	}
	template <typename T = void> T ClearTimer() {
		return ((T (*)(BRNoAmmoTipsHUD*))(Il2CppBase() + 0x2DA72C4))(this);
	}
	template <typename T = void> T HideNoAmmoPrompt() {
		return ((T (*)(BRNoAmmoTipsHUD*))(Il2CppBase() + 0x2DA737C))(this);
	}
	template <typename T = void> T SetNoAmmoPromptVisible(bool show) {
		return ((T (*)(BRNoAmmoTipsHUD*, bool))(Il2CppBase() + 0x2DA6D5C))(this, show);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BRNoAmmoTipsHUD*))(Il2CppBase() + 0x2DA742C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRNoAmmoTipsHUD*))(Il2CppBase() + 0x2DA7430))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRNoAmmoTipsHUD*))(Il2CppBase() + 0x2DA7434))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRNoAmmoTipsHUD*, float))(Il2CppBase() + 0x2DA7438))(this, P0);
	}

};

}
