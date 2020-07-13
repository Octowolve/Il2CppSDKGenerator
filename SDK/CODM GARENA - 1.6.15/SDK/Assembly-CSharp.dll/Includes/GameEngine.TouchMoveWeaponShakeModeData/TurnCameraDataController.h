#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.TouchMoveWeaponShakeModeData {

class TurnCameraDataController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.TouchMoveWeaponShakeModeData", "TurnCameraDataController"));
	}

	template <typename T = float> T& MaxMagnitude() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& OffsetSpeed() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& Dex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& DynamicSpeed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& BackTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_staticMoveTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T UpdateStaticTime(uintptr_t inPawn, float deltaTime) {
		return ((T (*)(TurnCameraDataController*, uintptr_t, float))(Il2CppBase() + 0x3439654))(this, inPawn, deltaTime);
	}
	template <typename T = float> T GetStaticTime() {
		return ((T (*)(TurnCameraDataController*))(Il2CppBase() + 0x34396E4))(this);
	}
	template <typename T = float> T GetMagnitude(uintptr_t inPawn) {
		return ((T (*)(TurnCameraDataController*, uintptr_t))(Il2CppBase() + 0x3439954))(this, inPawn);
	}
	template <typename T = Il2CppVector3> T GetOffsetDir(uintptr_t inPawn) {
		return ((T (*)(TurnCameraDataController*, uintptr_t))(Il2CppBase() + 0x3439B80))(this, inPawn);
	}

};

}
