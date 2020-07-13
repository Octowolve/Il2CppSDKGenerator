#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Cinfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Cinfo"));
	}

	template <typename T = Il2CppString*> T& id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& subsystemImplementationType() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = Il2CppString*> T get_id() {
		return ((T (*)(Cinfo*))(Il2CppBase() + 0x42178D4))(this);
	}
	template <typename T = void> T set_id(Il2CppString* value) {
		return ((T (*)(Cinfo*, Il2CppString*))(Il2CppBase() + 0x42178DC))(this, value);
	}
	template <typename T = uintptr_t> T get_subsystemImplementationType() {
		return ((T (*)(Cinfo*))(Il2CppBase() + 0x42178E4))(this);
	}
	template <typename T = void> T set_subsystemImplementationType(uintptr_t value) {
		return ((T (*)(Cinfo*, uintptr_t))(Il2CppBase() + 0x42178EC))(this, value);
	}

};

}
