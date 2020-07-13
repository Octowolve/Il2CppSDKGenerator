#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrintMessageARcIterator2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PrintMessageAR>c__Iterator2"));
	}

	template <typename T = float> T& time__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& messageLines() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& displayInterval() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& disappearTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& hideSpeed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(PrintMessageARcIterator2*))(Il2CppBase() + 0x260DCD8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(PrintMessageARcIterator2*))(Il2CppBase() + 0x260DFB0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(PrintMessageARcIterator2*))(Il2CppBase() + 0x260DFB8))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(PrintMessageARcIterator2*))(Il2CppBase() + 0x260DFC0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PrintMessageARcIterator2*))(Il2CppBase() + 0x260DFD4))(this);
	}

};

}
