#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class IFormattable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "IFormattable"));
	}


	template <typename T = Il2CppString*> T ToString(Il2CppString* format, uintptr_t formatProvider) {
		return ((T (*)(IFormattable*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, format, formatProvider);
	}

};

}
