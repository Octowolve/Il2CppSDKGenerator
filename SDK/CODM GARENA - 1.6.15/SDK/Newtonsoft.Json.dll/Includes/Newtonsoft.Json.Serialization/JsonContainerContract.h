#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class JsonContainerContract
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "JsonContainerContract"));
	}

	template <typename T = uintptr_t> T& _itemContract() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& _finalItemContract() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& ItemConverter() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> T& ItemIsReference() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& ItemReferenceLoopHandling() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = void*> T& ItemTypeNameHandling() {
		return *(T*)((uintptr_t)this + 0x64);
	}

	template <typename T = uintptr_t> T get_ItemContract() {
		return ((T (*)(JsonContainerContract*))(Il2CppBase() + 0x39894DC))(this);
	}
	template <typename T = void> T set_ItemContract(uintptr_t value) {
		return ((T (*)(JsonContainerContract*, uintptr_t))(Il2CppBase() + 0x39894E4))(this, value);
	}
	template <typename T = uintptr_t> T get_FinalItemContract() {
		return ((T (*)(JsonContainerContract*))(Il2CppBase() + 0x398952C))(this);
	}
	template <typename T = uintptr_t> T get_ItemConverter() {
		return ((T (*)(JsonContainerContract*))(Il2CppBase() + 0x3989534))(this);
	}
	template <typename T = void> T set_ItemConverter(uintptr_t value) {
		return ((T (*)(JsonContainerContract*, uintptr_t))(Il2CppBase() + 0x398953C))(this, value);
	}
	template <typename T = void*> T get_ItemIsReference() {
		return ((T (*)(JsonContainerContract*))(Il2CppBase() + 0x3989544))(this);
	}
	template <typename T = void> T set_ItemIsReference(void* value) {
		return ((T (*)(JsonContainerContract*, void*))(Il2CppBase() + 0x398954C))(this, value);
	}
	template <typename T = void*> T get_ItemReferenceLoopHandling() {
		return ((T (*)(JsonContainerContract*))(Il2CppBase() + 0x3989554))(this);
	}
	template <typename T = void> T set_ItemReferenceLoopHandling(void* value) {
		return ((T (*)(JsonContainerContract*, void*))(Il2CppBase() + 0x3989568))(this, value);
	}
	template <typename T = void*> T get_ItemTypeNameHandling() {
		return ((T (*)(JsonContainerContract*))(Il2CppBase() + 0x3989574))(this);
	}
	template <typename T = void> T set_ItemTypeNameHandling(void* value) {
		return ((T (*)(JsonContainerContract*, void*))(Il2CppBase() + 0x3989588))(this, value);
	}

};

}
