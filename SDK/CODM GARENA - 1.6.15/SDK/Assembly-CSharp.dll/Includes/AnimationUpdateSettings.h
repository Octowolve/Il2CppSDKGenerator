#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimationUpdateSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimationUpdateSettings"));
	}

	template <typename T = bool> T& m_Enabled() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& m_LodIndexDegree() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& m_LodIndexThreshold() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_LodIndexDefault() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
