#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Globalization.Unicode {

class ContractionComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Globalization.Unicode", "ContractionComparer"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T Compare(uintptr_t o1, uintptr_t o2) {
		return ((T (*)(ContractionComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F8B9B8))(this, o1, o2);
	}

};

}
