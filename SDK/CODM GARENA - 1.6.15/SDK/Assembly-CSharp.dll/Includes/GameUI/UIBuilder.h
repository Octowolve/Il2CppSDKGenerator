#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIBuilder"));
	}

	template <typename T = int32_t> static T& PANEL_HEIGHT_DEFAULT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& ADAPTE_ASPECTRATIO_MIN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& ADAPTE_ASPECTRATIO_MAX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ADAPTE_TOPBAR_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ADAPTE_RIGHTWINDOW_MARGIN_TOP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ADAPTE_RIGHTWINDOW_MARGIN_BOTTOM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ADAPTE_RIGHTWINDOW_MARGIN_RIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ADAPTE_RIGHTWINDOW_WIDTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ADAPTE_RIGHTWINDOW_TAB_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ZDEPTH_UI_LOWEST_BACKGROUND() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ZDEPTH_EFFECT_LOW() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ZDEPTH_UI_LOW() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ZDEPTH_EFFECT_HIGH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ZDEPTH_UI_HIGH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ZDEPTH_UI_HIGHER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& PDEPTH_HIGHEST() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& PDEPTH_POPUPWINDOW_MAX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& PDEPTH_POPUPWINDOW_MIN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ZDEPTH_NORMALCAMERA_CLIPPING_PLANS_MIN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ZDEPTH_NORMALCAMERA_CLIPPING_PLANS_MAX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ZDEPTH_POPUPCAMERA_CLIPPING_PLANS_MIN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ZDEPTH_POPUPCAMERA_CLIPPING_PLANS_MAX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ZDEPTH_POPUPCAMERA_DEPTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& DistanceToHorizontalBorder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& DistanceToTop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& DistanceToNoTabBottom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& DistanceToTabBottom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& scaleWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = int32_t> static T& scaleHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = int32_t> static T& m_CachedPanelWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = int32_t> static T& m_CachedPanelHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = int32_t> static T& kPanelStandardWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> T& anchors() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& panels() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> static T& loadedAssetIdList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = bool> static T& enableRecordAssetTypeId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& m_BlurHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDesignWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDesignHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetScreenSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldReduceResolution() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetCachedPanelHeightAndWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCachedPanelHeightAndWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPanelHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPanelWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBGSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPanelScreenScaleParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRightWidowWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRightWindowHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputePanelSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPanelFixed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFullScreenEqualRatioHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFullScreenEqualRatioWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFullScreenWithDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAssetTypeIdRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadAllUIAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InstanceAssetGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_InstanceAssetGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InstanceAssetGameObjectFast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableBlurCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableMainCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableAllUICamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnchor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInCurrentScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIRootChildPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLayerPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateUIRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustWidgetDepthForDrawCallOptimization() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}

	template <typename T = int32_t> static T GetDesignWidth() {
		return ((T (*)(void *))(Il2CppBase() + 0x29CA2FC))(0);
	}
	template <typename T = int32_t> static T GetDesignHeight() {
		return ((T (*)(void *))(Il2CppBase() + 0x29CA46C))(0);
	}
	template <typename T = void> static T ResetScreenSize(bool bForce) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x29CA5DC))(0, bForce);
	}
	template <typename T = bool> static T ShouldReduceResolution() {
		return ((T (*)(void *))(Il2CppBase() + 0x29CAC80))(0);
	}
	template <typename T = void> static T ResetCachedPanelHeightAndWidth() {
		return ((T (*)(void *))(Il2CppBase() + 0x29CADE4))(0);
	}
	template <typename T = void> static T UpdateCachedPanelHeightAndWidth() {
		return ((T (*)(void *))(Il2CppBase() + 0x29CAF04))(0);
	}
	template <typename T = int32_t> static T GetPanelHeight() {
		return ((T (*)(void *))(Il2CppBase() + 0x29CB254))(0);
	}
	template <typename T = int32_t> static T GetPanelWidth() {
		return ((T (*)(void *))(Il2CppBase() + 0x29CB428))(0);
	}
	template <typename T = Il2CppVector2> static T GetBGSize(Il2CppVector2 size) {
		return ((T (*)(void *, Il2CppVector2))(Il2CppBase() + 0x29CB5FC))(0, size);
	}
	template <typename T = float> static T GetPanelScreenScaleParam() {
		return ((T (*)(void *))(Il2CppBase() + 0x29CB794))(0);
	}
	template <typename T = int32_t> static T GetRightWidowWidth() {
		return ((T (*)(void *))(Il2CppBase() + 0x29CB894))(0);
	}
	template <typename T = int32_t> static T GetRightWindowHeight() {
		return ((T (*)(void *))(Il2CppBase() + 0x29CB95C))(0);
	}
	template <typename T = void> static T ComputePanelSize() {
		return ((T (*)(void *))(Il2CppBase() + 0x29CBA48))(0);
	}
	template <typename T = bool> static T IsPanelFixed() {
		return ((T (*)(void *))(Il2CppBase() + 0x29CBC34))(0);
	}
	template <typename T = void> static T GetFullScreenEqualRatioHeight(int32_t originalWidth, int32_t originalHeight, uintptr_t* width, uintptr_t* height) {
		return ((T (*)(void *, int32_t, int32_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x29CBD2C))(0, originalWidth, originalHeight, width, height);
	}
	template <typename T = void> static T GetFullScreenEqualRatioWidth(int32_t originalWidth, int32_t originalHeight, uintptr_t* width, uintptr_t* height) {
		return ((T (*)(void *, int32_t, int32_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x29CBEF0))(0, originalWidth, originalHeight, width, height);
	}
	template <typename T = void> static T GetFullScreenWithDefault(uintptr_t* width, uintptr_t* height) {
		return ((T (*)(void *, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x29CC0C0))(0, width, height);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(UIBuilder*))(Il2CppBase() + 0x29CC1D4))(this);
	}
	template <typename T = void> static T AddAssetTypeIdRecord(uintptr_t assetTypeID) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29CC2D4))(0, assetTypeID);
	}
	template <typename T = void> static T UnloadAllUIAsset() {
		return ((T (*)(void *))(Il2CppBase() + 0x29CC4D8))(0);
	}
	template <typename T = uintptr_t> static T InstanceAssetGameObject(uintptr_t assetTypeID, uintptr_t parent) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3354420))(0, assetTypeID, parent);
	}
	template <typename T = uintptr_t> static T InstanceAssetGameObject_1(uintptr_t type, uintptr_t assetTypeID, uintptr_t parent) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x29CC7B0))(0, type, assetTypeID, parent);
	}
	template <typename T = uintptr_t> static T InstanceAssetGameObjectFast(uintptr_t assetTypeID, uintptr_t parent, Il2CppVector3 localPosition, bool display) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppVector3, bool))(Il2CppBase() + 0x3354624))(0, assetTypeID, parent, localPosition, display);
	}
	template <typename T = void> static T EnableBlurCamera(bool enable, uintptr_t uiTexture) {
		return ((T (*)(void *, bool, uintptr_t))(Il2CppBase() + 0x29CCC48))(0, enable, uiTexture);
	}
	template <typename T = void> static T EnableMainCamera(bool enable) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x29CCD18))(0, enable);
	}
	template <typename T = void> static T EnableAllUICamera(bool enable) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x29CCF20))(0, enable);
	}
	template <typename T = uintptr_t> T GetAnchor(uintptr_t attachAnchor, uintptr_t layer, bool bChild) {
		return ((T (*)(UIBuilder*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x29CD17C))(this, attachAnchor, layer, bChild);
	}
	template <typename T = bool> T IsInCurrentScene(uintptr_t go) {
		return ((T (*)(UIBuilder*, uintptr_t))(Il2CppBase() + 0x29CD628))(this, go);
	}
	template <typename T = uintptr_t> T GetUIRootChildPanel(uintptr_t layer) {
		return ((T (*)(UIBuilder*, uintptr_t))(Il2CppBase() + 0x29CD8F4))(this, layer);
	}
	template <typename T = uintptr_t> T GetLayerPanel(uintptr_t layer) {
		return ((T (*)(UIBuilder*, uintptr_t))(Il2CppBase() + 0x29CDF94))(this, layer);
	}
	template <typename T = int32_t> T GetLayerId(uintptr_t layer, uintptr_t layerNameValue) {
		return ((T (*)(UIBuilder*, uintptr_t, uintptr_t))(Il2CppBase() + 0x29CE480))(this, layer, layerNameValue);
	}
	template <typename T = uintptr_t> T CreateUIRoot(int32_t layerId, Il2CppString* layerNameValue) {
		return ((T (*)(UIBuilder*, int32_t, Il2CppString*))(Il2CppBase() + 0x29CE6E8))(this, layerId, layerNameValue);
	}
	template <typename T = void> static T AdjustWidgetDepthForDrawCallOptimization() {
		return ((T (*)(void *))(Il2CppBase() + 0x29CE9C0))(0);
	}
	template <typename T = int32_t> static T AdjustWidgetDepthForDrawCallOptimizationm__0(void* v1, void* v2) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x29CF960))(0, v1, v2);
	}

};

}
