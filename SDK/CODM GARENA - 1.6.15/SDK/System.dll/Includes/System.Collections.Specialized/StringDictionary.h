#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.Specialized {

class StringDictionary
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Collections.Specialized", "StringDictionary"));
	}

	template <typename T = uintptr_t> T& contents() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = int32_t> T get_Count() {
		return ((T (*)(StringDictionary*))(Il2CppBase() + 0x4CA07B8))(this);
	}
	template <typename T = uintptr_t> T get_Keys() {
		return ((T (*)(StringDictionary*))(Il2CppBase() + 0x4CA07EC))(this);
	}
	template <typename T = uintptr_t> T get_Values() {
		return ((T (*)(StringDictionary*))(Il2CppBase() + 0x4CA0820))(this);
	}
	template <typename T = void> T Add(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(StringDictionary*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4CA0854))(this, key, value);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(StringDictionary*))(Il2CppBase() + 0x4CA099C))(this);
	}

};

}
