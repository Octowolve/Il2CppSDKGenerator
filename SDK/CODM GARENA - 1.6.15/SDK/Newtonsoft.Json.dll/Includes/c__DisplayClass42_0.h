#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass420
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<>c__DisplayClass42_0"));
	}

	template <typename T = uintptr_t> T& subTypeProperty() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T GetChildPrivatePropertiesb__0(uintptr_t p) {
		return ((T (*)(cDisplayClass420*, uintptr_t))(Il2CppBase() + 0x4DF9B40))(this, p);
	}
	template <typename T = bool> T GetChildPrivatePropertiesb__1(uintptr_t p) {
		return ((T (*)(cDisplayClass420*, uintptr_t))(Il2CppBase() + 0x4DF9C3C))(this, p);
	}
	template <typename T = bool> T GetChildPrivatePropertiesb__2(uintptr_t p) {
		return ((T (*)(cDisplayClass420*, uintptr_t))(Il2CppBase() + 0x4DF9D88))(this, p);
	}

};

}
