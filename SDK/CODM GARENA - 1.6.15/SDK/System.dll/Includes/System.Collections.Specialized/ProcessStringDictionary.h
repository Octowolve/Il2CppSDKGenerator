#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.Specialized {

class ProcessStringDictionary
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Collections.Specialized", "ProcessStringDictionary"));
	}

	template <typename T = uintptr_t> T& table() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_Count() {
		return ((T (*)(ProcessStringDictionary*))(Il2CppBase() + 0x4C9F770))(this);
	}
	template <typename T = uintptr_t> T get_Keys() {
		return ((T (*)(ProcessStringDictionary*))(Il2CppBase() + 0x4C9F7A4))(this);
	}
	template <typename T = uintptr_t> T get_Values() {
		return ((T (*)(ProcessStringDictionary*))(Il2CppBase() + 0x4C9F7D8))(this);
	}
	template <typename T = void> T Add(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(ProcessStringDictionary*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4C9F80C))(this, key, value);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(ProcessStringDictionary*))(Il2CppBase() + 0x4C9F840))(this);
	}

};

}
