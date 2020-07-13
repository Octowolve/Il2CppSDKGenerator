#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization {

class ISurrogateSelector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization", "ISurrogateSelector"));
	}


	template <typename T = uintptr_t> T GetSurrogate(uintptr_t type, uintptr_t context, uintptr_t* selector) {
		return ((T (*)(ISurrogateSelector*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x0))(this, type, context, selector);
	}

};

}
