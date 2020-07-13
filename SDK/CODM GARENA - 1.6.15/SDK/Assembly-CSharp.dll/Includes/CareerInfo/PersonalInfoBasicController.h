#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace CareerInfo {

class PersonalInfoBasicController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CareerInfo", "PersonalInfoBasicController"));
	}

	template <typename T = bool> T& bLocalPlayer() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_playerDataStore() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& bShowPrivacy() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& CachedClickIconType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillTabShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPersonalInfoGameTypeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSetHideInfoCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnJoinClanClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddFriendClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeFrameClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPrivacyOnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPrivacyOffClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHeadClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPlatformCenter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPlatformNav() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PersonalInfoBasicController*))(Il2CppBase() + 0x1CF0CD4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PersonalInfoBasicController*))(Il2CppBase() + 0x1CF0DA8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PersonalInfoBasicController*))(Il2CppBase() + 0x1CF13AC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PersonalInfoBasicController*))(Il2CppBase() + 0x1CF1734))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(PersonalInfoBasicController*))(Il2CppBase() + 0x1CF18B4))(this);
	}
	template <typename T = void> T WillTabShow() {
		return ((T (*)(PersonalInfoBasicController*))(Il2CppBase() + 0x1CF23D8))(this);
	}
	template <typename T = void> T OnPersonalInfoGameTypeChange(uintptr_t Msg) {
		return ((T (*)(PersonalInfoBasicController*, uintptr_t))(Il2CppBase() + 0x1CF24B8))(this, Msg);
	}
	template <typename T = void> T OnSetHideInfoCallBack(uintptr_t Msg) {
		return ((T (*)(PersonalInfoBasicController*, uintptr_t))(Il2CppBase() + 0x1CF25A8))(this, Msg);
	}
	template <typename T = void> T OnJoinClanClick() {
		return ((T (*)(PersonalInfoBasicController*))(Il2CppBase() + 0x1CF28C4))(this);
	}
	template <typename T = void> T OnAddFriendClick() {
		return ((T (*)(PersonalInfoBasicController*))(Il2CppBase() + 0x1CF2CF8))(this);
	}
	template <typename T = void> T OnChangeFrameClick() {
		return ((T (*)(PersonalInfoBasicController*))(Il2CppBase() + 0x1CF2F88))(this);
	}
	template <typename T = void> T OnPrivacyOnClick() {
		return ((T (*)(PersonalInfoBasicController*))(Il2CppBase() + 0x1CF31BC))(this);
	}
	template <typename T = void> T OnPrivacyOffClick() {
		return ((T (*)(PersonalInfoBasicController*))(Il2CppBase() + 0x1CF3310))(this);
	}
	template <typename T = void> T OnHeadClick(uintptr_t Obj) {
		return ((T (*)(PersonalInfoBasicController*, uintptr_t))(Il2CppBase() + 0x1CF3464))(this, Obj);
	}
	template <typename T = void> T ShowPlatformCenter() {
		return ((T (*)(PersonalInfoBasicController*))(Il2CppBase() + 0x1CF1D84))(this);
	}
	template <typename T = void> T ShowPlatformNav() {
		return ((T (*)(PersonalInfoBasicController*))(Il2CppBase() + 0x1CF3800))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PersonalInfoBasicController*))(Il2CppBase() + 0x1CF3924))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PersonalInfoBasicController*))(Il2CppBase() + 0x1CF392C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PersonalInfoBasicController*))(Il2CppBase() + 0x1CF3934))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PersonalInfoBasicController*))(Il2CppBase() + 0x1CF393C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(PersonalInfoBasicController*))(Il2CppBase() + 0x1CF3944))(this);
	}

};

}
