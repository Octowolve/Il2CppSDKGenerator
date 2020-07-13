#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaitcIterator1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Wait>c__Iterator1"));
	}

	template <typename T = float> T& elapsed__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& atLeast() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& rndMax() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& step() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& callBack() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(WaitcIterator1*))(Il2CppBase() + 0x3CCD1C8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(WaitcIterator1*))(Il2CppBase() + 0x3CCD388))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(WaitcIterator1*))(Il2CppBase() + 0x3CCD390))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(WaitcIterator1*))(Il2CppBase() + 0x3CCD398))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(WaitcIterator1*))(Il2CppBase() + 0x3CCD3AC))(this);
	}

};

}
