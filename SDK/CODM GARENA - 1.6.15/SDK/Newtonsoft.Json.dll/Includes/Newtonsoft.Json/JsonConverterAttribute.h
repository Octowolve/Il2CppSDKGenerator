#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json {

class JsonConverterAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json", "JsonConverterAttribute"));
	}

	template <typename T = uintptr_t> T& _converterType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ConverterParameters() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_ConverterType() {
		return ((T (*)(JsonConverterAttribute*))(Il2CppBase() + 0x40A55B0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ConverterParameters() {
		return ((T (*)(JsonConverterAttribute*))(Il2CppBase() + 0x40A55B8))(this);
	}

};

}
