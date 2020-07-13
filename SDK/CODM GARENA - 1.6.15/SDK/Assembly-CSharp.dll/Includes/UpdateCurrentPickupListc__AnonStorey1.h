#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateCurrentPickupListcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UpdateCurrentPickupList>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& pickUpMgr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& pos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& IsInBRTrainingGame() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& pawn() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T m__0(uintptr_t droppedPickUp) {
		return ((T (*)(UpdateCurrentPickupListcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x1904DAC))(this, droppedPickUp);
	}

};

}
