#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InvokeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InvokeInfo"));
	}

	template <typename T = uintptr_t> T& member() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& tempTarget() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& valueType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T GetValue(uintptr_t target) {
		return ((T (*)(InvokeInfo*, uintptr_t))(Il2CppBase() + 0x48073AC))(this, target);
	}
	template <typename T = void> T SetValue(uintptr_t target, uintptr_t value) {
		return ((T (*)(InvokeInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4807470))(this, target, value);
	}
	template <typename T = void> T SetValue_1(uintptr_t value) {
		return ((T (*)(InvokeInfo*, uintptr_t))(Il2CppBase() + 0x4807548))(this, value);
	}

};

}
