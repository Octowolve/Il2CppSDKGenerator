#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net.Sockets {

class SocketException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net.Sockets", "SocketException"));
	}


	template <typename T = int32_t> static T WSAGetLastError_internal() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E62910))(0);
	}
	template <typename T = uintptr_t> T get_SocketErrorCode() {
		return ((T (*)(SocketException*))(Il2CppBase() + 0x3E621C0))(this);
	}
	template <typename T = Il2CppString*> T get_Message() {
		return ((T (*)(SocketException*))(Il2CppBase() + 0x3E629C0))(this);
	}

};

}
