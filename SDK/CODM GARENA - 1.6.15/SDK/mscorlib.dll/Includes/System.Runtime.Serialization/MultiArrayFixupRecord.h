#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization {

class MultiArrayFixupRecord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization", "MultiArrayFixupRecord"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _indices() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T FixupImpl(uintptr_t manager) {
		return ((T (*)(MultiArrayFixupRecord*, uintptr_t))(Il2CppBase() + 0x302CAB4))(this, manager);
	}

};

}
