#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Contexts {

class IContributeEnvoySink
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Contexts", "IContributeEnvoySink"));
	}


	template <typename T = uintptr_t> T GetEnvoySink(uintptr_t obj, uintptr_t nextSink) {
		return ((T (*)(IContributeEnvoySink*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, obj, nextSink);
	}

};

}
