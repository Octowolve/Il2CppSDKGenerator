#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetTeammatePositionAndRotationcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetTeammatePositionAndRotation>c__AnonStorey1"));
	}

	template <typename T = Il2CppVector3> T& forwardVDir() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T m__0(uintptr_t teamPawn) {
		return ((T (*)(SetTeammatePositionAndRotationcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x35A3248))(this, teamPawn);
	}

};

}
