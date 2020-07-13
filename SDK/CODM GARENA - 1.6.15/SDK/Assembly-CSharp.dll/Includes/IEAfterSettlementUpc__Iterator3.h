#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IEAfterSettlementUpcIterator3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IEAfterSettlementUp>c__Iterator3"));
	}

	template <typename T = int32_t> T& index__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(IEAfterSettlementUpcIterator3*))(Il2CppBase() + 0x297BCA8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(IEAfterSettlementUpcIterator3*))(Il2CppBase() + 0x297C164))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(IEAfterSettlementUpcIterator3*))(Il2CppBase() + 0x297C16C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(IEAfterSettlementUpcIterator3*))(Il2CppBase() + 0x297C174))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(IEAfterSettlementUpcIterator3*))(Il2CppBase() + 0x297C188))(this);
	}
	template <typename T = bool> T m__0() {
		return ((T (*)(IEAfterSettlementUpcIterator3*))(Il2CppBase() + 0x297C21C))(this);
	}
	template <typename T = bool> T m__1() {
		return ((T (*)(IEAfterSettlementUpcIterator3*))(Il2CppBase() + 0x297C250))(this);
	}

};

}
