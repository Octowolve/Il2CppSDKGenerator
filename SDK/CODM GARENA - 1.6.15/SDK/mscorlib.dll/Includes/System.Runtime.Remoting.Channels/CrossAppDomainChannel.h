#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Channels {

class CrossAppDomainChannel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Channels", "CrossAppDomainChannel"));
	}

	template <typename T = uintptr_t> static T& s_lock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T RegisterCrossAppDomainChannel() {
		return ((T (*)(void *))(Il2CppBase() + 0x4B21520))(0);
	}
	template <typename T = Il2CppString*> T get_ChannelName() {
		return ((T (*)(CrossAppDomainChannel*))(Il2CppBase() + 0x4B21694))(this);
	}
	template <typename T = int32_t> T get_ChannelPriority() {
		return ((T (*)(CrossAppDomainChannel*))(Il2CppBase() + 0x4B2170C))(this);
	}
	template <typename T = uintptr_t> T get_ChannelData() {
		return ((T (*)(CrossAppDomainChannel*))(Il2CppBase() + 0x4B21714))(this);
	}
	template <typename T = void> T StartListening(uintptr_t data) {
		return ((T (*)(CrossAppDomainChannel*, uintptr_t))(Il2CppBase() + 0x4B218C8))(this, data);
	}
	template <typename T = uintptr_t> T CreateMessageSink(Il2CppString* url, uintptr_t data, uintptr_t* uri) {
		return ((T (*)(CrossAppDomainChannel*, Il2CppString*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4B218CC))(this, url, data, uri);
	}

};

}
