#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TODWorldParameters
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TOD_WorldParameters"));
	}

	template <typename T = bool> T& SetAmbientLight() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& SetFogColor() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = float> T& FogColorBias() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& ViewerHeight() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& HorizonOffset() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T CheckRange() {
		return ((T (*)(TODWorldParameters*))(Il2CppBase() + 0x4966894))(this);
	}

};

}
