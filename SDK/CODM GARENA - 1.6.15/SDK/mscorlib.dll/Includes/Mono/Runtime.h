#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono {

class Runtime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono", "Runtime"));
	}


	template <typename T = Il2CppString*> static T GetDisplayName() {
		return ((T (*)(void *))(Il2CppBase() + 0x3F9F81C))(0);
	}

};

}
