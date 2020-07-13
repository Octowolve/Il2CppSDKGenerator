#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class VisDebugQueryTypeHolder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "VisDebugQueryTypeHolder"));
	}

	template <typename T = uintptr_t> static T& Tpe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
