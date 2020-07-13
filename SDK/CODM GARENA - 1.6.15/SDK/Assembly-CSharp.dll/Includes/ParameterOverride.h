#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ParameterOverride
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ParameterOverride"));
	}

	template <typename T = bool> T& overrideState() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Interp(uintptr_t from, uintptr_t to, float t) {
		return ((T (*)(ParameterOverride*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x0))(this, from, to, t);
	}
	template <typename T = int32_t> T GetHash() {
		return ((T (*)(ParameterOverride*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetValue() {
		return ((T (*)(ParameterOverride*))(Il2CppBase() + 0x335EB88))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ParameterOverride*))(Il2CppBase() + 0x3EFE538))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ParameterOverride*))(Il2CppBase() + 0x3EFE5D0))(this);
	}
	template <typename T = void> T SetValue(uintptr_t parameter) {
		return ((T (*)(ParameterOverride*, uintptr_t))(Il2CppBase() + 0x0))(this, parameter);
	}

};

}
