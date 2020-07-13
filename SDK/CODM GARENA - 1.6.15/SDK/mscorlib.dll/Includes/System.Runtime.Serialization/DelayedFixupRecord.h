#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization {

class DelayedFixupRecord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization", "DelayedFixupRecord"));
	}

	template <typename T = Il2CppString*> T& _memberName() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T FixupImpl(uintptr_t manager) {
		return ((T (*)(DelayedFixupRecord*, uintptr_t))(Il2CppBase() + 0x4B46258))(this, manager);
	}

};

}
