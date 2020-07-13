#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LuckyValueDrawNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LuckyValueDrawNavController"));
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
		return ((T (*)(LuckyValueDrawNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F9E54C))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(LuckyValueDrawNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F9E688))(this, data, nextData);
	}
	template <typename T = void> T NavigationWillPop() {
		return ((T (*)(LuckyValueDrawNavController*))(Il2CppBase() + 0x1F9E76C))(this);
	}
	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(LuckyValueDrawNavController*))(Il2CppBase() + 0x1F9E814))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(LuckyValueDrawNavController*))(Il2CppBase() + 0x1F9EAD4))(this);
	}
	template <typename T = bool> T IsShowCommonAvatar() {
		return ((T (*)(LuckyValueDrawNavController*))(Il2CppBase() + 0x1F9EB74))(this);
	}
	template <typename T = bool> T IsCloseSizeAdaptor() {
		return ((T (*)(LuckyValueDrawNavController*))(Il2CppBase() + 0x1F9EC14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_NavigationWillPop() {
		return ((T (*)(LuckyValueDrawNavController*))(Il2CppBase() + 0x1F9ECB4))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(LuckyValueDrawNavController*))(Il2CppBase() + 0x1F9ECBC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(LuckyValueDrawNavController*))(Il2CppBase() + 0x1F9ECC4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowCommonAvatar() {
		return ((T (*)(LuckyValueDrawNavController*))(Il2CppBase() + 0x1F9ECCC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsCloseSizeAdaptor() {
		return ((T (*)(LuckyValueDrawNavController*))(Il2CppBase() + 0x1F9ECD4))(this);
	}

};

}
