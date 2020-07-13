#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Contexts {

class IContributeDynamicSink
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Contexts", "IContributeDynamicSink"));
	}


	template <typename T = uintptr_t> T GetDynamicSink() {
		return ((T (*)(IContributeDynamicSink*))(Il2CppBase() + 0x0))(this);
	}

};

}
