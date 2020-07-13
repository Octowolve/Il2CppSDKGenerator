#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Contexts {

class ContextCallbackObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Contexts", "ContextCallbackObject"));
	}


	template <typename T = void> T DoCallBack(uintptr_t deleg) {
		return ((T (*)(ContextCallbackObject*, uintptr_t))(Il2CppBase() + 0x4B2E4C4))(this, deleg);
	}

};

}
