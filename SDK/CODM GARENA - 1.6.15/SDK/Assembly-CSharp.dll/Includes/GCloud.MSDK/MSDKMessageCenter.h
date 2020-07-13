#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKMessageCenter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKMessageCenter"));
	}

	template <typename T = Il2CppString*> static T& wakeUpLoginRet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& queueLock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& resultQueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWakeLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMSDKMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMSDKRet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWakeUpLoginRet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearWakeUpLoginRet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParaseDelegate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SynchronousDelegate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = void> T OnWakeLogin(Il2CppString* result) {
		return ((T (*)(MSDKMessageCenter*, Il2CppString*))(Il2CppBase() + 0x46D5590))(this, result);
	}
	template <typename T = void> T OnMSDKMessage(Il2CppString* result) {
		return ((T (*)(MSDKMessageCenter*, Il2CppString*))(Il2CppBase() + 0x46D5858))(this, result);
	}
	template <typename T = Il2CppString*> static T OnMSDKRet(int32_t methodId, Il2CppString* ret) {
		return ((T (*)(void *, int32_t, Il2CppString*))(Il2CppBase() + 0x46D37E8))(0, methodId, ret);
	}
	template <typename T = void> static T setUnityCallback(uintptr_t eventHandler) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x46D661C))(0, eventHandler);
	}
	template <typename T = uintptr_t> T GetWakeUpLoginRet() {
		return ((T (*)(MSDKMessageCenter*))(Il2CppBase() + 0x46D4D3C))(this);
	}
	template <typename T = void> T ClearWakeUpLoginRet() {
		return ((T (*)(MSDKMessageCenter*))(Il2CppBase() + 0x46D5078))(this);
	}
	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x46B9160))(0);
	}
	template <typename T = void> T Init() {
		return ((T (*)(MSDKMessageCenter*))(Il2CppBase() + 0x46B94E8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(MSDKMessageCenter*))(Il2CppBase() + 0x46D6720))(this);
	}
	template <typename T = void> static T ParaseDelegate(uintptr_t arg) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x46D5C94))(0, arg);
	}
	template <typename T = Il2CppString*> static T SynchronousDelegate(uintptr_t arg) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x46D6240))(0, arg);
	}

};

}
