#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class JsonPropertyCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "JsonPropertyCollection"));
	}

	template <typename T = uintptr_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _list() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = Il2CppString*> T GetKeyForItem(uintptr_t item) {
		return ((T (*)(JsonPropertyCollection*, uintptr_t))(Il2CppBase() + 0x398C5C0))(this, item);
	}
	template <typename T = void> T AddProperty(uintptr_t property) {
		return ((T (*)(JsonPropertyCollection*, uintptr_t))(Il2CppBase() + 0x397E01C))(this, property);
	}
	template <typename T = uintptr_t> T GetClosestMatchProperty(Il2CppString* propertyName) {
		return ((T (*)(JsonPropertyCollection*, Il2CppString*))(Il2CppBase() + 0x397DFE0))(this, propertyName);
	}
	template <typename T = bool> T TryGetValue(Il2CppString* key, uintptr_t* item) {
		return ((T (*)(JsonPropertyCollection*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x398C77C))(this, key, item);
	}
	template <typename T = uintptr_t> T GetProperty(Il2CppString* propertyName, uintptr_t comparisonType) {
		return ((T (*)(JsonPropertyCollection*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x398C5E0))(this, propertyName, comparisonType);
	}

};

}
