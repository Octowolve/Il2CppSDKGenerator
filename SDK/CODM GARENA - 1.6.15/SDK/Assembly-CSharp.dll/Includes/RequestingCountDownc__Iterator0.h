#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RequestingCountDowncIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RequestingCountDown>c__Iterator0"));
	}

	template <typename T = float> T& endTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& temp__1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& countDownStr__1() {
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
		return ((T (*)(RequestingCountDowncIterator0*))(Il2CppBase() + 0x3DD5300))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(RequestingCountDowncIterator0*))(Il2CppBase() + 0x3DD55C4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(RequestingCountDowncIterator0*))(Il2CppBase() + 0x3DD55CC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(RequestingCountDowncIterator0*))(Il2CppBase() + 0x3DD55D4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(RequestingCountDowncIterator0*))(Il2CppBase() + 0x3DD55E8))(this);
	}

};

}
