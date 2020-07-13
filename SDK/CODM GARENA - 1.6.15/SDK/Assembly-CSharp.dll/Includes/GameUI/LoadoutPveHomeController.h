#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutPveHomeController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutPveHomeController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mPveLoadout() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mLoadoutDataStore() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mLoadoutReddotDatastore() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mSquadAvatarController() {
		return *(T*)((uintptr_t)this + 0x4C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_FocusOnPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UploadEntranceClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOffWallButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWonderWeaponButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDefaultPistolButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDefaultMeleeButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoleButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStickGrenadeButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTripmineButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponUpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutPveHomeController*))(Il2CppBase() + 0x1A7B8F8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutPveHomeController*))(Il2CppBase() + 0x1A7B99C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutPveHomeController*))(Il2CppBase() + 0x1A7BC54))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutPveHomeController*))(Il2CppBase() + 0x1A7C130))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LoadoutPveHomeController*))(Il2CppBase() + 0x1A7C550))(this);
	}
	template <typename T = void> T FocusOnPos(int32_t pos) {
		return ((T (*)(LoadoutPveHomeController*, int32_t))(Il2CppBase() + 0x1A7C61C))(this, pos);
	}
	template <typename T = void> T RefreshAvatar() {
		return ((T (*)(LoadoutPveHomeController*))(Il2CppBase() + 0x1A7C8AC))(this);
	}
	template <typename T = void> T UploadEntranceClick() {
		return ((T (*)(LoadoutPveHomeController*))(Il2CppBase() + 0x1A7C978))(this);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(LoadoutPveHomeController*))(Il2CppBase() + 0x1A7CB30))(this);
	}
	template <typename T = void> T SetData() {
		return ((T (*)(LoadoutPveHomeController*))(Il2CppBase() + 0x1A7CDE0))(this);
	}
	template <typename T = void> T OnOffWallButtonClick() {
		return ((T (*)(LoadoutPveHomeController*))(Il2CppBase() + 0x1A7D3F4))(this);
	}
	template <typename T = void> T OnWonderWeaponButtonClick() {
		return ((T (*)(LoadoutPveHomeController*))(Il2CppBase() + 0x1A7D6E0))(this);
	}
	template <typename T = void> T OnDefaultPistolButtonClick() {
		return ((T (*)(LoadoutPveHomeController*))(Il2CppBase() + 0x1A7D8A4))(this);
	}
	template <typename T = void> T OnDefaultMeleeButtonClick() {
		return ((T (*)(LoadoutPveHomeController*))(Il2CppBase() + 0x1A7DB90))(this);
	}
	template <typename T = void> T OnRoleButtonClick() {
		return ((T (*)(LoadoutPveHomeController*))(Il2CppBase() + 0x1A7DD8C))(this);
	}
	template <typename T = void> T OnStickGrenadeButtonClick() {
		return ((T (*)(LoadoutPveHomeController*))(Il2CppBase() + 0x1A7E004))(this);
	}
	template <typename T = void> T OnTripmineButtonClick() {
		return ((T (*)(LoadoutPveHomeController*))(Il2CppBase() + 0x1A7E250))(this);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponUpdateData(uintptr_t message) {
		return ((T (*)(LoadoutPveHomeController*, uintptr_t))(Il2CppBase() + 0x1A7E4A0))(this, message);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutPveHomeController*))(Il2CppBase() + 0x1A7E558))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutPveHomeController*))(Il2CppBase() + 0x1A7E560))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutPveHomeController*))(Il2CppBase() + 0x1A7E568))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutPveHomeController*))(Il2CppBase() + 0x1A7E570))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LoadoutPveHomeController*))(Il2CppBase() + 0x1A7E578))(this);
	}

};

}
