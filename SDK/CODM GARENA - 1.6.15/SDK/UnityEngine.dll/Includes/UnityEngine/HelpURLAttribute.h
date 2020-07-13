#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class HelpURLAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "HelpURLAttribute"));
	}

	template <typename T = Il2CppString*> T& m_Url() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
