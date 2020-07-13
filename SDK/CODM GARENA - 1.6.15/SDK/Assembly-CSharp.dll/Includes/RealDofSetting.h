#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RealDofSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RealDofSetting"));
	}

	template <typename T = float> T& focusRange() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& focusDistance() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& blurSize() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& samplerScale() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
