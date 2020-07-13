#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RefreshSkinListcAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RefreshSkinList>c__AnonStorey3"));
	}

	template <typename T = uint32_t> T& equipVehicelId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T m__0(uintptr_t x, uintptr_t y) {
		return ((T (*)(RefreshSkinListcAnonStorey3*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A13F58))(this, x, y);
	}

};

}
