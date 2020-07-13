#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class CatmullRomSplineSolver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "CatmullRomSplineSolver"));
	}


	template <typename T = void> T Close() {
		return ((T (*)(CatmullRomSplineSolver*))(Il2CppBase() + 0x48546DC))(this);
	}
	template <typename T = Il2CppVector3> T GetPosition(float time) {
		return ((T (*)(CatmullRomSplineSolver*, float))(Il2CppBase() + 0x4854FD0))(this, time);
	}
	template <typename T = void> T Display(uintptr_t splineColor) {
		return ((T (*)(CatmullRomSplineSolver*, uintptr_t))(Il2CppBase() + 0x48555A8))(this, splineColor);
	}

};

}
