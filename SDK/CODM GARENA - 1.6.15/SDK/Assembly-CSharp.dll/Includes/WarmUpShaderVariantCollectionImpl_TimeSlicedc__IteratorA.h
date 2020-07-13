#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WarmUpShaderVariantCollectionImplTimeSlicedcIteratorA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<WarmUpShaderVariantCollectionImpl_TimeSliced>c__IteratorA"));
	}

	template <typename T = uintptr_t> T& svc() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& startTick__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& index__0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& shaderNames__0() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& $locvar0() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& $locvar1() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& shader__1() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& timeCost__0() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(WarmUpShaderVariantCollectionImplTimeSlicedcIteratorA*))(Il2CppBase() + 0x2B78D24))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(WarmUpShaderVariantCollectionImplTimeSlicedcIteratorA*))(Il2CppBase() + 0x2B79220))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(WarmUpShaderVariantCollectionImplTimeSlicedcIteratorA*))(Il2CppBase() + 0x2B79228))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(WarmUpShaderVariantCollectionImplTimeSlicedcIteratorA*))(Il2CppBase() + 0x2B79230))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(WarmUpShaderVariantCollectionImplTimeSlicedcIteratorA*))(Il2CppBase() + 0x2B79244))(this);
	}

};

}
