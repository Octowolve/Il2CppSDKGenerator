#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class RoomBrPrivatePasswordSettingController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "RoomBrPrivatePasswordSettingController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& roomDS() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& m_HasPassword() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPasswordOnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPasswordOffClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPasswordState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInputDeselect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnConfirmClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnCancelClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfShutdownWhenClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T Init() {
		return ((T (*)(RoomBrPrivatePasswordSettingController*))(Il2CppBase() + 0x3D761B4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomBrPrivatePasswordSettingController*))(Il2CppBase() + 0x3D7691C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomBrPrivatePasswordSettingController*))(Il2CppBase() + 0x3D769C0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomBrPrivatePasswordSettingController*))(Il2CppBase() + 0x3D76D08))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(RoomBrPrivatePasswordSettingController*))(Il2CppBase() + 0x3D76FD8))(this);
	}
	template <typename T = void> T OnBtnPasswordOnClick() {
		return ((T (*)(RoomBrPrivatePasswordSettingController*))(Il2CppBase() + 0x3D77080))(this);
	}
	template <typename T = void> T OnBtnPasswordOffClick() {
		return ((T (*)(RoomBrPrivatePasswordSettingController*))(Il2CppBase() + 0x3D7720C))(this);
	}
	template <typename T = void> T SetPasswordState(bool state) {
		return ((T (*)(RoomBrPrivatePasswordSettingController*, bool))(Il2CppBase() + 0x3D77128))(this, state);
	}
	template <typename T = void> T OnInputDeselect() {
		return ((T (*)(RoomBrPrivatePasswordSettingController*))(Il2CppBase() + 0x3D772B4))(this);
	}
	template <typename T = void> T OnBtnConfirmClick() {
		return ((T (*)(RoomBrPrivatePasswordSettingController*))(Il2CppBase() + 0x3D77464))(this);
	}
	template <typename T = void> T OnBtnCancelClick() {
		return ((T (*)(RoomBrPrivatePasswordSettingController*))(Il2CppBase() + 0x3D77A6C))(this);
	}
	template <typename T = bool> T IfShutdownWhenClose() {
		return ((T (*)(RoomBrPrivatePasswordSettingController*))(Il2CppBase() + 0x3D77B20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomBrPrivatePasswordSettingController*))(Il2CppBase() + 0x3D77BC0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomBrPrivatePasswordSettingController*))(Il2CppBase() + 0x3D77BC8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomBrPrivatePasswordSettingController*))(Il2CppBase() + 0x3D77BD0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomBrPrivatePasswordSettingController*))(Il2CppBase() + 0x3D77BD8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(RoomBrPrivatePasswordSettingController*))(Il2CppBase() + 0x3D77BE0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfShutdownWhenClose() {
		return ((T (*)(RoomBrPrivatePasswordSettingController*))(Il2CppBase() + 0x3D77BE8))(this);
	}

};

}
