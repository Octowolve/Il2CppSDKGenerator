#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Pixel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Pixel"));
	}

	template <typename T = float> T& alpha() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& distance() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector2> T& gradient() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& dX() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& dY() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
