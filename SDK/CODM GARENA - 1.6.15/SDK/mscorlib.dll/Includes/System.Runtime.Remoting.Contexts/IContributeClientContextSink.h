#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Contexts {

class IContributeClientContextSink
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Contexts", "IContributeClientContextSink"));
	}


	template <typename T = uintptr_t> T GetClientContextSink(uintptr_t nextSink) {
		return ((T (*)(IContributeClientContextSink*, uintptr_t))(Il2CppBase() + 0x0))(this, nextSink);
	}

};

}
