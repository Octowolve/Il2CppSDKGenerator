#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.Generic {

class IEnumerator1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections.Generic", "IEnumerator`1"));
	}


	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(IEnumerator1*))(Il2CppBase() + 0x0))(this);
	}

};

}
