#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CmyRT
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CmyRT"));
	}

	template <typename T = int32_t> T& m_nameID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& m_w() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& m_h() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
