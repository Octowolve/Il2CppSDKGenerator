#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateSequencerCoroutinecIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "", "<UpdateSequencerCoroutine>c__Iterator0"));
	}

	template <typename T = uintptr_t> T& wait__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& currentTime__1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& f__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(UpdateSequencerCoroutinecIterator0*))(Il2CppBase() + 0x487154C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(UpdateSequencerCoroutinecIterator0*))(Il2CppBase() + 0x4871554))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(UpdateSequencerCoroutinecIterator0*))(Il2CppBase() + 0x487155C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(UpdateSequencerCoroutinecIterator0*))(Il2CppBase() + 0x48716B4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(UpdateSequencerCoroutinecIterator0*))(Il2CppBase() + 0x48716C0))(this);
	}

};

}
