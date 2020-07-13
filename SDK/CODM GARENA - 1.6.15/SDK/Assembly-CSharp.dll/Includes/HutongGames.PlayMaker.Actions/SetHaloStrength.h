#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetHaloStrength
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetHaloStrength"));
	}

	template <typename T = uintptr_t> T& haloStrength() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetHaloStrength*))(Il2CppBase() + 0x4FBDF00))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetHaloStrength*))(Il2CppBase() + 0x4FBDF2C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetHaloStrength*))(Il2CppBase() + 0x4FBDF94))(this);
	}
	template <typename T = void> T DoSetHaloStrength() {
		return ((T (*)(SetHaloStrength*))(Il2CppBase() + 0x4FBDF58))(this);
	}

};

}
