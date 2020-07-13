#pragma once
#include <Il2Cpp/Il2Cpp.h>

class bitReverse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "bitReverse"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& reversed() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_N() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_log_2_N() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_reverse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_reverse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T reverse(int32_t i, int32_t bitCount) {
		return ((T (*)(bitReverse*, int32_t, int32_t))(Il2CppBase() + 0x35BC55C))(this, i, bitCount);
	}
	template <typename T = int32_t> T reverse_1(int32_t i) {
		return ((T (*)(bitReverse*, int32_t))(Il2CppBase() + 0x35BC634))(this, i);
	}

};

}
