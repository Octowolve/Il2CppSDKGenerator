#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Linq.JsonPath {

class JPath
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Linq.JsonPath", "JPath"));
	}


	template <typename T = void*> static T Evaluate(Il2CppList<uintptr_t>* filters, uintptr_t t, bool errorWhenNoMatch) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x3964470))(0, filters, t, errorWhenNoMatch);
	}

};

}
