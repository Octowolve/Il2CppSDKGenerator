#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class GlobalProxySelection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "GlobalProxySelection"));
	}


	template <typename T = uintptr_t> static T get_Select() {
		return ((T (*)(void *))(Il2CppBase() + 0x42CCC94))(0);
	}

};

}
