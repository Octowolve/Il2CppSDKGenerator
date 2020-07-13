#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RequestTranslatecIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RequestTranslate>c__Iterator0"));
	}

	template <typename T = uintptr_t> T& cloud__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& LangCloud__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& sourceText__0() {
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
		return ((T (*)(RequestTranslatecIterator0*))(Il2CppBase() + 0x4BC4FC4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(RequestTranslatecIterator0*))(Il2CppBase() + 0x4BC59C4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(RequestTranslatecIterator0*))(Il2CppBase() + 0x4BC59CC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(RequestTranslatecIterator0*))(Il2CppBase() + 0x4BC59D4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(RequestTranslatecIterator0*))(Il2CppBase() + 0x4BC59E8))(this);
	}

};

}
