#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetSkybox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetSkybox"));
	}

	template <typename T = uintptr_t> T& skybox() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetSkybox*))(Il2CppBase() + 0x502C108))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetSkybox*))(Il2CppBase() + 0x502C114))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetSkybox*))(Il2CppBase() + 0x502C16C))(this);
	}

};

}
