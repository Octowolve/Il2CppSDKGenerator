#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BpRewardsDisplayNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BpRewardsDisplayNavController"));
	}

	template <typename T = uintptr_t> T& m_Controller() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& mHidePosition() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBackgroundTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableCameraClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowCommonAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowCommonAvatarEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BpRewardsDisplayNavController*))(Il2CppBase() + 0x2C4BF74))(this);
	}
	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(BpRewardsDisplayNavController*))(Il2CppBase() + 0x2C4C014))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(BpRewardsDisplayNavController*))(Il2CppBase() + 0x2C4C0CC))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(BpRewardsDisplayNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2C4C16C))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(BpRewardsDisplayNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2C4C2AC))(this, data, nextData);
	}
	template <typename T = bool> T IsShowCommonAvatar() {
		return ((T (*)(BpRewardsDisplayNavController*))(Il2CppBase() + 0x2C4C3C8))(this);
	}
	template <typename T = bool> T IsShowCommonAvatarEffect() {
		return ((T (*)(BpRewardsDisplayNavController*))(Il2CppBase() + 0x2C4C468))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BpRewardsDisplayNavController*))(Il2CppBase() + 0x2C4C508))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(BpRewardsDisplayNavController*))(Il2CppBase() + 0x2C4C510))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(BpRewardsDisplayNavController*))(Il2CppBase() + 0x2C4C518))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowCommonAvatar() {
		return ((T (*)(BpRewardsDisplayNavController*))(Il2CppBase() + 0x2C4C520))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowCommonAvatarEffect() {
		return ((T (*)(BpRewardsDisplayNavController*))(Il2CppBase() + 0x2C4C528))(this);
	}

};

}
