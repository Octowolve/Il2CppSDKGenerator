#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Channels {

class ISecurableChannel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Channels", "ISecurableChannel"));
	}


	template <typename T = void> T set_IsSecured(bool value) {
		return ((T (*)(ISecurableChannel*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
