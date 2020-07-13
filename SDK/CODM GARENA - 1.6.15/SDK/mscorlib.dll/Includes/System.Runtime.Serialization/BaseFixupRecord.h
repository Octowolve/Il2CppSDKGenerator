#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization {

class BaseFixupRecord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization", "BaseFixupRecord"));
	}

	template <typename T = uintptr_t> T& ObjectToBeFixed() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& ObjectRequired() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& NextSameContainer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& NextSameRequired() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T DoFixup(uintptr_t manager, bool strict) {
		return ((T (*)(BaseFixupRecord*, uintptr_t, bool))(Il2CppBase() + 0x4B45FA0))(this, manager, strict);
	}
	template <typename T = void> T FixupImpl(uintptr_t manager) {
		return ((T (*)(BaseFixupRecord*, uintptr_t))(Il2CppBase() + 0x0))(this, manager);
	}

};

}
