#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Utilities {

class TypeInformation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Utilities", "TypeInformation"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& TypeCode() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_Type() {
		return ((T (*)(TypeInformation*))(Il2CppBase() + 0x4DFB318))(this);
	}
	template <typename T = void> T set_Type(uintptr_t value) {
		return ((T (*)(TypeInformation*, uintptr_t))(Il2CppBase() + 0x4DE8214))(this, value);
	}
	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(TypeInformation*))(Il2CppBase() + 0x4DFB320))(this);
	}
	template <typename T = void> T set_TypeCode(uintptr_t value) {
		return ((T (*)(TypeInformation*, uintptr_t))(Il2CppBase() + 0x4DE821C))(this, value);
	}

};

}
