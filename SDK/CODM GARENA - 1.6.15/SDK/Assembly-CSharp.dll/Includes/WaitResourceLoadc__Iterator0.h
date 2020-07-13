#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaitResourceLoadcIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<WaitResourceLoad>c__Iterator0"));
	}

	template <typename T = Il2CppString*> T& inAssetPath() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& resourceRequest__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& loadHandler() {
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
	template <typename T = uintptr_t> T& $locvar0() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(WaitResourceLoadcIterator0*))(Il2CppBase() + 0x3F25994))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(WaitResourceLoadcIterator0*))(Il2CppBase() + 0x3F25D38))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(WaitResourceLoadcIterator0*))(Il2CppBase() + 0x3F25D40))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(WaitResourceLoadcIterator0*))(Il2CppBase() + 0x3F25D48))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(WaitResourceLoadcIterator0*))(Il2CppBase() + 0x3F25D5C))(this);
	}

};

}
