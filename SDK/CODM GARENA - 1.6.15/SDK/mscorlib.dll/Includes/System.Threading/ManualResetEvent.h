#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Threading {

class ManualResetEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Threading", "ManualResetEvent"));
	}



};

}
