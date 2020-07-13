#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EvidenceEnumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "EvidenceEnumerator"));
	}

	template <typename T = uintptr_t> T& currentEnum() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& hostEnum() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& assemblyEnum() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(EvidenceEnumerator*))(Il2CppBase() + 0x4280F14))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(EvidenceEnumerator*))(Il2CppBase() + 0x42810AC))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(EvidenceEnumerator*))(Il2CppBase() + 0x428122C))(this);
	}

};

}
