#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CommonRulesController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CommonRulesController"));
	}

	template <typename T = uintptr_t> T& commonRulesView() {
		return *(T*)((uintptr_t)this + 0x50);
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
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateViewByConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnKeyPressed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CommonRulesController*))(Il2CppBase() + 0x3DF2914))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CommonRulesController*))(Il2CppBase() + 0x3DF29B8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CommonRulesController*))(Il2CppBase() + 0x3DF2AC4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CommonRulesController*))(Il2CppBase() + 0x3DF2B6C))(this);
	}
	template <typename T = void> T UpdateViewByConfig(uintptr_t csv) {
		return ((T (*)(CommonRulesController*, uintptr_t))(Il2CppBase() + 0x3DF2C14))(this, csv);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(CommonRulesController*))(Il2CppBase() + 0x3DF3024))(this);
	}
	template <typename T = void> T UpdateScrollView() {
		return ((T (*)(CommonRulesController*))(Il2CppBase() + 0x3DF2E80))(this);
	}
	template <typename T = bool> T OnReturnKeyPressed() {
		return ((T (*)(CommonRulesController*))(Il2CppBase() + 0x3DF30D4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CommonRulesController*))(Il2CppBase() + 0x3DF3194))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CommonRulesController*))(Il2CppBase() + 0x3DF319C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CommonRulesController*))(Il2CppBase() + 0x3DF31A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CommonRulesController*))(Il2CppBase() + 0x3DF31AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(CommonRulesController*))(Il2CppBase() + 0x3DF31B4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_OnReturnKeyPressed() {
		return ((T (*)(CommonRulesController*))(Il2CppBase() + 0x3DF31BC))(this);
	}

};

}
