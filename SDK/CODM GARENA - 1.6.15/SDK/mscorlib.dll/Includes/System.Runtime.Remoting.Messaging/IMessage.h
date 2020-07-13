#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Messaging {

class IMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Messaging", "IMessage"));
	}


	template <typename T = uintptr_t> T get_Properties() {
		return ((T (*)(IMessage*))(Il2CppBase() + 0x0))(this);
	}

};

}
