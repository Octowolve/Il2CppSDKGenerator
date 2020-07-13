#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CaretBlinkcIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "", "<CaretBlink>c__Iterator0"));
	}

	template <typename T = float> T& blinkPeriod__1() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& blinkState__1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(CaretBlinkcIterator0*))(Il2CppBase() + 0x3D31640))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(CaretBlinkcIterator0*))(Il2CppBase() + 0x3D317DC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CaretBlinkcIterator0*))(Il2CppBase() + 0x3D317E4))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(CaretBlinkcIterator0*))(Il2CppBase() + 0x3D317EC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CaretBlinkcIterator0*))(Il2CppBase() + 0x3D31800))(this);
	}

};

}
