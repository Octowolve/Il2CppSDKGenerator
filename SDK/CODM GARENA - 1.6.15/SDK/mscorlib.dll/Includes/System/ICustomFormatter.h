#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class ICustomFormatter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "ICustomFormatter"));
	}


	template <typename T = Il2CppString*> T Format(Il2CppString* format, uintptr_t arg, uintptr_t formatProvider) {
		return ((T (*)(ICustomFormatter*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, format, arg, formatProvider);
	}

};

}
