#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class IWebRequestCreate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "IWebRequestCreate"));
	}


	template <typename T = uintptr_t> T Create(uintptr_t uri) {
		return ((T (*)(IWebRequestCreate*, uintptr_t))(Il2CppBase() + 0x0))(this, uri);
	}

};

}
