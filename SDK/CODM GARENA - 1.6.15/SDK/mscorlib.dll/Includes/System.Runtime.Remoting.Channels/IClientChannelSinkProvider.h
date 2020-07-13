#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Channels {

class IClientChannelSinkProvider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Channels", "IClientChannelSinkProvider"));
	}


	template <typename T = void> T set_Next(uintptr_t value) {
		return ((T (*)(IClientChannelSinkProvider*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}

};

}
