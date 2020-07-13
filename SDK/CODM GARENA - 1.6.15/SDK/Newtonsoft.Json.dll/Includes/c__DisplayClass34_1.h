#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass341
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<>c__DisplayClass34_1"));
	}

	template <typename T = void*> T& setExtensionDataDictionary() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& createExtensionDataDictionary() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& setExtensionDataDictionaryValue() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T SetExtensionDataDelegatesb__0(uintptr_t o, Il2CppString* key, uintptr_t value) {
		return ((T (*)(cDisplayClass341*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3986C28))(this, o, key, value);
	}

};

}
