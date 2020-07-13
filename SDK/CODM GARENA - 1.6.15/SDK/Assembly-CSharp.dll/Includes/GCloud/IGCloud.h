#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class IGCloud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "IGCloud"));
	}

	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x46AA4CC))(0);
	}
	template <typename T = void> T SetLogger(uintptr_t pri, uintptr_t callback) {
		return ((T (*)(IGCloud*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, pri, callback);
	}
	template <typename T = uintptr_t> T Initialize(uintptr_t initInfo) {
		return ((T (*)(IGCloud*, uintptr_t))(Il2CppBase() + 0x0))(this, initInfo);
	}
	template <typename T = bool> T SwitchPlugin(Il2CppString* pluginName) {
		return ((T (*)(IGCloud*, Il2CppString*))(Il2CppBase() + 0x0))(this, pluginName);
	}
	template <typename T = uintptr_t> T CreateConnector(uintptr_t type, bool manualUpdate, bool autoReconnect, bool autoLogin) {
		return ((T (*)(IGCloud*, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x0))(this, type, manualUpdate, autoReconnect, autoLogin);
	}
	template <typename T = void> T DestroyConnector(uintptr_t Connector) {
		return ((T (*)(IGCloud*, uintptr_t))(Il2CppBase() + 0x0))(this, Connector);
	}
	template <typename T = void> T SetUserInfo(uintptr_t userInfo) {
		return ((T (*)(IGCloud*, uintptr_t))(Il2CppBase() + 0x0))(this, userInfo);
	}

};

}
