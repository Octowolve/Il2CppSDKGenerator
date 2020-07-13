#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IERankProtectioncIterator6
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IERankProtection>c__Iterator6"));
	}

	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(IERankProtectioncIterator6*))(Il2CppBase() + 0x297DE4C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(IERankProtectioncIterator6*))(Il2CppBase() + 0x297DF7C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(IERankProtectioncIterator6*))(Il2CppBase() + 0x297DF84))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(IERankProtectioncIterator6*))(Il2CppBase() + 0x297DF8C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(IERankProtectioncIterator6*))(Il2CppBase() + 0x297DFA0))(this);
	}

};

}
