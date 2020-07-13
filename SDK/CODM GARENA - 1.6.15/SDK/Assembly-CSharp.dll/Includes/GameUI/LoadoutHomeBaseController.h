#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutHomeBaseController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutHomeBaseController"));
	}

	template <typename T = uintptr_t> T& mBaseView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mLoadoutDataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mLocalPlayerDataStore() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mSquadAvatarController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mCacheSquadMemberData() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UploadEntranceClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTabToggleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEquipLoadoutBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCurrentLoadout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UploadEntranceClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FocusOnPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendToChangeLoadoutName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCopyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponUpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LoadoutHomeBaseController*))(Il2CppBase() + 0x1A3E3EC))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LoadoutHomeBaseController*))(Il2CppBase() + 0x1A3E694))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(LoadoutHomeBaseController*))(Il2CppBase() + 0x1A3EAF8))(this);
	}
	template <typename T = void> T RefreshLevel() {
		return ((T (*)(LoadoutHomeBaseController*))(Il2CppBase() + 0x1A3E760))(this);
	}
	template <typename T = void> T UploadEntranceClick() {
		return ((T (*)(LoadoutHomeBaseController*))(Il2CppBase() + 0x1A3E900))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutHomeBaseController*))(Il2CppBase() + 0x1A3EBA8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutHomeBaseController*))(Il2CppBase() + 0x1A3EF38))(this);
	}
	template <typename T = void> T OnTabToggleClick(uintptr_t obj) {
		return ((T (*)(LoadoutHomeBaseController*, uintptr_t))(Il2CppBase() + 0x1A3F21C))(this, obj);
	}
	template <typename T = void> T OnEquipLoadoutBtnClick() {
		return ((T (*)(LoadoutHomeBaseController*))(Il2CppBase() + 0x1A3F3B4))(this);
	}
	template <typename T = void> T ShowCurrentLoadout() {
		return ((T (*)(LoadoutHomeBaseController*))(Il2CppBase() + 0x1A3F4DC))(this);
	}
	template <typename T = void> T UploadEntranceClick_1(int32_t loadoutIdx) {
		return ((T (*)(LoadoutHomeBaseController*, int32_t))(Il2CppBase() + 0x1A3FA3C))(this, loadoutIdx);
	}
	template <typename T = void> T FocusOnPos(int32_t pos) {
		return ((T (*)(LoadoutHomeBaseController*, int32_t))(Il2CppBase() + 0x1A3F6C0))(this, pos);
	}
	template <typename T = void> T RefreshAvatar() {
		return ((T (*)(LoadoutHomeBaseController*))(Il2CppBase() + 0x1A3F950))(this);
	}
	template <typename T = void> T SendToChangeLoadoutName() {
		return ((T (*)(LoadoutHomeBaseController*))(Il2CppBase() + 0x1A3FC04))(this);
	}
	template <typename T = void> T OnCopyBtnClick() {
		return ((T (*)(LoadoutHomeBaseController*))(Il2CppBase() + 0x1A3FEB0))(this);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponUpdateData(uintptr_t message) {
		return ((T (*)(LoadoutHomeBaseController*, uintptr_t))(Il2CppBase() + 0x1A3FFC0))(this, message);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutHomeBaseController*))(Il2CppBase() + 0x1A40078))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LoadoutHomeBaseController*))(Il2CppBase() + 0x1A40080))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(LoadoutHomeBaseController*))(Il2CppBase() + 0x1A40088))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutHomeBaseController*))(Il2CppBase() + 0x1A40090))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutHomeBaseController*))(Il2CppBase() + 0x1A40098))(this);
	}

};

}
