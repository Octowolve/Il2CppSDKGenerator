#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LevelDesigner {

class BRLevelDesignGameUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LevelDesigner", "BRLevelDesignGameUIScene"));
	}

	template <typename T = uintptr_t> T& m_BROxygenHUD() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = uintptr_t> T& m_BRDoorHUD() {
		return *(T*)((uintptr_t)this + 0x27C);
	}
	template <typename T = uintptr_t> T& m_BREventBtnMgrHUD() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = uintptr_t> T& m_BRZiplineHUD() {
		return *(T*)((uintptr_t)this + 0x284);
	}
	template <typename T = uintptr_t> T& m_BRSkydivingHUD() {
		return *(T*)((uintptr_t)this + 0x288);
	}
	template <typename T = uintptr_t> T& m_BagBtnController() {
		return *(T*)((uintptr_t)this + 0x28C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& JoySticksHideInSwimming() {
		return *(T*)((uintptr_t)this + 0x290);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyDoorHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetJoyStickPanelType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRLocalPlayerSkydiving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRLocalPlayerLanded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyOxygenHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRZiplineHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Init() {
		return ((T (*)(BRLevelDesignGameUIScene*))(Il2CppBase() + 0x49309DC))(this);
	}
	template <typename T = void> T OnEnterGame(uintptr_t msg) {
		return ((T (*)(BRLevelDesignGameUIScene*, uintptr_t))(Il2CppBase() + 0x4930E70))(this, msg);
	}
	template <typename T = void> T OnNotifyDoorHUD(uintptr_t Msg) {
		return ((T (*)(BRLevelDesignGameUIScene*, uintptr_t))(Il2CppBase() + 0x4931024))(this, Msg);
	}
	template <typename T = uintptr_t> T GetJoyStickPanelType() {
		return ((T (*)(BRLevelDesignGameUIScene*))(Il2CppBase() + 0x4931440))(this);
	}
	template <typename T = void> T OnBRLocalPlayerSkydiving(uintptr_t Msg) {
		return ((T (*)(BRLevelDesignGameUIScene*, uintptr_t))(Il2CppBase() + 0x49314E0))(this, Msg);
	}
	template <typename T = void> T OnBRLocalPlayerLanded(uintptr_t Msg) {
		return ((T (*)(BRLevelDesignGameUIScene*, uintptr_t))(Il2CppBase() + 0x49315FC))(this, Msg);
	}
	template <typename T = void> T OnEnterSwimming(uintptr_t Msg) {
		return ((T (*)(BRLevelDesignGameUIScene*, uintptr_t))(Il2CppBase() + 0x49317A8))(this, Msg);
	}
	template <typename T = void> T OnNotifyOxygenHUD(uintptr_t Msg) {
		return ((T (*)(BRLevelDesignGameUIScene*, uintptr_t))(Il2CppBase() + 0x49318DC))(this, Msg);
	}
	template <typename T = void> T OnBRZiplineHud(uintptr_t msg) {
		return ((T (*)(BRLevelDesignGameUIScene*, uintptr_t))(Il2CppBase() + 0x4931B58))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRLevelDesignGameUIScene*))(Il2CppBase() + 0x4931CD8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnterGame(uintptr_t P0) {
		return ((T (*)(BRLevelDesignGameUIScene*, uintptr_t))(Il2CppBase() + 0x4931CE0))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetJoyStickPanelType() {
		return ((T (*)(BRLevelDesignGameUIScene*))(Il2CppBase() + 0x4931CE8))(this);
	}

};

}
