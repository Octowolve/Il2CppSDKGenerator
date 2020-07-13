#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRPickupArea
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRPickupArea"));
	}

	template <typename T = int32_t> T& ItemAreaType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Priority() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& weights() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& areaIsinRandomPool() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_color() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& colors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& InitIslandAreaType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_ServerOnly() {
		return ((T (*)(BRPickupArea*))(Il2CppBase() + 0x52FA144))(this);
	}

};

}
