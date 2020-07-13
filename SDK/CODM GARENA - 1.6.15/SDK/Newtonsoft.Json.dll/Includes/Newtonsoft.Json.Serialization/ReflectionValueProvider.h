#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class ReflectionValueProvider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "ReflectionValueProvider"));
	}

	template <typename T = uintptr_t> T& _memberInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T SetValue(uintptr_t target, uintptr_t value) {
		return ((T (*)(ReflectionValueProvider*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39A5768))(this, target, value);
	}
	template <typename T = uintptr_t> T GetValue(uintptr_t target) {
		return ((T (*)(ReflectionValueProvider*, uintptr_t))(Il2CppBase() + 0x39A59C0))(this, target);
	}

};

}
