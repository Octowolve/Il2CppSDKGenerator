#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class RequireComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "RequireComponent"));
	}

	template <typename T = uintptr_t> T& m_Type0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_Type1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Type2() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
