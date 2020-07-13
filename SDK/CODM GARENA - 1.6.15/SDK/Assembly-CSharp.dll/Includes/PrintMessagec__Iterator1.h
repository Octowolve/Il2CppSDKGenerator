#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrintMessagecIterator1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PrintMessage>c__Iterator1"));
	}

	template <typename T = bool> T& needParse__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& i__1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& messageLines() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& messageLine__2() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& j__3() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = char> T& character__4() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& displayInterval() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& disappearTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& hideSpeed() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(PrintMessagecIterator1*))(Il2CppBase() + 0x260D664))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(PrintMessagecIterator1*))(Il2CppBase() + 0x260DC20))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(PrintMessagecIterator1*))(Il2CppBase() + 0x260DC28))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(PrintMessagecIterator1*))(Il2CppBase() + 0x260DC30))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PrintMessagecIterator1*))(Il2CppBase() + 0x260DC44))(this);
	}

};

}
