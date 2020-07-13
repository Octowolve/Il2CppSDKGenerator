#pragma once
#include <Il2Cpp/Il2Cpp.h>

class distortSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "distortSetting"));
	}

	template <typename T = float> T& m_distortStrength() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector2> T& m_distortTiling() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& m_distortOffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
