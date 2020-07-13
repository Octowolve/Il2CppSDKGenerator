#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class IComparable1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "IComparable`1"));
	}


	template <typename T = int32_t> T CompareTo(uintptr_t other) {
		return ((T (*)(IComparable1*, uintptr_t))(Il2CppBase() + 0x0))(this, other);
	}

};

}
