#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class DustSwitch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "DustSwitch"));
	}

	template <typename T = uintptr_t> static T& state() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
