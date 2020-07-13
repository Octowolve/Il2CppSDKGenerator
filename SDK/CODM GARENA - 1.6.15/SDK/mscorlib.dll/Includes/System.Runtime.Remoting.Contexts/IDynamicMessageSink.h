#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Contexts {

class IDynamicMessageSink
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Contexts", "IDynamicMessageSink"));
	}


	template <typename T = void> T ProcessMessageFinish(uintptr_t replyMsg, bool bCliSide, bool bAsync) {
		return ((T (*)(IDynamicMessageSink*, uintptr_t, bool, bool))(Il2CppBase() + 0x0))(this, replyMsg, bCliSide, bAsync);
	}
	template <typename T = void> T ProcessMessageStart(uintptr_t reqMsg, bool bCliSide, bool bAsync) {
		return ((T (*)(IDynamicMessageSink*, uintptr_t, bool, bool))(Il2CppBase() + 0x0))(this, reqMsg, bCliSide, bAsync);
	}

};

}
