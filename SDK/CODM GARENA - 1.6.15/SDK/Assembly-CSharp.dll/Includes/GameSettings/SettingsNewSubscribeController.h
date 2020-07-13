#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsNewSubscribeController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsNewSubscribeController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& DS() {
		return *(T*)((uintptr_t)this + 0x40);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitOrUpdateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSubscribeValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestWeeklySubscribe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestVersionSubscribe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestActivitySubscribe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSubscribeResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTabInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIPanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitTabsFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettingsNewSubscribeController*))(Il2CppBase() + 0x289DAD8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettingsNewSubscribeController*))(Il2CppBase() + 0x289DB7C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettingsNewSubscribeController*))(Il2CppBase() + 0x289DE44))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettingsNewSubscribeController*))(Il2CppBase() + 0x289E1FC))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(SettingsNewSubscribeController*))(Il2CppBase() + 0x289E560))(this);
	}
	template <typename T = void> T InitOrUpdateInfo() {
		return ((T (*)(SettingsNewSubscribeController*))(Il2CppBase() + 0x289DC90))(this);
	}
	template <typename T = bool> T CheckSubscribeValid() {
		return ((T (*)(SettingsNewSubscribeController*))(Il2CppBase() + 0x289EB30))(this);
	}
	template <typename T = void> T RequestWeeklySubscribe() {
		return ((T (*)(SettingsNewSubscribeController*))(Il2CppBase() + 0x289EBD0))(this);
	}
	template <typename T = void> T RequestVersionSubscribe() {
		return ((T (*)(SettingsNewSubscribeController*))(Il2CppBase() + 0x289EFC4))(this);
	}
	template <typename T = void> T RequestActivitySubscribe() {
		return ((T (*)(SettingsNewSubscribeController*))(Il2CppBase() + 0x289F3B8))(this);
	}
	template <typename T = void> T OnSubscribeResponse(uintptr_t Msg) {
		return ((T (*)(SettingsNewSubscribeController*, uintptr_t))(Il2CppBase() + 0x289F7AC))(this, Msg);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetTabInfoList() {
		return ((T (*)(SettingsNewSubscribeController*))(Il2CppBase() + 0x289FAD8))(this);
	}
	template <typename T = void> T SetUIPanelDepth(int32_t depth) {
		return ((T (*)(SettingsNewSubscribeController*, int32_t))(Il2CppBase() + 0x289FB78))(this, depth);
	}
	template <typename T = void> T OnInitTabsFinish(uintptr_t message) {
		return ((T (*)(SettingsNewSubscribeController*, uintptr_t))(Il2CppBase() + 0x289FCB4))(this, message);
	}
	template <typename T = void> T RequestWeeklySubscribem__0(uintptr_t result, int32_t userContext) {
		return ((T (*)(SettingsNewSubscribeController*, uintptr_t, int32_t))(Il2CppBase() + 0x289FE58))(this, result, userContext);
	}
	template <typename T = void> T RequestVersionSubscribem__1(uintptr_t result, int32_t userContext) {
		return ((T (*)(SettingsNewSubscribeController*, uintptr_t, int32_t))(Il2CppBase() + 0x289FFC0))(this, result, userContext);
	}
	template <typename T = void> T RequestActivitySubscribem__2(uintptr_t result, int32_t userContext) {
		return ((T (*)(SettingsNewSubscribeController*, uintptr_t, int32_t))(Il2CppBase() + 0x28A0128))(this, result, userContext);
	}
	template <typename T = void> static T OnSubscribeResponsem__3(uintptr_t result, int32_t userContext) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x28A0290))(0, result, userContext);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettingsNewSubscribeController*))(Il2CppBase() + 0x28A0294))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettingsNewSubscribeController*))(Il2CppBase() + 0x28A029C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettingsNewSubscribeController*))(Il2CppBase() + 0x28A02A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettingsNewSubscribeController*))(Il2CppBase() + 0x28A02AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(SettingsNewSubscribeController*))(Il2CppBase() + 0x28A02B4))(this);
	}

};

}
