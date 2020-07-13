#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChageFixUpdateSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChageFixUpdateSettings"));
	}

	template <typename T = bool> T& m_Enabled() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& m_Degree() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& m_Threshold() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_Default() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
