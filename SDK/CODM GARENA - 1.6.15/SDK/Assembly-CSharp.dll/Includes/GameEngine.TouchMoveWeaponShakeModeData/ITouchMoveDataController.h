#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.TouchMoveWeaponShakeModeData {

class ITouchMoveDataController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.TouchMoveWeaponShakeModeData", "ITouchMoveDataController"));
	}


	template <typename T = void> T UpdateStaticTime(uintptr_t inPawn, float deltaTime) {
		return ((T (*)(ITouchMoveDataController*, uintptr_t, float))(Il2CppBase() + 0x0))(this, inPawn, deltaTime);
	}
	template <typename T = float> T GetStaticTime() {
		return ((T (*)(ITouchMoveDataController*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T GetMagnitude(uintptr_t inPawn) {
		return ((T (*)(ITouchMoveDataController*, uintptr_t))(Il2CppBase() + 0x0))(this, inPawn);
	}
	template <typename T = Il2CppVector3> T GetOffsetDir(uintptr_t inPawn) {
		return ((T (*)(ITouchMoveDataController*, uintptr_t))(Il2CppBase() + 0x0))(this, inPawn);
	}

};

}
