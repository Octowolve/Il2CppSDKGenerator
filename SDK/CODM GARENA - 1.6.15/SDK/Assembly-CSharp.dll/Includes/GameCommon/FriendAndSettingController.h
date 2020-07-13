#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class FriendAndSettingController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "FriendAndSettingController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnSettingBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FriendAndSettingController*))(Il2CppBase() + 0x49F0BD0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(FriendAndSettingController*))(Il2CppBase() + 0x49F0C74))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(FriendAndSettingController*))(Il2CppBase() + 0x49F0D80))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(FriendAndSettingController*))(Il2CppBase() + 0x49F0F20))(this);
	}
	template <typename T = void> T OnSettingBtnClick() {
		return ((T (*)(FriendAndSettingController*))(Il2CppBase() + 0x49F109C))(this);
	}
	template <typename T = void> T OnFriendBtnClick() {
		return ((T (*)(FriendAndSettingController*))(Il2CppBase() + 0x49F12DC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FriendAndSettingController*))(Il2CppBase() + 0x49F151C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FriendAndSettingController*))(Il2CppBase() + 0x49F1524))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(FriendAndSettingController*))(Il2CppBase() + 0x49F152C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(FriendAndSettingController*))(Il2CppBase() + 0x49F1534))(this);
	}

};

}
