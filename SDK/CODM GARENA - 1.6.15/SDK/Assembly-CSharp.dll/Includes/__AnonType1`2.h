#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnonType12
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>__AnonType1`2"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& method() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T get_type() {
		return ((T (*)(AnonType12*))(Il2CppBase() + 0x47122C0))(this);
	}
	template <typename T = uintptr_t> T get_method() {
		return ((T (*)(AnonType12*))(Il2CppBase() + 0x47122C8))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(AnonType12*, uintptr_t))(Il2CppBase() + 0x47122D0))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(AnonType12*))(Il2CppBase() + 0x4712460))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AnonType12*))(Il2CppBase() + 0x47125DC))(this);
	}

};

}
