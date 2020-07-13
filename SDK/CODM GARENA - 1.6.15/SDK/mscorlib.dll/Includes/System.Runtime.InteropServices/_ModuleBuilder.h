#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.InteropServices {

class ModuleBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.InteropServices", "_ModuleBuilder"));
	}



};

}
