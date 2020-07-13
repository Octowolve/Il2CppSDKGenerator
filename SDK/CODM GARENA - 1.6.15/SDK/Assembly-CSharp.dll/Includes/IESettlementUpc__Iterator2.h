#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IESettlementUpcIterator2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IESettlementUp>c__Iterator2"));
	}

	template <typename T = uintptr_t> T& part() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(IESettlementUpcIterator2*))(Il2CppBase() + 0x297E354))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(IESettlementUpcIterator2*))(Il2CppBase() + 0x297E8AC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(IESettlementUpcIterator2*))(Il2CppBase() + 0x297E8B4))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(IESettlementUpcIterator2*))(Il2CppBase() + 0x297E8BC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(IESettlementUpcIterator2*))(Il2CppBase() + 0x297E8D0))(this);
	}
	template <typename T = bool> T m__0() {
		return ((T (*)(IESettlementUpcIterator2*))(Il2CppBase() + 0x297E964))(this);
	}

};

}
