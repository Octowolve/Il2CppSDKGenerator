#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json {

class JsonContainerAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json", "JsonContainerAttribute"));
	}

	template <typename T = uintptr_t> T& ItemConverterType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ItemConverterParameters() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& _isReference() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _itemIsReference() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = void*> T& _itemReferenceLoopHandling() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& _itemTypeNameHandling() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uintptr_t> T get_ItemConverterType() {
		return ((T (*)(JsonContainerAttribute*))(Il2CppBase() + 0x40A3F6C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ItemConverterParameters() {
		return ((T (*)(JsonContainerAttribute*))(Il2CppBase() + 0x40A3F74))(this);
	}

};

}
