#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization {

class ArrayFixupRecord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization", "ArrayFixupRecord"));
	}

	template <typename T = int32_t> T& _index() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T FixupImpl(uintptr_t manager) {
		return ((T (*)(ArrayFixupRecord*, uintptr_t))(Il2CppBase() + 0x4B45EE4))(this, manager);
	}

};

}
