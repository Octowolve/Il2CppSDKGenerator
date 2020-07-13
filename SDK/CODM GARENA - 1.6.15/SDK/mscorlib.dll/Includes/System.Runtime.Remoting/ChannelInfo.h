#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting {

class ChannelInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting", "ChannelInfo"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& channelData() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_ChannelData() {
		return ((T (*)(ChannelInfo*))(Il2CppBase() + 0x4B1DFC8))(this);
	}

};

}
