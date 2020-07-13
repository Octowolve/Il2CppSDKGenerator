#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class WebRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "WebRequest"));
	}

	template <typename T = uintptr_t> static T& prefixes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& isDefaultWebProxySet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& defaultWebProxy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> T& authentication_level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& lockobj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T System_Runtime_Serialization_ISerializable_GetObjectData(uintptr_t serializationInfo, uintptr_t streamingContext) {
		return ((T (*)(WebRequest*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E75CE4))(this, serializationInfo, streamingContext);
	}
	template <typename T = void> static T AddDynamicPrefix(Il2CppString* protocol, Il2CppString* implementor) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3E75B24))(0, protocol, implementor);
	}
	template <typename T = uintptr_t> static T GetMustImplement() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E75E6C))(0);
	}
	template <typename T = int64_t> T get_ContentLength() {
		return ((T (*)(WebRequest*))(Il2CppBase() + 0x3E75F0C))(this);
	}
	template <typename T = void> T set_ContentLength(int64_t value) {
		return ((T (*)(WebRequest*, int64_t))(Il2CppBase() + 0x3E75FAC))(this, value);
	}
	template <typename T = void> T set_ContentType(Il2CppString* value) {
		return ((T (*)(WebRequest*, Il2CppString*))(Il2CppBase() + 0x3E7604C))(this, value);
	}
	template <typename T = uintptr_t> T get_Credentials() {
		return ((T (*)(WebRequest*))(Il2CppBase() + 0x3E760EC))(this);
	}
	template <typename T = void> T set_Credentials(uintptr_t value) {
		return ((T (*)(WebRequest*, uintptr_t))(Il2CppBase() + 0x3E7618C))(this, value);
	}
	template <typename T = uintptr_t> T get_Headers() {
		return ((T (*)(WebRequest*))(Il2CppBase() + 0x3E7622C))(this);
	}
	template <typename T = void> T set_Headers(uintptr_t value) {
		return ((T (*)(WebRequest*, uintptr_t))(Il2CppBase() + 0x3E762CC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Method() {
		return ((T (*)(WebRequest*))(Il2CppBase() + 0x3E7636C))(this);
	}
	template <typename T = void> T set_Method(Il2CppString* value) {
		return ((T (*)(WebRequest*, Il2CppString*))(Il2CppBase() + 0x3E7640C))(this, value);
	}
	template <typename T = uintptr_t> T get_Proxy() {
		return ((T (*)(WebRequest*))(Il2CppBase() + 0x3E764AC))(this);
	}
	template <typename T = void> T set_Proxy(uintptr_t value) {
		return ((T (*)(WebRequest*, uintptr_t))(Il2CppBase() + 0x3E7654C))(this, value);
	}
	template <typename T = uintptr_t> T get_RequestUri() {
		return ((T (*)(WebRequest*))(Il2CppBase() + 0x3E765EC))(this);
	}
	template <typename T = void> T set_Timeout(int32_t value) {
		return ((T (*)(WebRequest*, int32_t))(Il2CppBase() + 0x3E7668C))(this, value);
	}
	template <typename T = uintptr_t> static T get_DefaultWebProxy() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E7672C))(0);
	}
	template <typename T = uintptr_t> static T GetDefaultWebProxy() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E76954))(0);
	}
	template <typename T = void> T Abort() {
		return ((T (*)(WebRequest*))(Il2CppBase() + 0x3E7695C))(this);
	}
	template <typename T = uintptr_t> T BeginGetRequestStream(uintptr_t callback, uintptr_t state) {
		return ((T (*)(WebRequest*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E769FC))(this, callback, state);
	}
	template <typename T = uintptr_t> T BeginGetResponse(uintptr_t callback, uintptr_t state) {
		return ((T (*)(WebRequest*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E76A9C))(this, callback, state);
	}
	template <typename T = uintptr_t> static T Create(Il2CppString* requestUriString) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3E76B3C))(0, requestUriString);
	}
	template <typename T = uintptr_t> static T Create_1(uintptr_t requestUri) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3E6565C))(0, requestUri);
	}
	template <typename T = uintptr_t> T EndGetRequestStream(uintptr_t asyncResult) {
		return ((T (*)(WebRequest*, uintptr_t))(Il2CppBase() + 0x3E77020))(this, asyncResult);
	}
	template <typename T = uintptr_t> T EndGetResponse(uintptr_t asyncResult) {
		return ((T (*)(WebRequest*, uintptr_t))(Il2CppBase() + 0x3E770C0))(this, asyncResult);
	}
	template <typename T = uintptr_t> T GetRequestStream() {
		return ((T (*)(WebRequest*))(Il2CppBase() + 0x3E77160))(this);
	}
	template <typename T = uintptr_t> T GetResponse() {
		return ((T (*)(WebRequest*))(Il2CppBase() + 0x3E77200))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t serializationInfo, uintptr_t streamingContext) {
		return ((T (*)(WebRequest*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E772A0))(this, serializationInfo, streamingContext);
	}
	template <typename T = uintptr_t> static T GetCreator(Il2CppString* prefix) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3E76C58))(0, prefix);
	}
	template <typename T = void> static T AddPrefix(Il2CppString* prefix, uintptr_t type) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3E75D78))(0, prefix, type);
	}

};

}
