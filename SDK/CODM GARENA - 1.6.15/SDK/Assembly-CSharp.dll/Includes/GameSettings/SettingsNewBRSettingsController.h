#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsNewBRSettingsController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsNewBRSettingsController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& settingModel() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tabList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& bAdjusted() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& PickUpMaxValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& PickUpMinValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGamepadView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadConnectingStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrModeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPickUpTabClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTabInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIPanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitTabsFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterBrUIEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrPlanToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrMirroringAToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrMirroringCToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrCameraModeToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVehicleHPIndicatorToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrUIValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrPlanValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrCameraValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVehicleHPIndicatorValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterPickUpEvents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PickUpRangeToIntValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PickUpIntValueToRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReflexRichSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHolographicSightRichSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_4xTacticalScopeRichSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTacticalScopeRichSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_3xTacticalScopeRichSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHemostaticRichSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFirstAidKitRichSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAdrenalineRichSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGrenadeRichSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSmokeGrenadeRichSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConcussionRichSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNovaGasRichSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlashRichSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClusterGrenadeRichSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSerialBombRichSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMuzzleToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHandleToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLightMagazineToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHeavyMagazineToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShotGunMagazineToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnButtToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBarrelToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReargripToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnIndicatorToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPickUpValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveInstantValueToServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveCachedValueToServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x2862CD4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x2862D78))(this);
	}
	template <typename T = void> T UpdateGamepadView() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x2863944))(this);
	}
	template <typename T = void> T GamepadConnectingStateChanged(uintptr_t message) {
		return ((T (*)(SettingsNewBRSettingsController*, uintptr_t))(Il2CppBase() + 0x2863C8C))(this, message);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x2863FF8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x28641B8))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x28642AC))(this);
	}
	template <typename T = void> T OnBrModeClick(int32_t index) {
		return ((T (*)(SettingsNewBRSettingsController*, int32_t))(Il2CppBase() + 0x2864690))(this, index);
	}
	template <typename T = void> T OnPickUpTabClick(int32_t index) {
		return ((T (*)(SettingsNewBRSettingsController*, int32_t))(Il2CppBase() + 0x2864874))(this, index);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetTabInfoList() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x2864448))(this);
	}
	template <typename T = void> T SetUIPanelDepth(int32_t depth) {
		return ((T (*)(SettingsNewBRSettingsController*, int32_t))(Il2CppBase() + 0x2867C40))(this, depth);
	}
	template <typename T = void> T OnInitTabsFinish(uintptr_t message) {
		return ((T (*)(SettingsNewBRSettingsController*, uintptr_t))(Il2CppBase() + 0x2867DF8))(this, message);
	}
	template <typename T = void> T RegisterBrUIEvent() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x2862EE0))(this);
	}
	template <typename T = void> T OnBrPlanToggleChange() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x2867FC4))(this);
	}
	template <typename T = void> T OnBrMirroringAToggleChange() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x28682D8))(this);
	}
	template <typename T = void> T OnBrMirroringCToggleChange() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x2868448))(this);
	}
	template <typename T = void> T OnBrCameraModeToggleChange() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x28685B8))(this);
	}
	template <typename T = void> T OnVehicleHPIndicatorToggleChange() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x286878C))(this);
	}
	template <typename T = void> T SetBrUIValues() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x2863890))(this);
	}
	template <typename T = void> T SetBrPlanValue() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x2863D40))(this);
	}
	template <typename T = void> T SetBrCameraValue() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x2868910))(this);
	}
	template <typename T = void> T SetVehicleHPIndicatorValue() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x2868AC4))(this);
	}
	template <typename T = void> T RegisterPickUpEvents() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x2864A00))(this);
	}
	template <typename T = int32_t> T PickUpRangeToIntValue(float value) {
		return ((T (*)(SettingsNewBRSettingsController*, float))(Il2CppBase() + 0x2868C38))(this, value);
	}
	template <typename T = float> T PickUpIntValueToRange(int32_t value) {
		return ((T (*)(SettingsNewBRSettingsController*, int32_t))(Il2CppBase() + 0x2868D3C))(this, value);
	}
	template <typename T = void> T OnReflexRichSliderChange() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x2868DF4))(this);
	}
	template <typename T = void> T OnHolographicSightRichSliderChange() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x2869054))(this);
	}
	template <typename T = void> T On_4xTacticalScopeRichSliderChange() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x28691AC))(this);
	}
	template <typename T = void> T OnTacticalScopeRichSliderChange() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x2869304))(this);
	}
	template <typename T = void> T On_3xTacticalScopeRichSliderChange() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x286945C))(this);
	}
	template <typename T = void> T OnHemostaticRichSliderChange() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x28695B4))(this);
	}
	template <typename T = void> T OnFirstAidKitRichSliderChange() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x286970C))(this);
	}
	template <typename T = void> T OnAdrenalineRichSliderChange() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x2869864))(this);
	}
	template <typename T = void> T OnGrenadeRichSliderChange() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x28699BC))(this);
	}
	template <typename T = void> T OnSmokeGrenadeRichSliderChange() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x2869B14))(this);
	}
	template <typename T = void> T OnConcussionRichSliderChange() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x2869C6C))(this);
	}
	template <typename T = void> T OnNovaGasRichSliderChange() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x2869DC4))(this);
	}
	template <typename T = void> T OnFlashRichSliderChange() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x2869F1C))(this);
	}
	template <typename T = void> T OnClusterGrenadeRichSliderChange() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x286A074))(this);
	}
	template <typename T = void> T OnSerialBombRichSliderChange() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x286A1CC))(this);
	}
	template <typename T = void> T OnMuzzleToggleChange() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x286A324))(this);
	}
	template <typename T = void> T OnHandleToggleChange() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x286A46C))(this);
	}
	template <typename T = void> T OnLightMagazineToggleChange() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x286A5B4))(this);
	}
	template <typename T = void> T OnHeavyMagazineToggleChange() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x286A6FC))(this);
	}
	template <typename T = void> T OnShotGunMagazineToggleChange() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x286A844))(this);
	}
	template <typename T = void> T OnButtToggleChange() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x286A98C))(this);
	}
	template <typename T = void> T OnBarrelToggleChange() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x286AAD4))(this);
	}
	template <typename T = void> T OnReargripToggleChange() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x286AC1C))(this);
	}
	template <typename T = void> T OnIndicatorToggleChange() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x286AD64))(this);
	}
	template <typename T = void> T SetPickUpValues() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x2866304))(this);
	}
	template <typename T = void> T SaveInstantValueToServer() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x28681C4))(this);
	}
	template <typename T = void> T SaveCachedValueToServer() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x2868F4C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x286AEAC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x286AEB4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x286AEBC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x286AEC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(SettingsNewBRSettingsController*))(Il2CppBase() + 0x286AECC))(this);
	}

};

}
