#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrintDialogcIterator2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PrintDialog>c__Iterator2"));
	}

	template <typename T = bool> T& needParse__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& content() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& $locvar0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& $locvar1() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = char> T& e__1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& displayInterval() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(PrintDialogcIterator2*))(Il2CppBase() + 0x29D4E10))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(PrintDialogcIterator2*))(Il2CppBase() + 0x29D5110))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(PrintDialogcIterator2*))(Il2CppBase() + 0x29D5118))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(PrintDialogcIterator2*))(Il2CppBase() + 0x29D5120))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PrintDialogcIterator2*))(Il2CppBase() + 0x29D5134))(this);
	}

};

}
