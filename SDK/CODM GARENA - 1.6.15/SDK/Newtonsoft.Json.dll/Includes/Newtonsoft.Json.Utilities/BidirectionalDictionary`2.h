#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Utilities {

class BidirectionalDictionary2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Utilities", "BidirectionalDictionary`2"));
	}

	template <typename T = void*> T& _firstToSecond() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& _secondToFirst() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& _duplicateFirstErrorMessage() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& _duplicateSecondErrorMessage() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Set(uintptr_t first, uintptr_t second) {
		return ((T (*)(BidirectionalDictionary2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B61EB4))(this, first, second);
	}
	template <typename T = bool> T TryGetByFirst(uintptr_t first, uintptr_t* second) {
		return ((T (*)(BidirectionalDictionary2*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4B622F0))(this, first, second);
	}
	template <typename T = bool> T TryGetBySecond(uintptr_t second, uintptr_t* first) {
		return ((T (*)(BidirectionalDictionary2*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4B6239C))(this, second, first);
	}

};

}
