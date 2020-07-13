#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization {

class FixupRecord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization", "FixupRecord"));
	}

	template <typename T = uintptr_t> T& _member() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T FixupImpl(uintptr_t manager) {
		return ((T (*)(FixupRecord*, uintptr_t))(Il2CppBase() + 0x4B462D4))(this, manager);
	}

};

}
