#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.Generic {

class KeyValuePair2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections.Generic", "KeyValuePair`2"));
	}

	template <typename T = uintptr_t> T& key() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& value() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T get_Key() {
		return ((T (*)(KeyValuePair2*))(Il2CppBase() + 0x48B6784))(this);
	}
	template <typename T = void> T set_Key(uintptr_t value) {
		return ((T (*)(KeyValuePair2*, uintptr_t))(Il2CppBase() + 0x48B678C))(this, value);
	}
	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(KeyValuePair2*))(Il2CppBase() + 0x48B679C))(this);
	}
	template <typename T = void> T set_Value(uintptr_t value) {
		return ((T (*)(KeyValuePair2*, uintptr_t))(Il2CppBase() + 0x48B67A4))(this, value);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(KeyValuePair2*))(Il2CppBase() + 0x48B6B84))(this);
	}

};

}
