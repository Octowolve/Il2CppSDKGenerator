#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TimingSoundcIterator2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<TimingSound>c__Iterator2"));
	}

	template <typename T = Il2CppString*> T& bankName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& timingIntervalTime__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& eventName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(TimingSoundcIterator2*))(Il2CppBase() + 0x3EA9DC8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(TimingSoundcIterator2*))(Il2CppBase() + 0x3EA9F04))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(TimingSoundcIterator2*))(Il2CppBase() + 0x3EA9F0C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(TimingSoundcIterator2*))(Il2CppBase() + 0x3EA9F14))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(TimingSoundcIterator2*))(Il2CppBase() + 0x3EA9F28))(this);
	}

};

}
