#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DelayUnloadAssetInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DelayUnloadAssetInfo"));
	}

	template <typename T = uintptr_t> T& m_UnloadObject() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& m_IntervalUnloadTime() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& m_BeginUnloadTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
