#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Messaging {

class ClientContextTerminatorSink
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Messaging", "ClientContextTerminatorSink"));
	}

	template <typename T = uintptr_t> T& _context() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
