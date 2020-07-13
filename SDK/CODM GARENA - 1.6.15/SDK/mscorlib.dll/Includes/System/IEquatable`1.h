#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class IEquatable1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "IEquatable`1"));
	}


	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(IEquatable1*, uintptr_t))(Il2CppBase() + 0x0))(this, other);
	}

};

}
