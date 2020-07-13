#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CodmSingleReChargeNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CodmSingleReChargeNavController"));
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

	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(CodmSingleReChargeNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3DEE82C))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(CodmSingleReChargeNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3DEE968))(this, data, nextData);
	}
	template <typename T = void> T NavigationWillPop() {
		return ((T (*)(CodmSingleReChargeNavController*))(Il2CppBase() + 0x3DEEA4C))(this);
	}
	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(CodmSingleReChargeNavController*))(Il2CppBase() + 0x3DEEAF4))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(CodmSingleReChargeNavController*))(Il2CppBase() + 0x3DEEBAC))(this);
	}
	template <typename T = bool> T IsShowCommonAvatar() {
		return ((T (*)(CodmSingleReChargeNavController*))(Il2CppBase() + 0x3DEEC4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_NavigationWillPop() {
		return ((T (*)(CodmSingleReChargeNavController*))(Il2CppBase() + 0x3DEECEC))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(CodmSingleReChargeNavController*))(Il2CppBase() + 0x3DEECF4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(CodmSingleReChargeNavController*))(Il2CppBase() + 0x3DEECFC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowCommonAvatar() {
		return ((T (*)(CodmSingleReChargeNavController*))(Il2CppBase() + 0x3DEED04))(this);
	}

};

}
