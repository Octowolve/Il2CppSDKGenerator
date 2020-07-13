#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LifelineMasterEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LifelineMasterEffect"));
	}

	template <typename T = uintptr_t> T& Master() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_Master() {
		return ((T (*)(LifelineMasterEffect*))(Il2CppBase() + 0x4936F88))(this);
	}
	template <typename T = void> T set_Master(uintptr_t value) {
		return ((T (*)(LifelineMasterEffect*, uintptr_t))(Il2CppBase() + 0x4936F90))(this, value);
	}
	template <typename T = void> T Init(uintptr_t master) {
		return ((T (*)(LifelineMasterEffect*, uintptr_t))(Il2CppBase() + 0x4934F40))(this, master);
	}

};

}
