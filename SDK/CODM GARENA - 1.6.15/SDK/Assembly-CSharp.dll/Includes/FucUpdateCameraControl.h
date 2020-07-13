#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FucUpdateCameraControl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FucUpdateCameraControl"));
	}


	template <typename T = void> T Invoke(uintptr_t refCameraPos, uintptr_t refCameraRot, uintptr_t refLookatPoint, uintptr_t inCamera, uintptr_t inPlayerController, uintptr_t inCameraType) {
		return ((T (*)(FucUpdateCameraControl*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA68F8))(this, refCameraPos, refCameraRot, refLookatPoint, inCamera, inPlayerController, inCameraType);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t refCameraPos, uintptr_t refCameraRot, uintptr_t refLookatPoint, uintptr_t inCamera, uintptr_t inPlayerController, uintptr_t inCameraType, uintptr_t callback, uintptr_t object) {
		return ((T (*)(FucUpdateCameraControl*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DB2050))(this, refCameraPos, refCameraRot, refLookatPoint, inCamera, inPlayerController, inCameraType, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t refCameraPos, uintptr_t refCameraRot, uintptr_t refLookatPoint, uintptr_t result) {
		return ((T (*)(FucUpdateCameraControl*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DB2174))(this, refCameraPos, refCameraRot, refLookatPoint, result);
	}

};

}
