#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutBrHomeController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutBrHomeController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mBrLoadoutData() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mLoadoutDataStore() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mSquadAvatarController() {
		return *(T*)((uintptr_t)this + 0x48);
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
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FocusOnPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponSkinBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemSkinBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVehicleSkinBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeapnShowBoxState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoleBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMeleeBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnProfessionChipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnJetpackBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnParachuteBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutBrHomeController*))(Il2CppBase() + 0x2343500))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutBrHomeController*))(Il2CppBase() + 0x23435A4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutBrHomeController*))(Il2CppBase() + 0x2343814))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutBrHomeController*))(Il2CppBase() + 0x2343C8C))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LoadoutBrHomeController*))(Il2CppBase() + 0x23440A4))(this);
	}
	template <typename T = void> T RefreshAvatar() {
		return ((T (*)(LoadoutBrHomeController*))(Il2CppBase() + 0x23441A4))(this);
	}
	template <typename T = void> T FocusOnPos(int32_t pos) {
		return ((T (*)(LoadoutBrHomeController*, int32_t))(Il2CppBase() + 0x2344464))(this, pos);
	}
	template <typename T = void> T OnWeaponSkinBtnClick() {
		return ((T (*)(LoadoutBrHomeController*))(Il2CppBase() + 0x23455A4))(this);
	}
	template <typename T = void> T OnItemSkinBtnClick() {
		return ((T (*)(LoadoutBrHomeController*))(Il2CppBase() + 0x2345800))(this);
	}
	template <typename T = void> T OnVehicleSkinBtnClick() {
		return ((T (*)(LoadoutBrHomeController*))(Il2CppBase() + 0x23459FC))(this);
	}
	template <typename T = void> T SetWeapnShowBoxState(bool isShow) {
		return ((T (*)(LoadoutBrHomeController*, bool))(Il2CppBase() + 0x23453FC))(this, isShow);
	}
	template <typename T = void> T OnRoleBtnClick() {
		return ((T (*)(LoadoutBrHomeController*))(Il2CppBase() + 0x2345BBC))(this);
	}
	template <typename T = void> T OnMeleeBtnClick() {
		return ((T (*)(LoadoutBrHomeController*))(Il2CppBase() + 0x2345E34))(this);
	}
	template <typename T = void> T OnProfessionChipBtnClick() {
		return ((T (*)(LoadoutBrHomeController*))(Il2CppBase() + 0x2346030))(this);
	}
	template <typename T = void> T OnJetpackBtnClick() {
		return ((T (*)(LoadoutBrHomeController*))(Il2CppBase() + 0x2346280))(this);
	}
	template <typename T = void> T OnParachuteBtnClick() {
		return ((T (*)(LoadoutBrHomeController*))(Il2CppBase() + 0x2346454))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutBrHomeController*))(Il2CppBase() + 0x2346628))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutBrHomeController*))(Il2CppBase() + 0x2346630))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutBrHomeController*))(Il2CppBase() + 0x2346638))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutBrHomeController*))(Il2CppBase() + 0x2346640))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LoadoutBrHomeController*))(Il2CppBase() + 0x2346648))(this);
	}

};

}
