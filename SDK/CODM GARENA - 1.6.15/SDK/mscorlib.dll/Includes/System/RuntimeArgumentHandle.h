#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class RuntimeArgumentHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "RuntimeArgumentHandle"));
	}

	template <typename T = uintptr_t> T& args() {
		return *(T*)((uintptr_t)this + 0x0);
	}


};

}
