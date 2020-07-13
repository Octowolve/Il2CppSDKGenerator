#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class HeaderAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "HeaderAttribute"));
	}

	template <typename T = Il2CppString*> T& header() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
