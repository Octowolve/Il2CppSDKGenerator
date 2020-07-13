#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class ErrorEventArgs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "ErrorEventArgs"));
	}

	template <typename T = uintptr_t> T& CurrentObject() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& ErrorContext() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T set_CurrentObject(uintptr_t value) {
		return ((T (*)(ErrorEventArgs*, uintptr_t))(Il2CppBase() + 0x3988724))(this, value);
	}
	template <typename T = void> T set_ErrorContext(uintptr_t value) {
		return ((T (*)(ErrorEventArgs*, uintptr_t))(Il2CppBase() + 0x398872C))(this, value);
	}

};

}
