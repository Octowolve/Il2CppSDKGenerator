#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Activation {

class ContextLevelActivator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Activation", "ContextLevelActivator"));
	}

	template <typename T = uintptr_t> T& m_NextActivator() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
