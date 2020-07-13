#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PatternLinkStack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "PatternLinkStack"));
	}

	template <typename T = uintptr_t> T& link() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T set_BaseAddress(int32_t value) {
		return ((T (*)(PatternLinkStack*, int32_t))(Il2CppBase() + 0x4ADB9E4))(this, value);
	}
	template <typename T = int32_t> T get_OffsetAddress() {
		return ((T (*)(PatternLinkStack*))(Il2CppBase() + 0x4ADB994))(this);
	}
	template <typename T = void> T set_OffsetAddress(int32_t value) {
		return ((T (*)(PatternLinkStack*, int32_t))(Il2CppBase() + 0x4ADB9EC))(this, value);
	}
	template <typename T = int32_t> T GetOffset(int32_t target_addr) {
		return ((T (*)(PatternLinkStack*, int32_t))(Il2CppBase() + 0x4ADB9D0))(this, target_addr);
	}
	template <typename T = uintptr_t> T GetCurrent() {
		return ((T (*)(PatternLinkStack*))(Il2CppBase() + 0x4ADB9F4))(this);
	}
	template <typename T = void> T SetCurrent(uintptr_t l) {
		return ((T (*)(PatternLinkStack*, uintptr_t))(Il2CppBase() + 0x4ADBA8C))(this, l);
	}

};

}
