#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SwitchWeaponThenRequestUseItemcIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SwitchWeaponThenRequestUseItem>c__Iterator0"));
	}

	template <typename T = uintptr_t> T& knife__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& tickT__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& actorId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& itemId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& posId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(SwitchWeaponThenRequestUseItemcIterator0*))(Il2CppBase() + 0x2647134))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(SwitchWeaponThenRequestUseItemcIterator0*))(Il2CppBase() + 0x264778C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(SwitchWeaponThenRequestUseItemcIterator0*))(Il2CppBase() + 0x2647794))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(SwitchWeaponThenRequestUseItemcIterator0*))(Il2CppBase() + 0x264779C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SwitchWeaponThenRequestUseItemcIterator0*))(Il2CppBase() + 0x26477B0))(this);
	}

};

}
