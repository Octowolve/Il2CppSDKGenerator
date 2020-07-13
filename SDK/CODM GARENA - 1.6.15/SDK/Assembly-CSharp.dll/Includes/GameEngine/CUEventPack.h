#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class CUEventPack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "CUEventPack"));
	}


	template <typename T = uintptr_t> T get_Event() {
		return ((T (*)(CUEventPack*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_str() {
		return ((T (*)(CUEventPack*))(Il2CppBase() + 0x0))(this);
	}

};

}
