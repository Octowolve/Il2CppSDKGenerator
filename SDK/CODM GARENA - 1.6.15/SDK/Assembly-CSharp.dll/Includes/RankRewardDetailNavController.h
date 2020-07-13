#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RankRewardDetailNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RankRewardDetailNavController"));
	}

	template <typename T = uintptr_t> T& m_DetailCtr() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowCommonAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AvatarAdapterType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBackgroundTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableCameraClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T IsShowCommonAvatar() {
		return ((T (*)(RankRewardDetailNavController*))(Il2CppBase() + 0x381DA0C))(this);
	}
	template <typename T = uintptr_t> T AvatarAdapterType() {
		return ((T (*)(RankRewardDetailNavController*))(Il2CppBase() + 0x381DAAC))(this);
	}
	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(RankRewardDetailNavController*))(Il2CppBase() + 0x381DB4C))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(RankRewardDetailNavController*))(Il2CppBase() + 0x381DBF4))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(RankRewardDetailNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x381DC94))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(RankRewardDetailNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x381DF40))(this, data, nextData);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowCommonAvatar() {
		return ((T (*)(RankRewardDetailNavController*))(Il2CppBase() + 0x381E024))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_AvatarAdapterType() {
		return ((T (*)(RankRewardDetailNavController*))(Il2CppBase() + 0x381E02C))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(RankRewardDetailNavController*))(Il2CppBase() + 0x381E034))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(RankRewardDetailNavController*))(Il2CppBase() + 0x381E03C))(this);
	}

};

}
