#pragma once
#include <Il2Cpp/Il2Cpp.h>

class butterflyElem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "butterflyElem"));
	}

	template <typename T = Il2CppVector2> T& m_T() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& m_index0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_index1() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
