#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FrameRateSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FrameRateSettings"));
	}

	template <typename T = bool> T& m_Enabled() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& m_TriggeredAfterImminent() {
		return *(T*)((uintptr_t)this + 0x1);
	}
	template <typename T = int32_t> T& m_Degree() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& m_Threshold() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_Default() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
