#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions {

class FactoryCache
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions", "FactoryCache"));
	}

	template <typename T = int32_t> T& capacity() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& factories() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mru_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Add(Il2CppString* pattern, uintptr_t options, uintptr_t factory) {
		return ((T (*)(FactoryCache*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AD2DF4))(this, pattern, options, factory);
	}
	template <typename T = void> T Cleanup() {
		return ((T (*)(FactoryCache*))(Il2CppBase() + 0x4AD2F7C))(this);
	}
	template <typename T = uintptr_t> T Lookup(Il2CppString* pattern, uintptr_t options) {
		return ((T (*)(FactoryCache*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4AD3274))(this, pattern, options);
	}

};

}
