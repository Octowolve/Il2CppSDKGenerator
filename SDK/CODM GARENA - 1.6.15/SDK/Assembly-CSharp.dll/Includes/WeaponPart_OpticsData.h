#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponPartOpticsData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponPart_OpticsData"));
	}

	template <typename T = float> T& ZoomInFOVTime() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& ZoomOutFOVTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& ZoomingFOV() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& AimingMovementScaleAdd() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& CameraAddRotateRate() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& IgnoreShotSpreadTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& ZoomingGetHitPunchAngleX() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& ZoomingGetHitPunchAngleXDecreseSpeed() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& IsThermalSight() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AutoAssistAimRanges() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& MaxDamapAssitAimRateScaleAdd() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& DampAssitAimRateFactorScaleAdd() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& MagnAssitAimRateFactorScaleAdd() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppString*> T& TexCrossHairName() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& OpticsType() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& OpticsType_IntValue() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& IsNightVision() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& NightVisionRange() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& ChangePercent_1PMode_Open() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& ChangePercent_1PMode_Close() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& CrossHairAssetID() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& WeaponAimModifyPercent() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& AimingFireAnimPercent() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_OpticsType_Enum() {
		return ((T (*)(WeaponPartOpticsData*))(Il2CppBase() + 0x4C513F0))(this);
	}
	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uintptr_t targetType, uintptr_t mask, uintptr_t index, uintptr_t interrupt) {
		return ((T (*)(WeaponPartOpticsData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C514D0))(this, bytes, position, targetType, mask, index, interrupt);
	}
	template <typename T = void> T xLuaBaseProxy_Deserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(WeaponPartOpticsData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C52004))(this, P0, P1, P2, P3, P4, P5);
	}

};

}
