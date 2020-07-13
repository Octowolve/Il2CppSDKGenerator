#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class WaitForSeconds
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "WaitForSeconds"));
	}

	template <typename T = float> T& m_Seconds() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
