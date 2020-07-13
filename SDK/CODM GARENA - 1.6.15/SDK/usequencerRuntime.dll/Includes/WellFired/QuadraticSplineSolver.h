#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class QuadraticSplineSolver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "QuadraticSplineSolver"));
	}


	template <typename T = float> T quadBezierLength(Il2CppVector3 startPoint, Il2CppVector3 controlPoint, Il2CppVector3 endPoint) {
		return ((T (*)(QuadraticSplineSolver*, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4858CF0))(this, startPoint, controlPoint, endPoint);
	}
	template <typename T = void> T Close() {
		return ((T (*)(QuadraticSplineSolver*))(Il2CppBase() + 0x4859224))(this);
	}
	template <typename T = Il2CppVector3> T GetPosition(float time) {
		return ((T (*)(QuadraticSplineSolver*, float))(Il2CppBase() + 0x4859228))(this, time);
	}
	template <typename T = void> T Display(uintptr_t splineColor) {
		return ((T (*)(QuadraticSplineSolver*, uintptr_t))(Il2CppBase() + 0x4859430))(this, splineColor);
	}

};

}
