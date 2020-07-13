#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RankGame {

class RankNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RankGame", "RankNavController"));
	}

	template <typename T = uintptr_t> T& m_rankController() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_IsUseRankLight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBackgroundTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableCameraClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RankNavController*))(Il2CppBase() + 0x3814368))(this);
	}
	template <typename T = bool> T IsUseRankLight() {
		return ((T (*)(RankNavController*))(Il2CppBase() + 0x3814408))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(RankNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x38144A8))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(RankNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3814714))(this, data, nextData);
	}
	template <typename T = bool> T IsShowAvatar() {
		return ((T (*)(RankNavController*))(Il2CppBase() + 0x3814908))(this);
	}
	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(RankNavController*))(Il2CppBase() + 0x38149FC))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(RankNavController*))(Il2CppBase() + 0x3814AB4))(this);
	}
	template <typename T = void> T FadeOut() {
		return ((T (*)(RankNavController*))(Il2CppBase() + 0x3814B54))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RankNavController*))(Il2CppBase() + 0x3814C18))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsUseRankLight() {
		return ((T (*)(RankNavController*))(Il2CppBase() + 0x3814C20))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowAvatar() {
		return ((T (*)(RankNavController*))(Il2CppBase() + 0x3814C28))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(RankNavController*))(Il2CppBase() + 0x3814C30))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(RankNavController*))(Il2CppBase() + 0x3814C38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_FadeOut() {
		return ((T (*)(RankNavController*))(Il2CppBase() + 0x3814C40))(this);
	}

};

}
