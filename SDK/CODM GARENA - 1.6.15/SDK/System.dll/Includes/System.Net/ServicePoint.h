#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class ServicePoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "ServicePoint"));
	}

	template <typename T = uintptr_t> T& uri() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& connectionLimit() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& maxIdleTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& currentConnections() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& idleSince() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& protocolVersion() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& certificate() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& clientCertificate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& host() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& usesProxy() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& groups() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& sendContinue() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& useConnect() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = uintptr_t> T& locker() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& hostE() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& useNagle() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& endPointCallback() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = uintptr_t> T get_Address() {
		return ((T (*)(ServicePoint*))(Il2CppBase() + 0x3E53A00))(this);
	}
	template <typename T = int32_t> T get_ConnectionLimit() {
		return ((T (*)(ServicePoint*))(Il2CppBase() + 0x3E53A08))(this);
	}
	template <typename T = int32_t> T get_CurrentConnections() {
		return ((T (*)(ServicePoint*))(Il2CppBase() + 0x3E53A10))(this);
	}
	template <typename T = uintptr_t> T get_IdleSince() {
		return ((T (*)(ServicePoint*))(Il2CppBase() + 0x3E53A18))(this);
	}
	template <typename T = void> T set_IdleSince(uintptr_t value) {
		return ((T (*)(ServicePoint*, uintptr_t))(Il2CppBase() + 0x3E53A28))(this, value);
	}
	template <typename T = uintptr_t> T get_ProtocolVersion() {
		return ((T (*)(ServicePoint*))(Il2CppBase() + 0x3E53A7C))(this);
	}
	template <typename T = void> T set_Expect100Continue(bool value) {
		return ((T (*)(ServicePoint*, bool))(Il2CppBase() + 0x3E53A84))(this, value);
	}
	template <typename T = bool> T get_UseNagleAlgorithm() {
		return ((T (*)(ServicePoint*))(Il2CppBase() + 0x3E53A94))(this);
	}
	template <typename T = void> T set_UseNagleAlgorithm(bool value) {
		return ((T (*)(ServicePoint*, bool))(Il2CppBase() + 0x3E53A9C))(this, value);
	}
	template <typename T = bool> T get_SendContinue() {
		return ((T (*)(ServicePoint*))(Il2CppBase() + 0x3E53AA4))(this);
	}
	template <typename T = void> T set_SendContinue(bool value) {
		return ((T (*)(ServicePoint*, bool))(Il2CppBase() + 0x3E53A8C))(this, value);
	}
	template <typename T = bool> T get_UsesProxy() {
		return ((T (*)(ServicePoint*))(Il2CppBase() + 0x3E53BA0))(this);
	}
	template <typename T = void> T set_UsesProxy(bool value) {
		return ((T (*)(ServicePoint*, bool))(Il2CppBase() + 0x3E53BA8))(this, value);
	}
	template <typename T = bool> T get_UseConnect() {
		return ((T (*)(ServicePoint*))(Il2CppBase() + 0x3E53BB0))(this);
	}
	template <typename T = void> T set_UseConnect(bool value) {
		return ((T (*)(ServicePoint*, bool))(Il2CppBase() + 0x3E53BB8))(this, value);
	}
	template <typename T = bool> T get_AvailableForRecycling() {
		return ((T (*)(ServicePoint*))(Il2CppBase() + 0x3E53BC0))(this);
	}
	template <typename T = uintptr_t> T get_Groups() {
		return ((T (*)(ServicePoint*))(Il2CppBase() + 0x3E53CF4))(this);
	}
	template <typename T = uintptr_t> T get_HostEntry() {
		return ((T (*)(ServicePoint*))(Il2CppBase() + 0x3E53D94))(this);
	}
	template <typename T = void> T SetVersion(uintptr_t version) {
		return ((T (*)(ServicePoint*, uintptr_t))(Il2CppBase() + 0x3E5418C))(this, version);
	}
	template <typename T = uintptr_t> T GetConnectionGroup(Il2CppString* name) {
		return ((T (*)(ServicePoint*, Il2CppString*))(Il2CppBase() + 0x3E54194))(this, name);
	}
	template <typename T = uintptr_t> T SendRequest(uintptr_t request, Il2CppString* groupName) {
		return ((T (*)(ServicePoint*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3E543E8))(this, request, groupName);
	}
	template <typename T = void> T SetCertificates(uintptr_t client, uintptr_t server) {
		return ((T (*)(ServicePoint*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E549B8))(this, client, server);
	}
	template <typename T = bool> T CallEndPointDelegate(uintptr_t sock, uintptr_t remote) {
		return ((T (*)(ServicePoint*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E549C4))(this, sock, remote);
	}

};

}
