#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion {

class V3Tools
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion", "V3Tools"));
	}


	template <typename T = Il2CppVector3> static T Lerp(Il2CppVector3 fromVector, Il2CppVector3 toVector, float weight) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x4F80F80))(0, fromVector, toVector, weight);
	}
	template <typename T = Il2CppVector3> static T Slerp(Il2CppVector3 fromVector, Il2CppVector3 toVector, float weight) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x4F80FF8))(0, fromVector, toVector, weight);
	}
	template <typename T = Il2CppVector3> static T ExtractVertical(Il2CppVector3 v, Il2CppVector3 verticalAxis, float weight) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x4F81070))(0, v, verticalAxis, weight);
	}
	template <typename T = Il2CppVector3> static T ExtractHorizontal(Il2CppVector3 v, Il2CppVector3 normal, float weight) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x4F81108))(0, v, normal, weight);
	}
	template <typename T = Il2CppVector3> static T ClampDirection(Il2CppVector3 direction, Il2CppVector3 normalDirection, float clampWeight, int32_t clampSmoothing, uintptr_t* changed) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, int32_t, uintptr_t*))(Il2CppBase() + 0x4F811E0))(0, direction, normalDirection, clampWeight, clampSmoothing, changed);
	}
	template <typename T = Il2CppVector3> static T ClampDirection_1(Il2CppVector3 direction, Il2CppVector3 normalDirection, float clampWeight, int32_t clampSmoothing, uintptr_t* clampValue) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, int32_t, uintptr_t*))(Il2CppBase() + 0x4F81464))(0, direction, normalDirection, clampWeight, clampSmoothing, clampValue);
	}
	template <typename T = Il2CppVector3> static T LineToPlane(Il2CppVector3 origin, Il2CppVector3 direction, Il2CppVector3 planeNormal, Il2CppVector3 planePoint) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4F816EC))(0, origin, direction, planeNormal, planePoint);
	}
	template <typename T = Il2CppVector3> static T PointToPlane(Il2CppVector3 point, Il2CppVector3 planePosition, Il2CppVector3 planeNormal) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4F81848))(0, point, planePosition, planeNormal);
	}

};

}
