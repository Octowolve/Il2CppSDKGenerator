#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.ConstrainedExecution {

class CriticalFinalizerObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.ConstrainedExecution", "CriticalFinalizerObject"));
	}


	template <typename T = void> T Finalize() {
		return ((T (*)(CriticalFinalizerObject*))(Il2CppBase() + 0x4FDF62C))(this);
	}

};

}
