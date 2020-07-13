#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsNewSystem2Controller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsNewSystem2Controller"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tabList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& settingModel() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& bAdjusted() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_curSelectedGraphicQualityToggle() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> static T& kToggleIndex_Flunt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kToggleIndex_Standard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kToggleIndex_High() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kToggleIndex_VeryHigh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kToggleIndex_Extreme() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& IsLowGraphic() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& IsRemembered() {
		return *(T*)((uintptr_t)this + 0x51);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGraphicClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAudioClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessSpecialVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTabInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIPanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitTabsFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterGraphicUIEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGraphicCantSelectClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGraphicQualityToggleChange1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGraphicQualityToggleChange2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGraphicQualityToggleChange3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGraphicQualityToggleChange4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGraphicQualityToggleChange5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGraphicQualityToggleChangeImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGraphicQualityToggleChangeInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFrameRateToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHdrToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDofToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableMSAAToggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMSAAToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableBloomToggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBloomToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableShadowToggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShadowToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableRagDollToggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisableColliderClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRagDollToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrGraphicStyleToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGraphicDisableBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpGraphicStyleToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAdjustBrightnessSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGraphicUIValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RememberLowGraphic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGraphicQualityValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshFrameRateSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFrameRateValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHdrAndDofValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMSAAValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBloomValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShadowValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRagDollValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrGraphicStyleValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowStyleInLowGraphicQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPvpGraphicStyleValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAdjustScreenValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAdjustBrightnessValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterAudioUIEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpLanguageToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMainVolumeToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMainVolumeSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUiVolumeToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUiVolumeSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBgmVolumeToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBgmVolumeSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEffectVolumeToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEffectVolumeSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTeammateToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTeammateSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMicrophoneToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMicrophoneSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHrtfToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAudioUIValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPvpLanguageValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMainVolumeValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUiVolumeValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBgmVolumeValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEffectVolumeValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTeammateValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMicrophoneValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHrtfValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSliderColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetToggleValueByZero() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCustomAnchorBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowNoneSide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmMessageBoxClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowCurvedSide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveInstantValueToServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveCachedValueToServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A040C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A04B0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A3764))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A3B98))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A3F58))(this);
	}
	template <typename T = void> T OnGraphicClick(int32_t index) {
		return ((T (*)(SettingsNewSystem2Controller*, int32_t))(Il2CppBase() + 0x28A4600))(this, index);
	}
	template <typename T = void> T OnAudioClick(int32_t index) {
		return ((T (*)(SettingsNewSystem2Controller*, int32_t))(Il2CppBase() + 0x28A4880))(this, index);
	}
	template <typename T = void> T ProcessSpecialVersion() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A439C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetTabInfoList() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A4154))(this);
	}
	template <typename T = void> T SetUIPanelDepth(int32_t depth) {
		return ((T (*)(SettingsNewSystem2Controller*, int32_t))(Il2CppBase() + 0x28A4AE0))(this, depth);
	}
	template <typename T = void> T OnInitTabsFinish(uintptr_t message) {
		return ((T (*)(SettingsNewSystem2Controller*, uintptr_t))(Il2CppBase() + 0x28A4C98))(this, message);
	}
	template <typename T = void> T RegisterGraphicUIEvent() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A0668))(this);
	}
	template <typename T = void> T OnGraphicCantSelectClick(uintptr_t obj) {
		return ((T (*)(SettingsNewSystem2Controller*, uintptr_t))(Il2CppBase() + 0x28A4E48))(this, obj);
	}
	template <typename T = void> T OnGraphicQualityToggleChange1() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A4FE4))(this);
	}
	template <typename T = void> T OnGraphicQualityToggleChange2() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A52D0))(this);
	}
	template <typename T = void> T OnGraphicQualityToggleChange3() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A53B4))(this);
	}
	template <typename T = void> T OnGraphicQualityToggleChange4() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A5498))(this);
	}
	template <typename T = void> T OnGraphicQualityToggleChange5() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A557C))(this);
	}
	template <typename T = void> T OnGraphicQualityToggleChangeImpl(int32_t toToggleIndex) {
		return ((T (*)(SettingsNewSystem2Controller*, int32_t))(Il2CppBase() + 0x28A50C8))(this, toToggleIndex);
	}
	template <typename T = void> T OnGraphicQualityToggleChangeInternal(uintptr_t toLevel) {
		return ((T (*)(SettingsNewSystem2Controller*, uintptr_t))(Il2CppBase() + 0x28A5660))(this, toLevel);
	}
	template <typename T = void> T OnFrameRateToggleChange() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A687C))(this);
	}
	template <typename T = void> T OnHdrToggleChange() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A6ACC))(this);
	}
	template <typename T = void> T OnDofToggleChange() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A6BE8))(this);
	}
	template <typename T = void> T EnableMSAAToggle(bool bEnable) {
		return ((T (*)(SettingsNewSystem2Controller*, bool))(Il2CppBase() + 0x28A5B80))(this, bEnable);
	}
	template <typename T = void> T OnMSAAToggleChange() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A6E64))(this);
	}
	template <typename T = void> T EnableBloomToggle(bool bEnable, bool enough2Enable) {
		return ((T (*)(SettingsNewSystem2Controller*, bool, bool))(Il2CppBase() + 0x28A5EC4))(this, bEnable, enough2Enable);
	}
	template <typename T = void> T OnBloomToggleChange() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A71D8))(this);
	}
	template <typename T = void> T EnableShadowToggle(bool bEnable, bool enough2Enable) {
		return ((T (*)(SettingsNewSystem2Controller*, bool, bool))(Il2CppBase() + 0x28A60E4))(this, bEnable, enough2Enable);
	}
	template <typename T = void> T OnShadowToggleChange() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A7344))(this);
	}
	template <typename T = void> T EnableRagDollToggle(bool bEnable) {
		return ((T (*)(SettingsNewSystem2Controller*, bool))(Il2CppBase() + 0x28A6304))(this, bEnable);
	}
	template <typename T = void> T OnDisableColliderClick(uintptr_t o) {
		return ((T (*)(SettingsNewSystem2Controller*, uintptr_t))(Il2CppBase() + 0x28A7624))(this, o);
	}
	template <typename T = void> T OnRagDollToggleChange() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A77C0))(this);
	}
	template <typename T = void> T OnBrGraphicStyleToggleChange() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A7964))(this);
	}
	template <typename T = void> T OnGraphicDisableBtnClick(uintptr_t o) {
		return ((T (*)(SettingsNewSystem2Controller*, uintptr_t))(Il2CppBase() + 0x28A7C2C))(this, o);
	}
	template <typename T = void> T OnPvpGraphicStyleToggleChange() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A7DC8))(this);
	}
	template <typename T = void> T OnAdjustBrightnessSliderChange() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A7F78))(this);
	}
	template <typename T = void> T SetGraphicUIValues() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A4784))(this);
	}
	template <typename T = void> T RememberLowGraphic() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A8794))(this);
	}
	template <typename T = void> T SetGraphicQualityValue() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A80F0))(this);
	}
	template <typename T = void> T RefreshFrameRateSetting() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A5A6C))(this);
	}
	template <typename T = void> T SetFrameRateValue() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A88D4))(this);
	}
	template <typename T = void> T SetHdrAndDofValue() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A9084))(this);
	}
	template <typename T = void> T SetMSAAValue() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A927C))(this);
	}
	template <typename T = void> T SetBloomValue() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A9458))(this);
	}
	template <typename T = void> T SetShadowValue() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A95FC))(this);
	}
	template <typename T = void> T SetRagDollValue() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A97A0))(this);
	}
	template <typename T = void> T SetBrGraphicStyleValue() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A9960))(this);
	}
	template <typename T = void> T ShowStyleInLowGraphicQuality() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A66B0))(this);
	}
	template <typename T = void> T SetPvpGraphicStyleValue() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A9B14))(this);
	}
	template <typename T = void> T SetAdjustScreenValue() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A9CC0))(this);
	}
	template <typename T = void> T SetAdjustBrightnessValue() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A9F7C))(this);
	}
	template <typename T = void> T RegisterAudioUIEvent() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A2534))(this);
	}
	template <typename T = void> T OnPvpLanguageToggleChange() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28AA0F0))(this);
	}
	template <typename T = void> T OnMainVolumeToggleChange() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28AA528))(this);
	}
	template <typename T = void> T OnMainVolumeSliderChange() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28AA938))(this);
	}
	template <typename T = void> T OnUiVolumeToggleChange() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28AAD40))(this);
	}
	template <typename T = void> T OnUiVolumeSliderChange() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28AAF70))(this);
	}
	template <typename T = void> T OnBgmVolumeToggleChange() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28AB150))(this);
	}
	template <typename T = void> T OnBgmVolumeSliderChange() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28AB380))(this);
	}
	template <typename T = void> T OnEffectVolumeToggleChange() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28AB560))(this);
	}
	template <typename T = void> T OnEffectVolumeSliderChange() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28AB790))(this);
	}
	template <typename T = void> T OnTeammateToggleChange() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28AB970))(this);
	}
	template <typename T = void> T OnTeammateSliderChange() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28ABBA0))(this);
	}
	template <typename T = void> T OnMicrophoneToggleChange() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28ABD80))(this);
	}
	template <typename T = void> T OnMicrophoneSliderChange() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28ABFB0))(this);
	}
	template <typename T = void> T OnHrtfToggleChange() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28AC18C))(this);
	}
	template <typename T = void> T SetAudioUIValues() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A4A04))(this);
	}
	template <typename T = void> T SetPvpLanguageValue() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28ACFBC))(this);
	}
	template <typename T = void> T SetMainVolumeValue() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28AC2B8))(this);
	}
	template <typename T = void> T SetUiVolumeValue() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28AC4A8))(this);
	}
	template <typename T = void> T SetBgmVolumeValue() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28AC698))(this);
	}
	template <typename T = void> T SetEffectVolumeValue() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28AC888))(this);
	}
	template <typename T = void> T SetTeammateValue() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28ACA78))(this);
	}
	template <typename T = void> T SetMicrophoneValue() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28ACC68))(this);
	}
	template <typename T = void> T SetHrtfValue() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28ACE58))(this);
	}
	template <typename T = void> T SetSliderColor(uintptr_t slider, bool isActive) {
		return ((T (*)(SettingsNewSystem2Controller*, uintptr_t, bool))(Il2CppBase() + 0x28AA754))(this, slider, isActive);
	}
	template <typename T = void> T SetToggleValueByZero(uintptr_t toggle, float value) {
		return ((T (*)(SettingsNewSystem2Controller*, uintptr_t, float))(Il2CppBase() + 0x28AAB14))(this, toggle, value);
	}
	template <typename T = void> T OnCustomAnchorBtnClick() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28AD158))(this);
	}
	template <typename T = void> T OnShowNoneSide() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28AD7A0))(this);
	}
	template <typename T = void> T OnConfirmMessageBoxClick(uintptr_t result, int32_t userContext) {
		return ((T (*)(SettingsNewSystem2Controller*, uintptr_t, int32_t))(Il2CppBase() + 0x28ADBA8))(this, result, userContext);
	}
	template <typename T = void> T OnShowCurvedSide() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28ADCFC))(this);
	}
	template <typename T = void> T SaveInstantValueToServer() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28A7B18))(this);
	}
	template <typename T = void> T SaveCachedValueToServer() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28AAC38))(this);
	}
	template <typename T = void> T EnableMSAATogglem__0() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28AE1D0))(this);
	}
	template <typename T = void> T EnableRagDollTogglem__1() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28AE34C))(this);
	}
	template <typename T = void> T RefreshFrameRateSettingm__2() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28AE4C8))(this);
	}
	template <typename T = void> T RegisterAudioUIEventm__3() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28AE4CC))(this);
	}
	template <typename T = void> T RegisterAudioUIEventm__4() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28AE59C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28AE66C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28AE674))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28AE67C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28AE684))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(SettingsNewSystem2Controller*))(Il2CppBase() + 0x28AE68C))(this);
	}

};

}
