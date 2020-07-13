#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UsingTheirs.RemoteInspector {

class ServerHttpJsonPost
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UsingTheirs.RemoteInspector", "ServerHttpJsonPost"));
	}

	template <typename T = int16_t> T& listenPort() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& handlers() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& httpListener() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& mainThreadJobs() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryRunAMainThreadJob() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendMainThreadJob() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ListenerCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T AddHandler(Il2CppString* urlPath, uintptr_t handler) {
		return ((T (*)(ServerHttpJsonPost*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x48828BC))(this, urlPath, handler);
	}
	template <typename T = void> T RemoveHandler(Il2CppString* urlPath) {
		return ((T (*)(ServerHttpJsonPost*, Il2CppString*))(Il2CppBase() + 0x48829B8))(this, urlPath);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ServerHttpJsonPost*))(Il2CppBase() + 0x4882A98))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ServerHttpJsonPost*))(Il2CppBase() + 0x4882F30))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ServerHttpJsonPost*))(Il2CppBase() + 0x4882FD4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ServerHttpJsonPost*))(Il2CppBase() + 0x488316C))(this);
	}
	template <typename T = void> T TryRunAMainThreadJob() {
		return ((T (*)(ServerHttpJsonPost*))(Il2CppBase() + 0x4883210))(this);
	}
	template <typename T = void> T SendMainThreadJob(uintptr_t job) {
		return ((T (*)(ServerHttpJsonPost*, uintptr_t))(Il2CppBase() + 0x48833F0))(this, job);
	}
	template <typename T = void> T ListenerCallback(uintptr_t result) {
		return ((T (*)(ServerHttpJsonPost*, uintptr_t))(Il2CppBase() + 0x4883534))(this, result);
	}
	template <typename T = void> T HandleRequest(uintptr_t req, uintptr_t res, uintptr_t handler) {
		return ((T (*)(ServerHttpJsonPost*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4883964))(this, req, res, handler);
	}
	template <typename T = void> T HandleError(uintptr_t req, uintptr_t res) {
		return ((T (*)(ServerHttpJsonPost*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4883B3C))(this, req, res);
	}

};

}
