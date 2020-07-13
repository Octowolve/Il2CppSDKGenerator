#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FucLerp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FucLerp"));
	}


	template <typename T = void> T Invoke(uintptr_t refCameraPos, uintptr_t refCameraRot, uintptr_t refLookatPoint) {
		return ((T (*)(FucLerp*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA5F64))(this, refCameraPos, refCameraRot, refLookatPoint);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t refCameraPos, uintptr_t refCameraRot, uintptr_t refLookatPoint, uintptr_t callback, uintptr_t object) {
		return ((T (*)(FucLerp*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DB1F44))(this, refCameraPos, refCameraRot, refLookatPoint, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t refCameraPos, uintptr_t refCameraRot, uintptr_t refLookatPoint, uintptr_t result) {
		return ((T (*)(FucLerp*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DB202C))(this, refCameraPos, refCameraRot, refLookatPoint, result);
	}

};

}
