#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections {

class IEnumerable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections", "IEnumerable"));
	}


	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(IEnumerable*))(Il2CppBase() + 0x0))(this);
	}

};

}
