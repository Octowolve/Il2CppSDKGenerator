#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class PVETutorialController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "PVETutorialController"));
	}

	template <typename T = bool> static T& IsOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_Flow() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& CloseTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& StepInterval() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& bOverLayWindowCloseNotify() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_PVETutorialController_Go() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPointToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPAPToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuffToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPVETutorialEnterBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PVETutorialController*))(Il2CppBase() + 0x4B05038))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PVETutorialController*))(Il2CppBase() + 0x4B0510C))(this);
	}
	template <typename T = void> T InitTime() {
		return ((T (*)(PVETutorialController*))(Il2CppBase() + 0x4B05250))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(PVETutorialController*))(Il2CppBase() + 0x4B05364))(this);
	}
	template <typename T = void> T T_PVETutorialController_Go() {
		return ((T (*)(PVETutorialController*))(Il2CppBase() + 0x4B05498))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(PVETutorialController*))(Il2CppBase() + 0x4B057A0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PVETutorialController*))(Il2CppBase() + 0x4B058D8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PVETutorialController*))(Il2CppBase() + 0x4B05E04))(this);
	}
	template <typename T = void> T OnPointToggleChange(uintptr_t o) {
		return ((T (*)(PVETutorialController*, uintptr_t))(Il2CppBase() + 0x4B05FB0))(this, o);
	}
	template <typename T = void> T OnWeaponToggleChange(uintptr_t o) {
		return ((T (*)(PVETutorialController*, uintptr_t))(Il2CppBase() + 0x4B06080))(this, o);
	}
	template <typename T = void> T OnPAPToggleChange(uintptr_t o) {
		return ((T (*)(PVETutorialController*, uintptr_t))(Il2CppBase() + 0x4B062B0))(this, o);
	}
	template <typename T = void> T OnBuffToggleChange(uintptr_t o) {
		return ((T (*)(PVETutorialController*, uintptr_t))(Il2CppBase() + 0x4B064E0))(this, o);
	}
	template <typename T = void> T OnPVETutorialEnterBtnClicked() {
		return ((T (*)(PVETutorialController*))(Il2CppBase() + 0x4B06710))(this);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(PVETutorialController*))(Il2CppBase() + 0x4B06AFC))(this);
	}
	template <typename T = void> T T_PVETutorialController_Gom__0() {
		return ((T (*)(PVETutorialController*))(Il2CppBase() + 0x4B07154))(this);
	}
	template <typename T = void> T OnWeaponToggleChangem__1() {
		return ((T (*)(PVETutorialController*))(Il2CppBase() + 0x4B07244))(this);
	}
	template <typename T = void> T OnPAPToggleChangem__2() {
		return ((T (*)(PVETutorialController*))(Il2CppBase() + 0x4B07334))(this);
	}
	template <typename T = void> T OnBuffToggleChangem__3() {
		return ((T (*)(PVETutorialController*))(Il2CppBase() + 0x4B07424))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PVETutorialController*))(Il2CppBase() + 0x4B07518))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVETutorialController*))(Il2CppBase() + 0x4B07520))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(PVETutorialController*))(Il2CppBase() + 0x4B07528))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(PVETutorialController*))(Il2CppBase() + 0x4B07530))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PVETutorialController*))(Il2CppBase() + 0x4B07538))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PVETutorialController*))(Il2CppBase() + 0x4B07540))(this);
	}

};

}
