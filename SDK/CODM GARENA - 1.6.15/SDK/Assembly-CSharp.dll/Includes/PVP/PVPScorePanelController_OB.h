#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class PVPScorePanelControllerOB
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "PVPScorePanelController_OB"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_CampDataRed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_CampDataBlue() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& m_WeaponDetailShown() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_ShowWeaponPlayerIndex() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_PageIndex() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& MAX_SHOW_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MovePage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadMoveNext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadMoveForward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragStarted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetWeaponDetailView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPlayerWeaponClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerWeaponClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMatchTabBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFirstCampTabBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSecondCampTabBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFFAView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateNormalView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Sorter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PVPScorePanelControllerOB*))(Il2CppBase() + 0x2B0F430))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PVPScorePanelControllerOB*))(Il2CppBase() + 0x2B0F4D4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PVPScorePanelControllerOB*))(Il2CppBase() + 0x2B0FAE8))(this);
	}
	template <typename T = void> T MovePage(int32_t delta) {
		return ((T (*)(PVPScorePanelControllerOB*, int32_t))(Il2CppBase() + 0x2B10704))(this, delta);
	}
	template <typename T = bool> T GamepadMoveNext() {
		return ((T (*)(PVPScorePanelControllerOB*))(Il2CppBase() + 0x2B10AD0))(this);
	}
	template <typename T = bool> T GamepadMoveForward() {
		return ((T (*)(PVPScorePanelControllerOB*))(Il2CppBase() + 0x2B10B84))(this);
	}
	template <typename T = void> T OnDragStarted() {
		return ((T (*)(PVPScorePanelControllerOB*))(Il2CppBase() + 0x2B10C30))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(PVPScorePanelControllerOB*))(Il2CppBase() + 0x2B10DFC))(this);
	}
	template <typename T = void> T ResetWeaponDetailView() {
		return ((T (*)(PVPScorePanelControllerOB*))(Il2CppBase() + 0x2B10CD4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PVPScorePanelControllerOB*))(Il2CppBase() + 0x2B10EAC))(this);
	}
	template <typename T = bool> T CheckPlayerWeaponClick(uintptr_t playerInfo) {
		return ((T (*)(PVPScorePanelControllerOB*, uintptr_t))(Il2CppBase() + 0x2B116AC))(this, playerInfo);
	}
	template <typename T = void> T OnPlayerWeaponClick(uintptr_t playerInfo, int32_t index, uintptr_t clickObj) {
		return ((T (*)(PVPScorePanelControllerOB*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x2B1177C))(this, playerInfo, index, clickObj);
	}
	template <typename T = void> T OnBtnClick() {
		return ((T (*)(PVPScorePanelControllerOB*))(Il2CppBase() + 0x2B11ACC))(this);
	}
	template <typename T = void> T OnMatchTabBtnClick() {
		return ((T (*)(PVPScorePanelControllerOB*))(Il2CppBase() + 0x2B11B98))(this);
	}
	template <typename T = void> T OnFirstCampTabBtnClick() {
		return ((T (*)(PVPScorePanelControllerOB*))(Il2CppBase() + 0x2B11E00))(this);
	}
	template <typename T = void> T OnSecondCampTabBtnClick() {
		return ((T (*)(PVPScorePanelControllerOB*))(Il2CppBase() + 0x2B12600))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(PVPScorePanelControllerOB*))(Il2CppBase() + 0x2B1288C))(this);
	}
	template <typename T = void> T UpdateFFAView() {
		return ((T (*)(PVPScorePanelControllerOB*))(Il2CppBase() + 0x2B13624))(this);
	}
	template <typename T = void> T UpdateNormalView() {
		return ((T (*)(PVPScorePanelControllerOB*))(Il2CppBase() + 0x2B12AC4))(this);
	}
	template <typename T = int32_t> T Sorter(uintptr_t a, uintptr_t b) {
		return ((T (*)(PVPScorePanelControllerOB*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B13F5C))(this, a, b);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PVPScorePanelControllerOB*))(Il2CppBase() + 0x2B14260))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVPScorePanelControllerOB*))(Il2CppBase() + 0x2B14268))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PVPScorePanelControllerOB*))(Il2CppBase() + 0x2B14270))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(PVPScorePanelControllerOB*))(Il2CppBase() + 0x2B14278))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PVPScorePanelControllerOB*))(Il2CppBase() + 0x2B14280))(this);
	}

};

}
