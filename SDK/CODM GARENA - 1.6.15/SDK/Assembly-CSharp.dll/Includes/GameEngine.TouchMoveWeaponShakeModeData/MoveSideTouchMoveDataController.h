#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.TouchMoveWeaponShakeModeData {

class MoveSideTouchMoveDataController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.TouchMoveWeaponShakeModeData", "MoveSideTouchMoveDataController"));
	}

	template <typename T = float> T& OffsetMax() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& OffsetUPMax() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& XRotateMax() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& YRotateMax() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& ZRotateMax() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_staticMoveTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T UpdateStaticTime(uintptr_t inPawn, float deltaTime) {
		return ((T (*)(MoveSideTouchMoveDataController*, uintptr_t, float))(Il2CppBase() + 0x343A65C))(this, inPawn, deltaTime);
	}
	template <typename T = float> T GetStaticTime() {
		return ((T (*)(MoveSideTouchMoveDataController*))(Il2CppBase() + 0x343A814))(this);
	}
	template <typename T = float> T GetMagnitude(uintptr_t inPawn) {
		return ((T (*)(MoveSideTouchMoveDataController*, uintptr_t))(Il2CppBase() + 0x3438914))(this, inPawn);
	}
	template <typename T = Il2CppVector3> T GetOffsetDir(uintptr_t inPawn) {
		return ((T (*)(MoveSideTouchMoveDataController*, uintptr_t))(Il2CppBase() + 0x3438AF8))(this, inPawn);
	}

};

}
