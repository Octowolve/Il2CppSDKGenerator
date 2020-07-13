#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Contexts {

class IContributeServerContextSink
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Contexts", "IContributeServerContextSink"));
	}


	template <typename T = uintptr_t> T GetServerContextSink(uintptr_t nextSink) {
		return ((T (*)(IContributeServerContextSink*, uintptr_t))(Il2CppBase() + 0x0))(this, nextSink);
	}

};

}
