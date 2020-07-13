#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FucOnFPSHitProjection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FucOnFPSHitProjection"));
	}


	template <typename T = bool> T Invoke(Il2CppVector3 inHitPos, Il2CppVector3 inCameraPos, Il2CppVector3 inDir, float inNearClip, float inHeight, bool up) {
		return ((T (*)(FucOnFPSHitProjection*, Il2CppVector3, Il2CppVector3, Il2CppVector3, float, float, bool))(Il2CppBase() + 0x1DCC634))(this, inHitPos, inCameraPos, inDir, inNearClip, inHeight, up);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppVector3 inHitPos, Il2CppVector3 inCameraPos, Il2CppVector3 inDir, float inNearClip, float inHeight, bool up, uintptr_t callback, uintptr_t object) {
		return ((T (*)(FucOnFPSHitProjection*, Il2CppVector3, Il2CppVector3, Il2CppVector3, float, float, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DDBEB0))(this, inHitPos, inCameraPos, inDir, inNearClip, inHeight, up, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(FucOnFPSHitProjection*, uintptr_t))(Il2CppBase() + 0x1DDC024))(this, result);
	}

};

}
