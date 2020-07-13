#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class DirectDSConnector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "DirectDSConnector"));
	}

	template <typename T = bool> T& m_IsReady() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_SendData() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Socket() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_Logger() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& UTF8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& kErrnoConnectFail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& kErrnoSendException() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& kErrnoSendFail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& kErrnoRecvNotReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& kErrnoRecvClientDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& kErrnoRecvException() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& kErrnoRecvFail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& kErrnoRecvDismatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& kErrnoRecvProtocolDismatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& kErrnoRecvProcessError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_WorkThread() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_Param() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_Callback() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Dispose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertFromIpStringToInteger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertFromIpAddressToInteger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertFromIntegerToIpAddress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IntToAddr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareSendBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateRecvBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopConnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartConnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TestProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConnectProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Send() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Processing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = void> T Dispose() {
		return ((T (*)(DirectDSConnector*))(Il2CppBase() + 0x50C6510))(this);
	}
	template <typename T = uint32_t> static T ConvertFromIpStringToInteger(Il2CppString* ipAddress) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x50C65FC))(0, ipAddress);
	}
	template <typename T = uint32_t> static T ConvertFromIpAddressToInteger(uintptr_t ipAddress, bool swapEndian) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x50C6750))(0, ipAddress, swapEndian);
	}
	template <typename T = Il2CppString*> static T ConvertFromIntegerToIpAddress(uint32_t ipAddress, bool swapEndian) {
		return ((T (*)(void *, uint32_t, bool))(Il2CppBase() + 0x50C6984))(0, ipAddress, swapEndian);
	}
	template <typename T = Il2CppString*> static T IntToAddr(int64_t address) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x50C6B80))(0, address);
	}
	template <typename T = void> T PrepareSendBuffer(uintptr_t connectParam) {
		return ((T (*)(DirectDSConnector*, uintptr_t))(Il2CppBase() + 0x50C6CE8))(this, connectParam);
	}
	template <typename T = bool> T ValidateRecvBuffer(Il2CppArray<uintptr_t>* toCompare, uint32_t expectLen) {
		return ((T (*)(DirectDSConnector*, Il2CppArray<uintptr_t>*, uint32_t))(Il2CppBase() + 0x50C6FA0))(this, toCompare, expectLen);
	}
	template <typename T = void> T StopConnect() {
		return ((T (*)(DirectDSConnector*))(Il2CppBase() + 0x50C70AC))(this);
	}
	template <typename T = void> T StartConnect(uintptr_t connectParam, void* callback) {
		return ((T (*)(DirectDSConnector*, uintptr_t, void*))(Il2CppBase() + 0x50C71BC))(this, connectParam, callback);
	}
	template <typename T = void> T TestProcess() {
		return ((T (*)(DirectDSConnector*))(Il2CppBase() + 0x50C7374))(this);
	}
	template <typename T = void> T ConnectProcess() {
		return ((T (*)(DirectDSConnector*))(Il2CppBase() + 0x50C7628))(this);
	}
	template <typename T = uintptr_t> T Send(uintptr_t connectParam, uintptr_t s2cRes) {
		return ((T (*)(DirectDSConnector*, uintptr_t, uintptr_t))(Il2CppBase() + 0x50C7864))(this, connectParam, s2cRes);
	}
	template <typename T = uintptr_t> T Processing(Il2CppString* ip, int32_t timeOutMillisec, uintptr_t s2cRes) {
		return ((T (*)(DirectDSConnector*, Il2CppString*, int32_t, uintptr_t))(Il2CppBase() + 0x50C7B60))(this, ip, timeOutMillisec, s2cRes);
	}

};

}
