#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PushMoveDataToTeammatecAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PushMoveDataToTeammate>c__AnonStorey2"));
	}

	template <typename T = Il2CppVector3> T& forwardVDir() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& force() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& moveData() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T m__0(uintptr_t teamPawn) {
		return ((T (*)(PushMoveDataToTeammatecAnonStorey2*, uintptr_t))(Il2CppBase() + 0x35A19D0))(this, teamPawn);
	}

};

}
