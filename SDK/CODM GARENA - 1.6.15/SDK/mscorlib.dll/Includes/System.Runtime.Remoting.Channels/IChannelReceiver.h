#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Channels {

class IChannelReceiver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Channels", "IChannelReceiver"));
	}


	template <typename T = uintptr_t> T get_ChannelData() {
		return ((T (*)(IChannelReceiver*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T StartListening(uintptr_t data) {
		return ((T (*)(IChannelReceiver*, uintptr_t))(Il2CppBase() + 0x0))(this, data);
	}

};

}
