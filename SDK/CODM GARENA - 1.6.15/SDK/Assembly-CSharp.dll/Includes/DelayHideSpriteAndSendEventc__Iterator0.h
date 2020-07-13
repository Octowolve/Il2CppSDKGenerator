#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DelayHideSpriteAndSendEventcIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DelayHideSpriteAndSendEvent>c__Iterator0"));
	}

	template <typename T = int32_t> T& j__1() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(DelayHideSpriteAndSendEventcIterator0*))(Il2CppBase() + 0x3DB565C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(DelayHideSpriteAndSendEventcIterator0*))(Il2CppBase() + 0x3DB5920))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DelayHideSpriteAndSendEventcIterator0*))(Il2CppBase() + 0x3DB5928))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(DelayHideSpriteAndSendEventcIterator0*))(Il2CppBase() + 0x3DB5930))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DelayHideSpriteAndSendEventcIterator0*))(Il2CppBase() + 0x3DB5944))(this);
	}

};

}
