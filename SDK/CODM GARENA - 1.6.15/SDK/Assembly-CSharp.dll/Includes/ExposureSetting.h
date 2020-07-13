#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExposureSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExposureSetting"));
	}

	template <typename T = float> static T& maxExposureEV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& minExposureEV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& exposureEV() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& useRealCameraParameter() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_ShutterSpeed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_ISO() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_Aperture() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_UseAutoExposure() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> static T& minMidGrey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& maxMidGrey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& neutralGrey() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& maxDynamicEv() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& minDynamicEv() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& lit2darkSpeed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& dark2litSpeed() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& probeForwardDistance() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& probeHitBackwardOffset() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& forwardDist() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& checkInterval() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& previewWithLightprobeInEditor() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& autoEvProcessor() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
