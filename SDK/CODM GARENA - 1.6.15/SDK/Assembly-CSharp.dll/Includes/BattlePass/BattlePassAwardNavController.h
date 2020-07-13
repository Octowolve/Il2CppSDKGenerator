#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassAwardNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassAwardNavController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_FadeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BattlePassAwardNavController*))(Il2CppBase() + 0x32636E4))(this);
	}
	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(BattlePassAwardNavController*))(Il2CppBase() + 0x3263784))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(BattlePassAwardNavController*))(Il2CppBase() + 0x32638F8))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(BattlePassAwardNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3263998))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(BattlePassAwardNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3263D6C))(this, data, nextData);
	}
	template <typename T = bool> T IsShowCommonAvatar() {
		return ((T (*)(BattlePassAwardNavController*))(Il2CppBase() + 0x3263F58))(this);
	}
	template <typename T = bool> T IsShowCommonAvatarEffect() {
		return ((T (*)(BattlePassAwardNavController*))(Il2CppBase() + 0x3263FF8))(this);
	}
	template <typename T = void> T FadeOut() {
		return ((T (*)(BattlePassAwardNavController*))(Il2CppBase() + 0x3264098))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BattlePassAwardNavController*))(Il2CppBase() + 0x326415C))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(BattlePassAwardNavController*))(Il2CppBase() + 0x3264164))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(BattlePassAwardNavController*))(Il2CppBase() + 0x326416C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowCommonAvatar() {
		return ((T (*)(BattlePassAwardNavController*))(Il2CppBase() + 0x3264174))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowCommonAvatarEffect() {
		return ((T (*)(BattlePassAwardNavController*))(Il2CppBase() + 0x326417C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_FadeOut() {
		return ((T (*)(BattlePassAwardNavController*))(Il2CppBase() + 0x3264184))(this);
	}

};

}
