#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetFogDensity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetFogDensity"));
	}

	template <typename T = uintptr_t> T& fogDensity() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetFogDensity*))(Il2CppBase() + 0x4FB743C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetFogDensity*))(Il2CppBase() + 0x4FB7468))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetFogDensity*))(Il2CppBase() + 0x4FB74D0))(this);
	}
	template <typename T = void> T DoSetFogDensity() {
		return ((T (*)(SetFogDensity*))(Il2CppBase() + 0x4FB7494))(this);
	}

};

}
