#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SecurityAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "SecurityAttribute"));
	}

	template <typename T = Il2CppString*> T& _name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _value() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(SecurityAttribute*))(Il2CppBase() + 0x4284250))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(SecurityAttribute*))(Il2CppBase() + 0x4284258))(this);
	}

};

}
