#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TODCycleParameters
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TOD_CycleParameters"));
	}

	template <typename T = float> T& Hour() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Day() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Month() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Year() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& MoonPhase() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Latitude() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& Longitude() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& UTC() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T CheckRange() {
		return ((T (*)(TODCycleParameters*))(Il2CppBase() + 0x4960428))(this);
	}

};

}
