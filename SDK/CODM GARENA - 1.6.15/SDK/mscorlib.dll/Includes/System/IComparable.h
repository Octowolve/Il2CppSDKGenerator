#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class IComparable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "IComparable"));
	}


	template <typename T = int32_t> T CompareTo(uintptr_t obj) {
		return ((T (*)(IComparable*, uintptr_t))(Il2CppBase() + 0x0))(this, obj);
	}

};

}
