#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TODLightParameters
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TOD_LightParameters"));
	}

	template <typename T = float> T& Falloff() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& Coloring() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& SkyColoring() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& CloudColoring() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T CheckRange() {
		return ((T (*)(TODLightParameters*))(Il2CppBase() + 0x49609F4))(this);
	}

};

}
