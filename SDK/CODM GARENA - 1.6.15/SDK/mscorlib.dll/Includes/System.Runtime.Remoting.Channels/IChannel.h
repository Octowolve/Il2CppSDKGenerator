#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Channels {

class IChannel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Channels", "IChannel"));
	}


	template <typename T = Il2CppString*> T get_ChannelName() {
		return ((T (*)(IChannel*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_ChannelPriority() {
		return ((T (*)(IChannel*))(Il2CppBase() + 0x0))(this);
	}

};

}
