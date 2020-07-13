#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ADPConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ADPConfig"));
	}

	template <typename T = bool> T& m_ADPEnabled() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& m_ADPLogEnabled() {
		return *(T*)((uintptr_t)this + 0x1);
	}
	template <typename T = float> T& m_ADPStartPoint() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppString*> T& m_FrameRateSettings() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
