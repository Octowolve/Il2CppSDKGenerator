#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AtmosphericScatteringSun
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AtmosphericScatteringSun"));
	}

	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& transform() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& light() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_transform() {
		return ((T (*)(AtmosphericScatteringSun*))(Il2CppBase() + 0x44CF0D0))(this);
	}
	template <typename T = void> T set_transform(uintptr_t value) {
		return ((T (*)(AtmosphericScatteringSun*, uintptr_t))(Il2CppBase() + 0x44CF0D8))(this, value);
	}
	template <typename T = uintptr_t> T get_light() {
		return ((T (*)(AtmosphericScatteringSun*))(Il2CppBase() + 0x44CF0E0))(this);
	}
	template <typename T = void> T set_light(uintptr_t value) {
		return ((T (*)(AtmosphericScatteringSun*, uintptr_t))(Il2CppBase() + 0x44CF0E8))(this, value);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(AtmosphericScatteringSun*))(Il2CppBase() + 0x44CF0F0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(AtmosphericScatteringSun*))(Il2CppBase() + 0x44CF33C))(this);
	}

};

}
