#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting {

class IChannelInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting", "IChannelInfo"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T get_ChannelData() {
		return ((T (*)(IChannelInfo*))(Il2CppBase() + 0x0))(this);
	}

};

}
