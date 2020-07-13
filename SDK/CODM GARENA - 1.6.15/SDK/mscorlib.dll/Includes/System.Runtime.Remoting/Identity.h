#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting {

class Identity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting", "Identity"));
	}

	template <typename T = Il2CppString*> T& _objectUri() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _channelSink() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _envoySink() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _clientDynamicProperties() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _serverDynamicProperties() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _objRef() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& _disposed() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T CreateObjRef(uintptr_t requestedType) {
		return ((T (*)(Identity*, uintptr_t))(Il2CppBase() + 0x0))(this, requestedType);
	}
	template <typename T = uintptr_t> T get_ChannelSink() {
		return ((T (*)(Identity*))(Il2CppBase() + 0x4B302F0))(this);
	}
	template <typename T = void> T set_ChannelSink(uintptr_t value) {
		return ((T (*)(Identity*, uintptr_t))(Il2CppBase() + 0x4B302F8))(this, value);
	}
	template <typename T = Il2CppString*> T get_ObjectUri() {
		return ((T (*)(Identity*))(Il2CppBase() + 0x4B30300))(this);
	}
	template <typename T = void> T set_ObjectUri(Il2CppString* value) {
		return ((T (*)(Identity*, Il2CppString*))(Il2CppBase() + 0x4B30308))(this, value);
	}
	template <typename T = bool> T get_IsConnected() {
		return ((T (*)(Identity*))(Il2CppBase() + 0x4B30310))(this);
	}
	template <typename T = bool> T get_Disposed() {
		return ((T (*)(Identity*))(Il2CppBase() + 0x4B30320))(this);
	}
	template <typename T = void> T set_Disposed(bool value) {
		return ((T (*)(Identity*, bool))(Il2CppBase() + 0x4B30328))(this, value);
	}
	template <typename T = uintptr_t> T get_ClientDynamicProperties() {
		return ((T (*)(Identity*))(Il2CppBase() + 0x4B2B63C))(this);
	}
	template <typename T = uintptr_t> T get_ServerDynamicProperties() {
		return ((T (*)(Identity*))(Il2CppBase() + 0x4B2B6D8))(this);
	}

};

}
