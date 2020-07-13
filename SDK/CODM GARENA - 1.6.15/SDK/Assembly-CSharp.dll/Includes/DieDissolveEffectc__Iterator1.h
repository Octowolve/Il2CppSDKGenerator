#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DieDissolveEffectcIterator1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DieDissolveEffect>c__Iterator1"));
	}

	template <typename T = float> T& dissolveValue__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& dissolveSpeed__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& skinnedMeshRenderers() {
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
		return ((T (*)(DieDissolveEffectcIterator1*))(Il2CppBase() + 0x3EA91B4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(DieDissolveEffectcIterator1*))(Il2CppBase() + 0x3EA9508))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DieDissolveEffectcIterator1*))(Il2CppBase() + 0x3EA9510))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(DieDissolveEffectcIterator1*))(Il2CppBase() + 0x3EA9518))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DieDissolveEffectcIterator1*))(Il2CppBase() + 0x3EA952C))(this);
	}

};

}
