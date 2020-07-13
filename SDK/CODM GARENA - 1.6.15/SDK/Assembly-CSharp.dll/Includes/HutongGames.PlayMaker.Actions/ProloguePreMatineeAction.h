#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ProloguePreMatineeAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ProloguePreMatineeAction"));
	}

	template <typename T = Il2CppVector3> T& TargetPos() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppQuaternion> T& TargetRot() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector3> T& InitPos() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppQuaternion> T& InitRot() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& Angle() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_Pawn() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& m_StartTime() {
		return *(T*)((uintptr_t)this + 0x6C);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(ProloguePreMatineeAction*))(Il2CppBase() + 0x4D7FBD4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(ProloguePreMatineeAction*))(Il2CppBase() + 0x4D7FDE0))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(ProloguePreMatineeAction*))(Il2CppBase() + 0x4D7FEE4))(this);
	}

};

}
