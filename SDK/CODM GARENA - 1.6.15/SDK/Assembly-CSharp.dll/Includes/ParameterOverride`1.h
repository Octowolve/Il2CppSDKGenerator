#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ParameterOverride1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ParameterOverride`1"));
	}

	template <typename T = uintptr_t> T& value() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Interp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Interp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Override() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_op_Implicit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Interp(uintptr_t from, uintptr_t to, float t) {
		return ((T (*)(ParameterOverride1*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x4B6BDA4))(this, from, to, t);
	}
	template <typename T = void> T Interp_1(uintptr_t from, uintptr_t to, float t) {
		return ((T (*)(ParameterOverride1*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x4B6BF5C))(this, from, to, t);
	}
	template <typename T = void> T Override(uintptr_t x) {
		return ((T (*)(ParameterOverride1*, uintptr_t))(Il2CppBase() + 0x4B6C0D8))(this, x);
	}
	template <typename T = void> T SetValue(uintptr_t parameter) {
		return ((T (*)(ParameterOverride1*, uintptr_t))(Il2CppBase() + 0x4B6C184))(this, parameter);
	}
	template <typename T = int32_t> T GetHash() {
		return ((T (*)(ParameterOverride1*))(Il2CppBase() + 0x4B6C2B0))(this);
	}
	template <typename T = uintptr_t> static T op_Implicit(void* prop) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4B6C3E0))(0, prop);
	}

};

}
