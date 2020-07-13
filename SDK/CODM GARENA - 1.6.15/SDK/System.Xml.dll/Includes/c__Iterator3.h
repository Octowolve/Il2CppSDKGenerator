#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cIterator3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "", "<>c__Iterator3"));
	}

	template <typename T = void*> T& $s_431__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& p__1() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& f__this() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorMono_Xml_DTDNode_get_Current() {
		return ((T (*)(cIterator3*))(Il2CppBase() + 0x4E0F370))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(cIterator3*))(Il2CppBase() + 0x4E0F378))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(cIterator3*))(Il2CppBase() + 0x4E0F380))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableMono_Xml_DTDNode_GetEnumerator() {
		return ((T (*)(cIterator3*))(Il2CppBase() + 0x4E0F384))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(cIterator3*))(Il2CppBase() + 0x4E0F460))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(cIterator3*))(Il2CppBase() + 0x4E0F6D8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(cIterator3*))(Il2CppBase() + 0x4E0F820))(this);
	}

};

}
