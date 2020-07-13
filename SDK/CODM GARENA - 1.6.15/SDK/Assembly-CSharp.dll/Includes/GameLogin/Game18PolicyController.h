#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class Game18PolicyController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "Game18PolicyController"));
	}

	template <typename T = int32_t> static T& DEFAUT_INT_VALUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _uiview() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& succeessCallback() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryParseNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsYearOldValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Is18() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Is18() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(Game18PolicyController*))(Il2CppBase() + 0x33D3B64))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(Game18PolicyController*))(Il2CppBase() + 0x33D3C08))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(Game18PolicyController*))(Il2CppBase() + 0x33D3D14))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(Game18PolicyController*))(Il2CppBase() + 0x33D40A0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(Game18PolicyController*))(Il2CppBase() + 0x33D41D4))(this);
	}
	template <typename T = void> T OnConfirmBtnClicked() {
		return ((T (*)(Game18PolicyController*))(Il2CppBase() + 0x33D42F0))(this);
	}
	template <typename T = void> T CheckValid() {
		return ((T (*)(Game18PolicyController*))(Il2CppBase() + 0x33D4394))(this);
	}
	template <typename T = int32_t> T TryParseNumber(Il2CppString* content) {
		return ((T (*)(Game18PolicyController*, Il2CppString*))(Il2CppBase() + 0x33D4AE4))(this, content);
	}
	template <typename T = bool> T IsYearOldValid(int32_t year, int32_t month, int32_t day) {
		return ((T (*)(Game18PolicyController*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x33D4C44))(this, year, month, day);
	}
	template <typename T = bool> T Is18(int32_t year, int32_t month, int32_t day) {
		return ((T (*)(Game18PolicyController*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x33D4D34))(this, year, month, day);
	}
	template <typename T = bool> T Is18_1(uintptr_t date) {
		return ((T (*)(Game18PolicyController*, uintptr_t))(Il2CppBase() + 0x33D5258))(this, date);
	}
	template <typename T = void> static T CheckValidm__0(uintptr_t result, int32_t content) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x33D5434))(0, result, content);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(Game18PolicyController*))(Il2CppBase() + 0x33D54D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(Game18PolicyController*))(Il2CppBase() + 0x33D54D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnShow() {
		return ((T (*)(Game18PolicyController*))(Il2CppBase() + 0x33D54E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(Game18PolicyController*))(Il2CppBase() + 0x33D54E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(Game18PolicyController*))(Il2CppBase() + 0x33D54F0))(this);
	}

};

}
