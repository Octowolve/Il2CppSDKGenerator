#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.TouchMoveWeaponShakeModeData {

class RecoilDataController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.TouchMoveWeaponShakeModeData", "RecoilDataController"));
	}

	template <typename T = float> T& RecoilOnceTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& RecoilOnceLength() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& RecoilLoopTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& RecoilLoopLength() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T UpdateStaticTime(uintptr_t inPawn, float deltaTime) {
		return ((T (*)(RecoilDataController*, uintptr_t, float))(Il2CppBase() + 0x343A840))(this, inPawn, deltaTime);
	}
	template <typename T = float> T GetStaticTime() {
		return ((T (*)(RecoilDataController*))(Il2CppBase() + 0x343A844))(this);
	}
	template <typename T = float> T GetMagnitude(uintptr_t inPawn) {
		return ((T (*)(RecoilDataController*, uintptr_t))(Il2CppBase() + 0x343A84C))(this, inPawn);
	}
	template <typename T = Il2CppVector3> T GetOffsetDir(uintptr_t inPawn) {
		return ((T (*)(RecoilDataController*, uintptr_t))(Il2CppBase() + 0x343A854))(this, inPawn);
	}

};

}
