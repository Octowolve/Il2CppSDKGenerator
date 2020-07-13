#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Squad {

class VehicelItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Squad", "VehicelItem"));
	}

	template <typename T = uintptr_t> T& config() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_VehicleConfig() {
		return ((T (*)(VehicelItem*))(Il2CppBase() + 0x3947CC8))(this);
	}

};

}
