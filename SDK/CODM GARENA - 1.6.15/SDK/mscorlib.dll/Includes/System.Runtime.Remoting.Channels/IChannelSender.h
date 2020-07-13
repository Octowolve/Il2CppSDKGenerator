#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Channels {

class IChannelSender
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Channels", "IChannelSender"));
	}


	template <typename T = uintptr_t> T CreateMessageSink(Il2CppString* url, uintptr_t remoteChannelData, uintptr_t* objectURI) {
		return ((T (*)(IChannelSender*, Il2CppString*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x0))(this, url, remoteChannelData, objectURI);
	}

};

}
