#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Core {

class Utils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Core", "Utils"));
	}


	template <typename T = Il2CppVector3> static T Vector3FromAngle(float degrees, float magnitude) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x44A8DC0))(0, degrees, magnitude);
	}
	template <typename T = float> static T Angle2D(Il2CppVector3 from, Il2CppVector3 to) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x44A8ECC))(0, from, to);
	}

};

}
