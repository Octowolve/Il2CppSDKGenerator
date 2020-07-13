#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TODCloudPBRParameters
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TOD_CloudPBRParameters"));
	}

	template <typename T = float> T& Scale() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& UvPow() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& CloudCover() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Brightness() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& EarthRadius() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& CloudHeight() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& AtomosHeight() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T CheckRange() {
		return ((T (*)(TODCloudPBRParameters*))(Il2CppBase() + 0x495F938))(this);
	}

};

}
