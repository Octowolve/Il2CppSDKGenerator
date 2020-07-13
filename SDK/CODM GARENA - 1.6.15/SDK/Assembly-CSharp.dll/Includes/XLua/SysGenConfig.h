#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua {

class SysGenConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua", "SysGenConfig"));
	}


	template <typename T = Il2CppList<uintptr_t>*> static T get_GCOptimize() {
		return ((T (*)(void *))(Il2CppBase() + 0xF64A48))(0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<Il2CppString*>*>*> static T get_AdditionalProperties() {
		return ((T (*)(void *))(Il2CppBase() + 0xF64CA8))(0);
	}

};

}
