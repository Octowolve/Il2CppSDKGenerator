#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class WwisePostEventOnPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "WwisePostEventOnPawn"));
	}

	template <typename T = Il2CppString*> T& PawnID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& WwiseEvent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& audio() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(WwisePostEventOnPawn*))(Il2CppBase() + 0x4F2112C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(WwisePostEventOnPawn*))(Il2CppBase() + 0x4F21204))(this);
	}

};

}
