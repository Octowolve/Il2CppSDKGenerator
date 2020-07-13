#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AddComponentMenu
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AddComponentMenu"));
	}

	template <typename T = Il2CppString*> T& m_AddComponentMenu() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_Ordering() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
