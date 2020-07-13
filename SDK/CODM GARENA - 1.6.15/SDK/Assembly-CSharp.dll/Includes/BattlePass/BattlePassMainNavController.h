#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassMainNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassMainNavController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBattlePassSeasonChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBackgroundTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableCameraClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowCommonAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowCommonAvatarEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BattlePassMainNavController*))(Il2CppBase() + 0x2C152DC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BattlePassMainNavController*))(Il2CppBase() + 0x2C1537C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BattlePassMainNavController*))(Il2CppBase() + 0x2C154A4))(this);
	}
	template <typename T = void> T OnNotifyBattlePassSeasonChange(uintptr_t msg) {
		return ((T (*)(BattlePassMainNavController*, uintptr_t))(Il2CppBase() + 0x2C15560))(this, msg);
	}
	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(BattlePassMainNavController*))(Il2CppBase() + 0x2C15704))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(BattlePassMainNavController*))(Il2CppBase() + 0x2C15884))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(BattlePassMainNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2C15924))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(BattlePassMainNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2C15DD4))(this, data, nextData);
	}
	template <typename T = bool> T IsShowCommonAvatar() {
		return ((T (*)(BattlePassMainNavController*))(Il2CppBase() + 0x2C15EF0))(this);
	}
	template <typename T = bool> T IsShowCommonAvatarEffect() {
		return ((T (*)(BattlePassMainNavController*))(Il2CppBase() + 0x2C15F90))(this);
	}
	template <typename T = void> T FadeOut() {
		return ((T (*)(BattlePassMainNavController*))(Il2CppBase() + 0x2C16030))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BattlePassMainNavController*))(Il2CppBase() + 0x2C160F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BattlePassMainNavController*))(Il2CppBase() + 0x2C160FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BattlePassMainNavController*))(Il2CppBase() + 0x2C16104))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(BattlePassMainNavController*))(Il2CppBase() + 0x2C1610C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(BattlePassMainNavController*))(Il2CppBase() + 0x2C16114))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowCommonAvatar() {
		return ((T (*)(BattlePassMainNavController*))(Il2CppBase() + 0x2C1611C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowCommonAvatarEffect() {
		return ((T (*)(BattlePassMainNavController*))(Il2CppBase() + 0x2C16124))(this);
	}
	template <typename T = void> T xLuaBaseProxy_FadeOut() {
		return ((T (*)(BattlePassMainNavController*))(Il2CppBase() + 0x2C1612C))(this);
	}

};

}
