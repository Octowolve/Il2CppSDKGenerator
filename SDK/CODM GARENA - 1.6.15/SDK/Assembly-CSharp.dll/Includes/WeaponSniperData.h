#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponSniperData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponSniperData"));
	}

	template <typename T = float> T& ZoomInFOVTime() {
		return *(T*)((uintptr_t)this + 0x34C);
	}
	template <typename T = float> T& ZoomOutFOVTime() {
		return *(T*)((uintptr_t)this + 0x350);
	}
	template <typename T = float> T& ZoomingFOV() {
		return *(T*)((uintptr_t)this + 0x354);
	}
	template <typename T = float> T& ZoomingDoubleFOV() {
		return *(T*)((uintptr_t)this + 0x358);
	}
	template <typename T = float> T& ZoomingMovementScale() {
		return *(T*)((uintptr_t)this + 0x35C);
	}
	template <typename T = float> T& ZoomingDoubleMovementScale() {
		return *(T*)((uintptr_t)this + 0x360);
	}
	template <typename T = float> T& CameraAddRotateRate() {
		return *(T*)((uintptr_t)this + 0x364);
	}
	template <typename T = float> T& ZoomingDoubleCameraAddRotateRate() {
		return *(T*)((uintptr_t)this + 0x368);
	}
	template <typename T = float> T& IgnoreShotSpreadTime() {
		return *(T*)((uintptr_t)this + 0x36C);
	}
	template <typename T = float> T& OverrideAimAssistanceSpeed() {
		return *(T*)((uintptr_t)this + 0x370);
	}
	template <typename T = bool> T& EnableContinuousFire() {
		return *(T*)((uintptr_t)this + 0x374);
	}
	template <typename T = float> T& ZoomingOutDisperse() {
		return *(T*)((uintptr_t)this + 0x378);
	}
	template <typename T = float> T& PVEZoomingOutDisperse() {
		return *(T*)((uintptr_t)this + 0x37C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uintptr_t targetType, uintptr_t mask, uintptr_t index, uintptr_t interrupt) {
		return ((T (*)(WeaponSniperData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C56B54))(this, bytes, position, targetType, mask, index, interrupt);
	}
	template <typename T = void> T xLuaBaseProxy_Deserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(WeaponSniperData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C57258))(this, P0, P1, P2, P3, P4, P5);
	}

};

}
