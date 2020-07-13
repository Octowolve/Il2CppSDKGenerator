#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Linq {

class JTokenEqualityComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Linq", "JTokenEqualityComparer"));
	}


	template <typename T = bool> T Equals(uintptr_t x, uintptr_t y) {
		return ((T (*)(JTokenEqualityComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x397463C))(this, x, y);
	}
	template <typename T = int32_t> T GetHashCode(uintptr_t obj) {
		return ((T (*)(JTokenEqualityComparer*, uintptr_t))(Il2CppBase() + 0x397470C))(this, obj);
	}

};

}
