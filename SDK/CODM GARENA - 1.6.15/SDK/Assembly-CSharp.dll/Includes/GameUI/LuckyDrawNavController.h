#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LuckyDrawNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LuckyDrawNavController"));
	}

	template <typename T = uintptr_t> T& _ctrl() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NavigationWillPop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBackgroundTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableCameraClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowCommonAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCloseSizeAdaptor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(LuckyDrawNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F8B020))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(LuckyDrawNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F8B15C))(this, data, nextData);
	}
	template <typename T = void> T NavigationWillPop() {
		return ((T (*)(LuckyDrawNavController*))(Il2CppBase() + 0x1F8B240))(this);
	}
	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(LuckyDrawNavController*))(Il2CppBase() + 0x1F8B2E8))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(LuckyDrawNavController*))(Il2CppBase() + 0x1F8B5A8))(this);
	}
	template <typename T = bool> T IsShowCommonAvatar() {
		return ((T (*)(LuckyDrawNavController*))(Il2CppBase() + 0x1F8B648))(this);
	}
	template <typename T = bool> T IsCloseSizeAdaptor() {
		return ((T (*)(LuckyDrawNavController*))(Il2CppBase() + 0x1F8B6E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_NavigationWillPop() {
		return ((T (*)(LuckyDrawNavController*))(Il2CppBase() + 0x1F8B788))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(LuckyDrawNavController*))(Il2CppBase() + 0x1F8B790))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(LuckyDrawNavController*))(Il2CppBase() + 0x1F8B798))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowCommonAvatar() {
		return ((T (*)(LuckyDrawNavController*))(Il2CppBase() + 0x1F8B7A0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsCloseSizeAdaptor() {
		return ((T (*)(LuckyDrawNavController*))(Il2CppBase() + 0x1F8B7A8))(this);
	}

};

}
