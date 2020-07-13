#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IEQuickJoincIterator1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IEQuickJoin>c__Iterator1"));
	}

	template <typename T = uintptr_t> T& gds__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& hasExpired__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& rds__0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& total__0() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& i__1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& result__2() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& para__0() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& para2__0() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& $locvar0() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(IEQuickJoincIterator1*))(Il2CppBase() + 0x1D672BC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(IEQuickJoincIterator1*))(Il2CppBase() + 0x1D67F08))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(IEQuickJoincIterator1*))(Il2CppBase() + 0x1D67F10))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(IEQuickJoincIterator1*))(Il2CppBase() + 0x1D67F18))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(IEQuickJoincIterator1*))(Il2CppBase() + 0x1D67F2C))(this);
	}

};

}
