#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class HttpListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "HttpListener"));
	}

	template <typename T = uintptr_t> T& auth_schemes() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& prefixes() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& auth_selector() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& realm() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& ignore_write_exceptions() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& unsafe_ntlm_auth() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& listening() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = bool> T& disposed() {
		return *(T*)((uintptr_t)this + 0x1B);
	}
	template <typename T = uintptr_t> T& registry() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& ctx_queue() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& wait_queue() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(HttpListener*))(Il2CppBase() + 0x42D82F8))(this);
	}
	template <typename T = uintptr_t> T get_AuthenticationSchemes() {
		return ((T (*)(HttpListener*))(Il2CppBase() + 0x42D83E0))(this);
	}
	template <typename T = uintptr_t> T get_AuthenticationSchemeSelectorDelegate() {
		return ((T (*)(HttpListener*))(Il2CppBase() + 0x42D83E8))(this);
	}
	template <typename T = bool> T get_IgnoreWriteExceptions() {
		return ((T (*)(HttpListener*))(Il2CppBase() + 0x42D47CC))(this);
	}
	template <typename T = bool> T get_IsListening() {
		return ((T (*)(HttpListener*))(Il2CppBase() + 0x42D83F0))(this);
	}
	template <typename T = uintptr_t> T get_Prefixes() {
		return ((T (*)(HttpListener*))(Il2CppBase() + 0x42C6F94))(this);
	}
	template <typename T = Il2CppString*> T get_Realm() {
		return ((T (*)(HttpListener*))(Il2CppBase() + 0x42D84D4))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(HttpListener*))(Il2CppBase() + 0x42D84DC))(this);
	}
	template <typename T = void> T Close_1(bool force) {
		return ((T (*)(HttpListener*, bool))(Il2CppBase() + 0x42D8328))(this, force);
	}
	template <typename T = void> T Cleanup(bool close_existing) {
		return ((T (*)(HttpListener*, bool))(Il2CppBase() + 0x42D8518))(this, close_existing);
	}
	template <typename T = uintptr_t> T BeginGetContext(uintptr_t callback, uintptr_t state) {
		return ((T (*)(HttpListener*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42D926C))(this, callback, state);
	}
	template <typename T = uintptr_t> T EndGetContext(uintptr_t asyncResult) {
		return ((T (*)(HttpListener*, uintptr_t))(Il2CppBase() + 0x42D970C))(this, asyncResult);
	}
	template <typename T = uintptr_t> T SelectAuthenticationScheme(uintptr_t context) {
		return ((T (*)(HttpListener*, uintptr_t))(Il2CppBase() + 0x42D9B98))(this, context);
	}
	template <typename T = void> T Start() {
		return ((T (*)(HttpListener*))(Il2CppBase() + 0x42D9BD8))(this);
	}
	template <typename T = void> T CheckDisposed() {
		return ((T (*)(HttpListener*))(Il2CppBase() + 0x42D83F8))(this);
	}
	template <typename T = uintptr_t> T GetContextFromQueue() {
		return ((T (*)(HttpListener*))(Il2CppBase() + 0x42D9520))(this);
	}
	template <typename T = void> T RegisterContext(uintptr_t context) {
		return ((T (*)(HttpListener*, uintptr_t))(Il2CppBase() + 0x42C4B78))(this, context);
	}
	template <typename T = void> T UnregisterContext(uintptr_t context) {
		return ((T (*)(HttpListener*, uintptr_t))(Il2CppBase() + 0x42C4E40))(this, context);
	}

};

}
