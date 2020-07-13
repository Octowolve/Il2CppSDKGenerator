#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WarmUpShaderVariantCollectionImplOrigincIterator9
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<WarmUpShaderVariantCollectionImpl_Origin>c__Iterator9"));
	}

	template <typename T = uintptr_t> T& svc() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& startTick__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& timeCost__0() {
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
		return ((T (*)(WarmUpShaderVariantCollectionImplOrigincIterator9*))(Il2CppBase() + 0x2B78948))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(WarmUpShaderVariantCollectionImplOrigincIterator9*))(Il2CppBase() + 0x2B78C6C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(WarmUpShaderVariantCollectionImplOrigincIterator9*))(Il2CppBase() + 0x2B78C74))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(WarmUpShaderVariantCollectionImplOrigincIterator9*))(Il2CppBase() + 0x2B78C7C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(WarmUpShaderVariantCollectionImplOrigincIterator9*))(Il2CppBase() + 0x2B78C90))(this);
	}

};

}
