#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class CubicBezierSplineSolver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "CubicBezierSplineSolver"));
	}


	template <typename T = void> T Close() {
		return ((T (*)(CubicBezierSplineSolver*))(Il2CppBase() + 0x4855964))(this);
	}
	template <typename T = Il2CppVector3> T GetPosition(float time) {
		return ((T (*)(CubicBezierSplineSolver*, float))(Il2CppBase() + 0x4855968))(this, time);
	}
	template <typename T = void> T Display(uintptr_t splineColor) {
		return ((T (*)(CubicBezierSplineSolver*, uintptr_t))(Il2CppBase() + 0x4855C10))(this, splineColor);
	}

};

}
