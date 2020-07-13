#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net.Sockets {

class Socket
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net.Sockets", "Socket"));
	}

	template <typename T = uintptr_t> T& readQ() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& writeQ() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& islistening() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& useoverlappedIO() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = int32_t> T& MinListenPort() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& MaxListenPort() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ipv4Supported() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ipv6Supported() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> T& linger_timeout() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& socket() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& address_family() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& socket_type() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& protocol_type() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& blocking() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& blocking_thread() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& isbound() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& current_bind_count() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> T& max_bind_count() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& connected() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& closed() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = bool> T& disposed() {
		return *(T*)((uintptr_t)this + 0x42);
	}
	template <typename T = uintptr_t> T& seed_endpoint() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& check_socket_policy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = int32_t> static T Available_internal(uintptr_t socket, uintptr_t* error) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3E5CF60))(0, socket, error);
	}
	template <typename T = int32_t> T get_Available() {
		return ((T (*)(Socket*))(Il2CppBase() + 0x3E5CF6C))(this);
	}
	template <typename T = void> T set_DontFragment(bool value) {
		return ((T (*)(Socket*, bool))(Il2CppBase() + 0x3E4D024))(this, value);
	}
	template <typename T = uintptr_t> static T LocalEndPoint_internal(uintptr_t socket, uintptr_t* error) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3E5D288))(0, socket, error);
	}
	template <typename T = uintptr_t> T get_LocalEndPoint() {
		return ((T (*)(Socket*))(Il2CppBase() + 0x3E5D294))(this);
	}
	template <typename T = uintptr_t> T get_SocketType() {
		return ((T (*)(Socket*))(Il2CppBase() + 0x3E5A590))(this);
	}
	template <typename T = int32_t> T get_SendTimeout() {
		return ((T (*)(Socket*))(Il2CppBase() + 0x3E5A93C))(this);
	}
	template <typename T = void> T set_SendTimeout(int32_t value) {
		return ((T (*)(Socket*, int32_t))(Il2CppBase() + 0x3E4D320))(this, value);
	}
	template <typename T = int32_t> T get_ReceiveTimeout() {
		return ((T (*)(Socket*))(Il2CppBase() + 0x3E5A7F8))(this);
	}
	template <typename T = void> T set_ReceiveTimeout(int32_t value) {
		return ((T (*)(Socket*, int32_t))(Il2CppBase() + 0x3E4D498))(this, value);
	}
	template <typename T = uintptr_t> static T Accept_internal(uintptr_t sock, uintptr_t* error, bool blocking) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, bool))(Il2CppBase() + 0x3E5D6AC))(0, sock, error, blocking);
	}
	template <typename T = uintptr_t> T Accept() {
		return ((T (*)(Socket*))(Il2CppBase() + 0x3E5D6BC))(this);
	}
	template <typename T = uintptr_t> T BeginAccept(uintptr_t callback, uintptr_t state) {
		return ((T (*)(Socket*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E5DC08))(this, callback, state);
	}
	template <typename T = uintptr_t> T BeginReceive(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size, uintptr_t socket_flags, uintptr_t callback, uintptr_t state) {
		return ((T (*)(Socket*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E5ADC8))(this, buffer, offset, size, socket_flags, callback, state);
	}
	template <typename T = uintptr_t> T BeginSend(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size, uintptr_t socket_flags, uintptr_t callback, uintptr_t state) {
		return ((T (*)(Socket*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E5B438))(this, buffer, offset, size, socket_flags, callback, state);
	}
	template <typename T = void> static T Bind_internal(uintptr_t sock, uintptr_t sa, uintptr_t* error) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3E5DED4))(0, sock, sa, error);
	}
	template <typename T = void> T Bind(uintptr_t local_end) {
		return ((T (*)(Socket*, uintptr_t))(Il2CppBase() + 0x3E54C4C))(this, local_end);
	}
	template <typename T = uintptr_t> T EndAccept(uintptr_t result) {
		return ((T (*)(Socket*, uintptr_t))(Il2CppBase() + 0x3E5DEE4))(this, result);
	}
	template <typename T = uintptr_t> T EndAccept_1(Il2CppArray<uintptr_t>** buffer, uintptr_t* bytesTransferred, uintptr_t asyncResult) {
		return ((T (*)(Socket*, Il2CppArray<uintptr_t>**, uintptr_t*, uintptr_t))(Il2CppBase() + 0x3E5DF14))(this, buffer, bytesTransferred, asyncResult);
	}
	template <typename T = int32_t> T EndReceive(uintptr_t result) {
		return ((T (*)(Socket*, uintptr_t))(Il2CppBase() + 0x3E5BC1C))(this, result);
	}
	template <typename T = int32_t> T EndReceive_1(uintptr_t asyncResult, uintptr_t* errorCode) {
		return ((T (*)(Socket*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3E5E464))(this, asyncResult, errorCode);
	}
	template <typename T = int32_t> T EndSend(uintptr_t result) {
		return ((T (*)(Socket*, uintptr_t))(Il2CppBase() + 0x3E5BE24))(this, result);
	}
	template <typename T = int32_t> T EndSend_1(uintptr_t asyncResult, uintptr_t* errorCode) {
		return ((T (*)(Socket*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3E5E870))(this, asyncResult, errorCode);
	}
	template <typename T = uintptr_t> T InvalidAsyncOp(Il2CppString* method) {
		return ((T (*)(Socket*, Il2CppString*))(Il2CppBase() + 0x3E5E268))(this, method);
	}
	template <typename T = void> static T Listen_internal(uintptr_t sock, int32_t backlog, uintptr_t* error) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0x3E5EBC0))(0, sock, backlog, error);
	}
	template <typename T = void> T Listen(int32_t backlog) {
		return ((T (*)(Socket*, int32_t))(Il2CppBase() + 0x3E5EBD0))(this, backlog);
	}
	template <typename T = bool> T Poll(int32_t time_us, uintptr_t mode) {
		return ((T (*)(Socket*, int32_t, uintptr_t))(Il2CppBase() + 0x3E5EE8C))(this, time_us, mode);
	}
	template <typename T = int32_t> T Receive(Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(Socket*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3E5F0EC))(this, buffer);
	}
	template <typename T = int32_t> T Receive_1(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size, uintptr_t flags) {
		return ((T (*)(Socket*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3E5C0D0))(this, buffer, offset, size, flags);
	}
	template <typename T = int32_t> static T RecvFrom_internal(uintptr_t sock, Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count, uintptr_t flags, uintptr_t sockaddr, uintptr_t* error) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3E5F4F4))(0, sock, buffer, offset, count, flags, sockaddr, error);
	}
	template <typename T = int32_t> T ReceiveFrom_nochecks(Il2CppArray<uintptr_t>* buf, int32_t offset, int32_t size, uintptr_t flags, uintptr_t remote_end) {
		return ((T (*)(Socket*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E5F534))(this, buf, offset, size, flags, remote_end);
	}
	template <typename T = int32_t> T ReceiveFrom_nochecks_exc(Il2CppArray<uintptr_t>* buf, int32_t offset, int32_t size, uintptr_t flags, uintptr_t remote_end, bool throwOnError, uintptr_t* error) {
		return ((T (*)(Socket*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t, bool, uintptr_t*))(Il2CppBase() + 0x3E4DBC0))(this, buf, offset, size, flags, remote_end, throwOnError, error);
	}
	template <typename T = int32_t> T Send(Il2CppArray<uintptr_t>* buf, int32_t offset, int32_t size, uintptr_t flags) {
		return ((T (*)(Socket*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3E5C744))(this, buf, offset, size, flags);
	}
	template <typename T = int32_t> T SendTo(Il2CppArray<uintptr_t>* buffer, int32_t size, uintptr_t flags, uintptr_t remote_end) {
		return ((T (*)(Socket*, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E4D9C4))(this, buffer, size, flags, remote_end);
	}
	template <typename T = int32_t> static T SendTo_internal_real(uintptr_t sock, Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count, uintptr_t flags, uintptr_t sa, uintptr_t* error) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3E5FD34))(0, sock, buffer, offset, count, flags, sa, error);
	}
	template <typename T = int32_t> static T SendTo_internal(uintptr_t sock, Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count, uintptr_t flags, uintptr_t sa, uintptr_t* error) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3E5FD74))(0, sock, buffer, offset, count, flags, sa, error);
	}
	template <typename T = int32_t> T SendTo_nochecks(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size, uintptr_t flags, uintptr_t remote_end) {
		return ((T (*)(Socket*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E5FBBC))(this, buffer, offset, size, flags, remote_end);
	}
	template <typename T = void> static T CheckProtocolSupport() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E5CB34))(0);
	}
	template <typename T = bool> static T get_SupportsIPv4() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E5FF88))(0);
	}
	template <typename T = bool> static T get_SupportsIPv6() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E60044))(0);
	}
	template <typename T = uintptr_t> T Socket_internal(uintptr_t family, uintptr_t type, uintptr_t proto, uintptr_t* error) {
		return ((T (*)(Socket*, uintptr_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3E5CA94))(this, family, type, proto, error);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(Socket*))(Il2CppBase() + 0x3E60100))(this);
	}
	template <typename T = uintptr_t> T get_AddressFamily() {
		return ((T (*)(Socket*))(Il2CppBase() + 0x3E5DA64))(this);
	}
	template <typename T = void> static T Blocking_internal(uintptr_t socket, bool block, uintptr_t* error) {
		return ((T (*)(void *, uintptr_t, bool, uintptr_t*))(Il2CppBase() + 0x3E6016C))(0, socket, block, error);
	}
	template <typename T = bool> T get_Blocking() {
		return ((T (*)(Socket*))(Il2CppBase() + 0x3E5A5A0))(this);
	}
	template <typename T = void> T set_Blocking(bool value) {
		return ((T (*)(Socket*, bool))(Il2CppBase() + 0x3E5DA74))(this, value);
	}
	template <typename T = bool> T get_Connected() {
		return ((T (*)(Socket*))(Il2CppBase() + 0x3E5A598))(this);
	}
	template <typename T = uintptr_t> T get_ProtocolType() {
		return ((T (*)(Socket*))(Il2CppBase() + 0x3E5DA6C))(this);
	}
	template <typename T = void> T set_NoDelay(bool value) {
		return ((T (*)(Socket*, bool))(Il2CppBase() + 0x3E6017C))(this, value);
	}
	template <typename T = int32_t> T get_ReceiveBufferSize() {
		return ((T (*)(Socket*))(Il2CppBase() + 0x3E60288))(this);
	}
	template <typename T = void> T set_ReceiveBufferSize(int32_t value) {
		return ((T (*)(Socket*, int32_t))(Il2CppBase() + 0x3E603A4))(this, value);
	}
	template <typename T = void> T set_SendBufferSize(int32_t value) {
		return ((T (*)(Socket*, int32_t))(Il2CppBase() + 0x3E4D854))(this, value);
	}
	template <typename T = void> T set_Ttl(int16_t value) {
		return ((T (*)(Socket*, int16_t))(Il2CppBase() + 0x3E4D1A4))(this, value);
	}
	template <typename T = void> T Linger(uintptr_t handle) {
		return ((T (*)(Socket*, uintptr_t))(Il2CppBase() + 0x3E60514))(this, handle);
	}
	template <typename T = void> T Dispose(bool explicitDisposing) {
		return ((T (*)(Socket*, bool))(Il2CppBase() + 0x3E60758))(this, explicitDisposing);
	}
	template <typename T = void> T Dispose_1() {
		return ((T (*)(Socket*))(Il2CppBase() + 0x3E60994))(this);
	}
	template <typename T = void> static T Close_internal(uintptr_t socket, uintptr_t* error) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3E60988))(0, socket, error);
	}
	template <typename T = void> T Close() {
		return ((T (*)(Socket*))(Il2CppBase() + 0x3E5B958))(this);
	}
	template <typename T = void> static T Connect_internal_real(uintptr_t sock, uintptr_t sa, uintptr_t* error) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3E609CC))(0, sock, sa, error);
	}
	template <typename T = void> static T Connect_internal(uintptr_t sock, uintptr_t sa, uintptr_t* error, bool requireSocketPolicyFile) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*, bool))(Il2CppBase() + 0x3E609DC))(0, sock, sa, error, requireSocketPolicyFile);
	}
	template <typename T = bool> static T CheckEndPoint(uintptr_t sa) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3E5F570))(0, sa);
	}
	template <typename T = uintptr_t> static T GetUnityCrossDomainHelperMethod(Il2CppString* methodname) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3E60B2C))(0, methodname);
	}
	template <typename T = void> T Connect(uintptr_t remoteEP) {
		return ((T (*)(Socket*, uintptr_t))(Il2CppBase() + 0x3E60D1C))(this, remoteEP);
	}
	template <typename T = void> T Connect_1(uintptr_t remoteEP, bool requireSocketPolicy) {
		return ((T (*)(Socket*, uintptr_t, bool))(Il2CppBase() + 0x3E60D24))(this, remoteEP, requireSocketPolicy);
	}
	template <typename T = bool> static T Poll_internal(uintptr_t socket, uintptr_t mode, int32_t timeout, uintptr_t* error) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0x3E5F0D4))(0, socket, mode, timeout, error);
	}
	template <typename T = int32_t> static T Receive_internal(uintptr_t sock, Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count, uintptr_t flags, uintptr_t* error) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3E61274))(0, sock, buffer, offset, count, flags, error);
	}
	template <typename T = int32_t> T Receive_nochecks(Il2CppArray<uintptr_t>* buf, int32_t offset, int32_t size, uintptr_t flags, uintptr_t* error) {
		return ((T (*)(Socket*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3E5F2A0))(this, buf, offset, size, flags, error);
	}
	template <typename T = void> static T GetSocketOption_obj_internal(uintptr_t socket, uintptr_t level, uintptr_t name, uintptr_t* obj_val, uintptr_t* error) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3E612AC))(0, socket, level, name, obj_val, error);
	}
	template <typename T = int32_t> static T Send_internal(uintptr_t sock, Il2CppArray<uintptr_t>* buf, int32_t offset, int32_t count, uintptr_t flags, uintptr_t* error) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3E612E0))(0, sock, buf, offset, count, flags, error);
	}
	template <typename T = int32_t> T Send_nochecks(Il2CppArray<uintptr_t>* buf, int32_t offset, int32_t size, uintptr_t flags, uintptr_t* error) {
		return ((T (*)(Socket*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3E5FA9C))(this, buf, offset, size, flags, error);
	}
	template <typename T = uintptr_t> T GetSocketOption(uintptr_t optionLevel, uintptr_t optionName) {
		return ((T (*)(Socket*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E5D44C))(this, optionLevel, optionName);
	}
	template <typename T = void> static T Shutdown_internal(uintptr_t socket, uintptr_t how, uintptr_t* error) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3E60708))(0, socket, how, error);
	}
	template <typename T = void> T Shutdown(uintptr_t how) {
		return ((T (*)(Socket*, uintptr_t))(Il2CppBase() + 0x3E61318))(this, how);
	}
	template <typename T = void> static T SetSocketOption_internal(uintptr_t socket, uintptr_t level, uintptr_t name, uintptr_t obj_val, Il2CppArray<uintptr_t>* byte_val, int32_t int_val, uintptr_t* error) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t*))(Il2CppBase() + 0x3E60718))(0, socket, level, name, obj_val, byte_val, int_val, error);
	}
	template <typename T = void> T SetSocketOption(uintptr_t optionLevel, uintptr_t optionName, int32_t optionValue) {
		return ((T (*)(Socket*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3E5D0E8))(this, optionLevel, optionName, optionValue);
	}
	template <typename T = void> T ThrowIfUpd() {
		return ((T (*)(Socket*))(Il2CppBase() + 0x3E60284))(this);
	}

};

}
