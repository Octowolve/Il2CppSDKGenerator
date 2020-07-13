#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Messaging {

class CallContextRemotingData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Messaging", "CallContextRemotingData"));
	}

	template <typename T = Il2CppString*> T& _logicalCallID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(CallContextRemotingData*))(Il2CppBase() + 0x4B331DC))(this);
	}

};

}
