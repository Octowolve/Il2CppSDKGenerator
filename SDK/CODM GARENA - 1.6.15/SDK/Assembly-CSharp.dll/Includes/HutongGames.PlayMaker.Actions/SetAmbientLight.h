#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetAmbientLight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetAmbientLight"));
	}

	template <typename T = uintptr_t> T& ambientColor() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetAmbientLight*))(Il2CppBase() + 0x4FB0CA4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetAmbientLight*))(Il2CppBase() + 0x4FB0CF0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetAmbientLight*))(Il2CppBase() + 0x4FB0D70))(this);
	}
	template <typename T = void> T DoSetAmbientColor() {
		return ((T (*)(SetAmbientLight*))(Il2CppBase() + 0x4FB0D1C))(this);
	}

};

}
