#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Contexts {

class SynchronizedServerContextSink
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Contexts", "SynchronizedServerContextSink"));
	}

	template <typename T = uintptr_t> T& _next() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _att() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
