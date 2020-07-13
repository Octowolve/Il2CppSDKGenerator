#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AudioGlobalSwitches
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AudioGlobalSwitches"));
	}

	template <typename T = bool> static T& DisableAllAkPortals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
