#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetFlareStrength
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetFlareStrength"));
	}

	template <typename T = uintptr_t> T& flareStrength() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetFlareStrength*))(Il2CppBase() + 0x4FB71F4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetFlareStrength*))(Il2CppBase() + 0x4FB7224))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetFlareStrength*))(Il2CppBase() + 0x4FB728C))(this);
	}
	template <typename T = void> T DoSetFlareStrength() {
		return ((T (*)(SetFlareStrength*))(Il2CppBase() + 0x4FB7250))(this);
	}

};

}
