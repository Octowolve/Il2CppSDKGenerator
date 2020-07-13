#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BloomSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BloomSetting"));
	}

	template <typename T = uintptr_t> T& colorMix() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& threshold() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& intensity() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& BlurSize() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
