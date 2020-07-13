#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class HttpRequestCreator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "HttpRequestCreator"));
	}


	template <typename T = uintptr_t> T Create(uintptr_t uri) {
		return ((T (*)(HttpRequestCreator*, uintptr_t))(Il2CppBase() + 0x42DBF00))(this, uri);
	}

};

}
