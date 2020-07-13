#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutWeaponAttachmentConfirmController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutWeaponAttachmentConfirmController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mCallback() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& mPreAttachId() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& mNextAttachId() {
		return *(T*)((uintptr_t)this + 0x54);
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
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreCloseAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOkClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutWeaponAttachmentConfirmController*))(Il2CppBase() + 0x1F4B2A8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutWeaponAttachmentConfirmController*))(Il2CppBase() + 0x1F4B34C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutWeaponAttachmentConfirmController*))(Il2CppBase() + 0x1F4B458))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutWeaponAttachmentConfirmController*))(Il2CppBase() + 0x1F4B638))(this);
	}
	template <typename T = void> T PreCloseAnimation() {
		return ((T (*)(LoadoutWeaponAttachmentConfirmController*))(Il2CppBase() + 0x1F4B7B4))(this);
	}
	template <typename T = void> T OnOkClick() {
		return ((T (*)(LoadoutWeaponAttachmentConfirmController*))(Il2CppBase() + 0x1F4B954))(this);
	}
	template <typename T = void> T OnCancelClick() {
		return ((T (*)(LoadoutWeaponAttachmentConfirmController*))(Il2CppBase() + 0x1F4BA20))(this);
	}
	template <typename T = void> T RefreshView(uintptr_t callback, uint32_t preAttach, uint32_t nextAttach) {
		return ((T (*)(LoadoutWeaponAttachmentConfirmController*, uintptr_t, uint32_t, uint32_t))(Il2CppBase() + 0x1F4BAD8))(this, callback, preAttach, nextAttach);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutWeaponAttachmentConfirmController*))(Il2CppBase() + 0x1F4BFD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutWeaponAttachmentConfirmController*))(Il2CppBase() + 0x1F4BFDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutWeaponAttachmentConfirmController*))(Il2CppBase() + 0x1F4BFE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutWeaponAttachmentConfirmController*))(Il2CppBase() + 0x1F4BFEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PreCloseAnimation() {
		return ((T (*)(LoadoutWeaponAttachmentConfirmController*))(Il2CppBase() + 0x1F4BFF4))(this);
	}

};

}
