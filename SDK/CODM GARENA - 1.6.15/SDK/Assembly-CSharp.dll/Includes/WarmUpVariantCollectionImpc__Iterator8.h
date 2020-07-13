#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WarmUpVariantCollectionImpcIterator8
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<WarmUpVariantCollectionImp>c__Iterator8"));
	}

	template <typename T = int32_t> T& endTransferTime__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& svc() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& svcName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& startTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& func__1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& endDrawTime__1() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& callback() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& $this() {
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
		return ((T (*)(WarmUpVariantCollectionImpcIterator8*))(Il2CppBase() + 0x2B792D8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(WarmUpVariantCollectionImpcIterator8*))(Il2CppBase() + 0x2B79BE4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(WarmUpVariantCollectionImpcIterator8*))(Il2CppBase() + 0x2B79BEC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(WarmUpVariantCollectionImpcIterator8*))(Il2CppBase() + 0x2B79BF4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(WarmUpVariantCollectionImpcIterator8*))(Il2CppBase() + 0x2B79C08))(this);
	}

};

}
