#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class ApolloObjectManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "ApolloObjectManager"));
	}

	template <typename T = Il2CppDictionary<uint64_t, uintptr_t>*> T& dictObjectCollection() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& container() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& removedUpdatableList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& removedReflectibleList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& acceptUpdatedObjectList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearObjects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_onSendMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_onSendResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_onSendResultStruct() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_onSendStruct() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_onSendBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_onSendResultBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_onSendResultStructBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_onSendVoidMethod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAcceptUpdatedObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAcceptUpdatedObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationQuit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x45191B0))(0);
	}
	template <typename T = void> T AddObject(uintptr_t obj) {
		return ((T (*)(ApolloObjectManager*, uintptr_t))(Il2CppBase() + 0x4519518))(this, obj);
	}
	template <typename T = void> T RemoveObject(uintptr_t obj) {
		return ((T (*)(ApolloObjectManager*, uintptr_t))(Il2CppBase() + 0x451CEF4))(this, obj);
	}
	template <typename T = void> T ClearObjects() {
		return ((T (*)(ApolloObjectManager*))(Il2CppBase() + 0x451D178))(this);
	}
	template <typename T = void> static T onSendMessage(uint64_t objectId, Il2CppString* function, Il2CppString* param) {
		return ((T (*)(void *, uint64_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x451A188))(0, objectId, function, param);
	}
	template <typename T = void> static T onSendResult(uint64_t objectId, Il2CppString* function, int32_t result) {
		return ((T (*)(void *, uint64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x451A580))(0, objectId, function, result);
	}
	template <typename T = void> static T onSendResultStruct(uint64_t objectId, Il2CppString* function, uintptr_t resultBuffer, int32_t resultLen) {
		return ((T (*)(void *, uint64_t, Il2CppString*, uintptr_t, int32_t))(Il2CppBase() + 0x451A920))(0, objectId, function, resultBuffer, resultLen);
	}
	template <typename T = void> static T onSendStruct(uint64_t objectId, Il2CppString* function, uintptr_t param) {
		return ((T (*)(void *, uint64_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x451ADDC))(0, objectId, function, param);
	}
	template <typename T = void> static T onSendBuffer(uint64_t objectId, Il2CppString* function, uintptr_t buffer, int32_t len) {
		return ((T (*)(void *, uint64_t, Il2CppString*, uintptr_t, int32_t))(Il2CppBase() + 0x451B17C))(0, objectId, function, buffer, len);
	}
	template <typename T = void> static T onSendResultBuffer(uint64_t objectId, Il2CppString* function, int32_t result, uintptr_t buffer, int32_t len) {
		return ((T (*)(void *, uint64_t, Il2CppString*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x451B58C))(0, objectId, function, result, buffer, len);
	}
	template <typename T = void> static T onSendResultStructBuffer(uint64_t objectId, Il2CppString* function, uintptr_t resultBuffer, int32_t resultLen, uintptr_t buffer, int32_t len) {
		return ((T (*)(void *, uint64_t, Il2CppString*, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x451BAB0))(0, objectId, function, resultBuffer, resultLen, buffer, len);
	}
	template <typename T = void> static T onSendVoidMethod(uint64_t objectId, int32_t methodId) {
		return ((T (*)(void *, uint64_t, int32_t))(Il2CppBase() + 0x451C0D4))(0, objectId, methodId);
	}
	template <typename T = void> static T addPlatformObject(uint64_t objectId, Il2CppString* objName) {
		return ((T (*)(void *, uint64_t, Il2CppString*))(Il2CppBase() + 0x451CDE4))(0, objectId, objName);
	}
	template <typename T = void> static T removePlatformObject(uint64_t objectId) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x451D090))(0, objectId);
	}
	template <typename T = void> static T setApolloSendMessageCallback(uintptr_t callback) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x451C5B8))(0, callback);
	}
	template <typename T = void> static T setApolloSendStructCallback(uintptr_t callback) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x451C6C0))(0, callback);
	}
	template <typename T = void> static T setApolloSendResultCallback(uintptr_t callback) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x451C7C8))(0, callback);
	}
	template <typename T = void> static T setApolloSendResultStructCallback(uintptr_t callback) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x451C8D0))(0, callback);
	}
	template <typename T = void> static T setApolloSendBufferCallback(uintptr_t callback) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x451C9D8))(0, callback);
	}
	template <typename T = void> static T setApolloSendResultBufferCallback(uintptr_t callback) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x451CAE0))(0, callback);
	}
	template <typename T = void> static T setApolloSendResultStructBufferCallback(uintptr_t callback) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x451CBE8))(0, callback);
	}
	template <typename T = void> static T setApolloSendVoidMethodCallback(uintptr_t callback) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x451CCF0))(0, callback);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ApolloObjectManager*))(Il2CppBase() + 0x451D464))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ApolloObjectManager*))(Il2CppBase() + 0x451D52C))(this);
	}
	template <typename T = void> T AddAcceptUpdatedObject(uintptr_t obj) {
		return ((T (*)(ApolloObjectManager*, uintptr_t))(Il2CppBase() + 0x45196F4))(this, obj);
	}
	template <typename T = void> T RemoveAcceptUpdatedObject(uintptr_t obj) {
		return ((T (*)(ApolloObjectManager*, uintptr_t))(Il2CppBase() + 0x451D948))(this, obj);
	}
	template <typename T = void> T OnApplicationQuit() {
		return ((T (*)(ApolloObjectManager*))(Il2CppBase() + 0x451DA9C))(this);
	}
	template <typename T = void> T OnApplicationPause(bool pauseStatus) {
		return ((T (*)(ApolloObjectManager*, bool))(Il2CppBase() + 0x451DD28))(this, pauseStatus);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ApolloObjectManager*))(Il2CppBase() + 0x451DE9C))(this);
	}
	template <typename T = void> static T gcloud_quit() {
		return ((T (*)(void *))(Il2CppBase() + 0x451DC58))(0);
	}

};

}
