#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.Generic {

class IEnumerable1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections.Generic", "IEnumerable`1"));
	}


	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(IEnumerable1*))(Il2CppBase() + 0x0))(this);
	}

};

}
