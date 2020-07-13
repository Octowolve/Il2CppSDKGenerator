#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class GCloud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "GCloud"));
	}

	template <typename T = uintptr_t> T& logEvent() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApolloLogDelegate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_logEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_logEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLogger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Finalize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchPlugin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateConnector() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyConnector() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUserInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_setEnginePluginPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> static T OnApolloLogDelegate(uintptr_t pri, uintptr_t msg) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x452E444))(0, pri, msg);
	}
	template <typename T = void> T add_logEvent(uintptr_t value) {
		return ((T (*)(GCloud*, uintptr_t))(Il2CppBase() + 0x452E730))(this, value);
	}
	template <typename T = void> T remove_logEvent(uintptr_t value) {
		return ((T (*)(GCloud*, uintptr_t))(Il2CppBase() + 0x452E928))(this, value);
	}
	template <typename T = void> T SetLogger(uintptr_t pri, uintptr_t callback) {
		return ((T (*)(GCloud*, uintptr_t, uintptr_t))(Il2CppBase() + 0x452EB20))(this, pri, callback);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(GCloud*))(Il2CppBase() + 0x452EED8))(this);
	}
	template <typename T = uintptr_t> T Initialize(uintptr_t initInfo) {
		return ((T (*)(GCloud*, uintptr_t))(Il2CppBase() + 0x452EF80))(this, initInfo);
	}
	template <typename T = bool> T SwitchPlugin(Il2CppString* pluginName) {
		return ((T (*)(GCloud*, Il2CppString*))(Il2CppBase() + 0x452F308))(this, pluginName);
	}
	template <typename T = uintptr_t> T CreateConnector(uintptr_t type, bool manualUpdate, bool autoReconnect, bool autoLogin) {
		return ((T (*)(GCloud*, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x452F4C4))(this, type, manualUpdate, autoReconnect, autoLogin);
	}
	template <typename T = void> T DestroyConnector(uintptr_t connector) {
		return ((T (*)(GCloud*, uintptr_t))(Il2CppBase() + 0x452F8B4))(this, connector);
	}
	template <typename T = void> T SetUserInfo(uintptr_t userInfo) {
		return ((T (*)(GCloud*, uintptr_t))(Il2CppBase() + 0x452F9B0))(this, userInfo);
	}
	template <typename T = void> T setEnginePluginPath() {
		return ((T (*)(GCloud*))(Il2CppBase() + 0x452FB94))(this);
	}
	template <typename T = void> static T gcloud_setLogLevel(uintptr_t pri) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x452FC2C))(0, pri);
	}
	template <typename T = int32_t> static T gcloud_init(Il2CppArray<uintptr_t>* data, int32_t len) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x452F218))(0, data, len);
	}
	template <typename T = bool> static T gcloud_switchplugin(Il2CppString* pluginName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x452F3B4))(0, pluginName);
	}
	template <typename T = void> static T gcloud_setApolloLogger(uintptr_t pri, uintptr_t callback) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x452EDD8))(0, pri, callback);
	}
	template <typename T = void> static T gcloud_setUserInfo(Il2CppArray<uintptr_t>* data, int32_t len) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x452FAA4))(0, data, len);
	}
	template <typename T = void> static T gcloud_set_engine_plugin_path(Il2CppArray<uintptr_t>* path, int32_t len) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x452FD0C))(0, path, len);
	}
	template <typename T = void> T xLuaBaseProxy_Finalize() {
		return ((T (*)(GCloud*))(Il2CppBase() + 0x452FDFC))(this);
	}

};

}
