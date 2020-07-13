#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.TouchMoveWeaponShakeModeData {

class JumpDataController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.TouchMoveWeaponShakeModeData", "JumpDataController"));
	}

	template <typename T = float> T& TopTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& TopAngle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& DownTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& DownAngle() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& ClampAngle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& ClampHeight() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T UpdateStaticTime(uintptr_t inPawn, float deltaTime) {
		return ((T (*)(JumpDataController*, uintptr_t, float))(Il2CppBase() + 0x343A60C))(this, inPawn, deltaTime);
	}
	template <typename T = float> T GetStaticTime() {
		return ((T (*)(JumpDataController*))(Il2CppBase() + 0x343A610))(this);
	}
	template <typename T = float> T GetMagnitude(uintptr_t inPawn) {
		return ((T (*)(JumpDataController*, uintptr_t))(Il2CppBase() + 0x343A618))(this, inPawn);
	}
	template <typename T = Il2CppVector3> T GetOffsetDir(uintptr_t inPawn) {
		return ((T (*)(JumpDataController*, uintptr_t))(Il2CppBase() + 0x343A620))(this, inPawn);
	}

};

}
