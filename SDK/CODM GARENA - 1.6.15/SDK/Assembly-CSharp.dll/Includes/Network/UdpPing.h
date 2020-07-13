#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class UdpPing
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "UdpPing"));
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
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOutput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Dispose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareSendBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateRecvBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Send() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Processing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculatePing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPingTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = Il2CppString*> T GetOutput() {
		return ((T (*)(UdpPing*))(Il2CppBase() + 0x43A1D60))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(UdpPing*))(Il2CppBase() + 0x43A1E24))(this);
	}
	template <typename T = void> T PrepareSendBuffer() {
		return ((T (*)(UdpPing*))(Il2CppBase() + 0x43A1ED8))(this);
	}
	template <typename T = bool> T ValidateRecvBuffer(Il2CppArray<uintptr_t>* toCompare) {
		return ((T (*)(UdpPing*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43A2008))(this, toCompare);
	}
	template <typename T = uintptr_t> T Send(Il2CppString* serverAddress, uint16_t port, int32_t timeOutMillisec) {
		return ((T (*)(UdpPing*, Il2CppString*, uint16_t, int32_t))(Il2CppBase() + 0x43A2158))(this, serverAddress, port, timeOutMillisec);
	}
	template <typename T = uintptr_t> T Processing(Il2CppString* ip, int32_t timeOutMillisec) {
		return ((T (*)(UdpPing*, Il2CppString*, int32_t))(Il2CppBase() + 0x43A23CC))(this, ip, timeOutMillisec);
	}
	template <typename T = uint32_t> T CalculatePing(uint32_t lastTick) {
		return ((T (*)(UdpPing*, uint32_t))(Il2CppBase() + 0x43A2FC8))(this, lastTick);
	}
	template <typename T = uint32_t> T GetPingTick() {
		return ((T (*)(UdpPing*))(Il2CppBase() + 0x43A2EE8))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetOutput() {
		return ((T (*)(UdpPing*))(Il2CppBase() + 0x43A3124))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Dispose() {
		return ((T (*)(UdpPing*))(Il2CppBase() + 0x43A312C))(this);
	}

};

}
