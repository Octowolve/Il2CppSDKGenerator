#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json {

class JsonPropertyAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json", "JsonPropertyAttribute"));
	}

	template <typename T = void*> T& _nullValueHandling() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& _defaultValueHandling() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _referenceLoopHandling() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& _objectCreationHandling() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& _typeNameHandling() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& _isReference() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& _order() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& _required() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& _itemIsReference() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& _itemReferenceLoopHandling() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& _itemTypeNameHandling() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& ItemConverterType() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ItemConverterParameters() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& PropertyName() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = uintptr_t> T get_ItemConverterType() {
		return ((T (*)(JsonPropertyAttribute*))(Il2CppBase() + 0x40A64A0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ItemConverterParameters() {
		return ((T (*)(JsonPropertyAttribute*))(Il2CppBase() + 0x40A64A8))(this);
	}
	template <typename T = Il2CppString*> T get_PropertyName() {
		return ((T (*)(JsonPropertyAttribute*))(Il2CppBase() + 0x40A64B0))(this);
	}

};

}
