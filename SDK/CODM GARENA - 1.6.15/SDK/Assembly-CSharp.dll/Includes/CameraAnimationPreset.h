#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CameraAnimationPreset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CameraAnimationPreset"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& cameraAnimDataList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraAnimData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T GetCameraAnimData(uintptr_t inType) {
		return ((T (*)(CameraAnimationPreset*, uintptr_t))(Il2CppBase() + 0x5318220))(this, inType);
	}

};

}
