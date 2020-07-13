#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class EnableFog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "EnableFog"));
	}

	template <typename T = uintptr_t> T& enableFog() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(EnableFog*))(Il2CppBase() + 0x4FCC0E4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(EnableFog*))(Il2CppBase() + 0x4FCC110))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(EnableFog*))(Il2CppBase() + 0x4FCC168))(this);
	}

};

}
