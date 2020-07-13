#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class IValueProvider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "IValueProvider"));
	}


	template <typename T = void> T SetValue(uintptr_t target, uintptr_t value) {
		return ((T (*)(IValueProvider*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, target, value);
	}
	template <typename T = uintptr_t> T GetValue(uintptr_t target) {
		return ((T (*)(IValueProvider*, uintptr_t))(Il2CppBase() + 0x0))(this, target);
	}

};

}
