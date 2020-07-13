#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json {

class JsonExtensionDataAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json", "JsonExtensionDataAttribute"));
	}

	template <typename T = bool> T& WriteData() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& ReadData() {
		return *(T*)((uintptr_t)this + 0x9);
	}

	template <typename T = bool> T get_WriteData() {
		return ((T (*)(JsonExtensionDataAttribute*))(Il2CppBase() + 0x40A5684))(this);
	}
	template <typename T = void> T set_WriteData(bool value) {
		return ((T (*)(JsonExtensionDataAttribute*, bool))(Il2CppBase() + 0x40A568C))(this, value);
	}
	template <typename T = bool> T get_ReadData() {
		return ((T (*)(JsonExtensionDataAttribute*))(Il2CppBase() + 0x40A5694))(this);
	}
	template <typename T = void> T set_ReadData(bool value) {
		return ((T (*)(JsonExtensionDataAttribute*, bool))(Il2CppBase() + 0x40A569C))(this, value);
	}

};

}
