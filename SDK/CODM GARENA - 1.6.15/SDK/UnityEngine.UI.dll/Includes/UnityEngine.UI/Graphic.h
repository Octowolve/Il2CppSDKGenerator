#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class Graphic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "Graphic"));
	}

	template <typename T = uintptr_t> static T& s_DefaultUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& s_WhiteTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& m_Material() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Color() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_RaycastTarget() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_RectTransform() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_CanvasRender() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_Canvas() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_VertsDirty() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_MaterialDirty() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = uintptr_t> T& m_OnDirtyLayoutCallback() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_OnDirtyVertsCallback() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_OnDirtyMaterialCallback() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& s_Mesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& s_VertexHelper() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> T& m_ColorTweenRunner() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& useLegacyMeshGeneration() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = uintptr_t> static T get_defaultGraphicMaterial() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D14228))(0);
	}
	template <typename T = uintptr_t> T get_color() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D143D4))(this);
	}
	template <typename T = void> T set_color(uintptr_t value) {
		return ((T (*)(Graphic*, uintptr_t))(Il2CppBase() + 0x3D143E4))(this, value);
	}
	template <typename T = bool> T get_raycastTarget() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D14444))(this);
	}
	template <typename T = void> T set_raycastTarget(bool value) {
		return ((T (*)(Graphic*, bool))(Il2CppBase() + 0x3D1444C))(this, value);
	}
	template <typename T = bool> T get_useLegacyMeshGeneration() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D14454))(this);
	}
	template <typename T = void> T set_useLegacyMeshGeneration(bool value) {
		return ((T (*)(Graphic*, bool))(Il2CppBase() + 0x3D14220))(this, value);
	}
	template <typename T = void> T SetAllDirty() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D1445C))(this);
	}
	template <typename T = void> T SetLayoutDirty() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D144A8))(this);
	}
	template <typename T = void> T SetVerticesDirty() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D1461C))(this);
	}
	template <typename T = void> T SetMaterialDirty() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D146F8))(this);
	}
	template <typename T = void> T OnRectTransformDimensionsChange() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D147D4))(this);
	}
	template <typename T = void> T OnBeforeTransformParentChanged() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D148D8))(this);
	}
	template <typename T = void> T OnTransformParentChanged() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D14CB0))(this);
	}
	template <typename T = int32_t> T get_depth() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D15248))(this);
	}
	template <typename T = uintptr_t> T get_rectTransform() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D14588))(this);
	}
	template <typename T = uintptr_t> T get_canvas() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D149D4))(this);
	}
	template <typename T = void> T CacheCanvas() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D14DA0))(this);
	}
	template <typename T = uintptr_t> T get_canvasRenderer() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D15274))(this);
	}
	template <typename T = uintptr_t> T get_defaultMaterial() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D1535C))(this);
	}
	template <typename T = uintptr_t> T get_material() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D153F4))(this);
	}
	template <typename T = void> T set_material(uintptr_t value) {
		return ((T (*)(Graphic*, uintptr_t))(Il2CppBase() + 0x3D154C8))(this, value);
	}
	template <typename T = uintptr_t> T get_materialForRendering() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D1559C))(this);
	}
	template <typename T = uintptr_t> T get_mainTexture() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D15888))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D15938))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D15B08))(this);
	}
	template <typename T = void> T OnCanvasHierarchyChanged() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D15CC8))(this);
	}
	template <typename T = void> T Rebuild(uintptr_t update) {
		return ((T (*)(Graphic*, uintptr_t))(Il2CppBase() + 0x3D15E5C))(this, update);
	}
	template <typename T = void> T LayoutComplete() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D15EF0))(this);
	}
	template <typename T = void> T GraphicUpdateComplete() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D15EF4))(this);
	}
	template <typename T = void> T UpdateMaterial() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D15EF8))(this);
	}
	template <typename T = void> T UpdateGeometry() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D15FC0))(this);
	}
	template <typename T = void> T DoMeshGeneration() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D164DC))(this);
	}
	template <typename T = void> T DoLegacyMeshGeneration() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D15FD4))(this);
	}
	template <typename T = uintptr_t> static T get_workerMesh() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D16A70))(0);
	}
	template <typename T = void> T OnFillVBO(Il2CppList<uintptr_t>* vbo) {
		return ((T (*)(Graphic*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3D16CA4))(this, vbo);
	}
	template <typename T = void> T OnPopulateMesh(uintptr_t m) {
		return ((T (*)(Graphic*, uintptr_t))(Il2CppBase() + 0x3D16CA8))(this, m);
	}
	template <typename T = void> T OnPopulateMesh_1(uintptr_t vh) {
		return ((T (*)(Graphic*, uintptr_t))(Il2CppBase() + 0x3D16DB0))(this, vh);
	}
	template <typename T = void> T OnDidApplyAnimationProperties() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D17270))(this);
	}
	template <typename T = void> T SetNativeSize() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D17280))(this);
	}
	template <typename T = bool> T Raycast(Il2CppVector2 sp, uintptr_t eventCamera) {
		return ((T (*)(Graphic*, Il2CppVector2, uintptr_t))(Il2CppBase() + 0x3D17284))(this, sp, eventCamera);
	}
	template <typename T = Il2CppVector2> T PixelAdjustPoint(Il2CppVector2 point) {
		return ((T (*)(Graphic*, Il2CppVector2))(Il2CppBase() + 0x3D17938))(this, point);
	}
	template <typename T = Il2CppRect> T GetPixelAdjustedRect() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D1707C))(this);
	}
	template <typename T = void> T CrossFadeColor(uintptr_t targetColor, float duration, bool ignoreTimeScale, bool useAlpha) {
		return ((T (*)(Graphic*, uintptr_t, float, bool, bool))(Il2CppBase() + 0x3D17B00))(this, targetColor, duration, ignoreTimeScale, useAlpha);
	}
	template <typename T = void> T CrossFadeColor_1(uintptr_t targetColor, float duration, bool ignoreTimeScale, bool useAlpha, bool useRGB) {
		return ((T (*)(Graphic*, uintptr_t, float, bool, bool, bool))(Il2CppBase() + 0x3D17B50))(this, targetColor, duration, ignoreTimeScale, useAlpha, useRGB);
	}
	template <typename T = uintptr_t> static T CreateColorFromAlpha(float alpha) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x3D17F3C))(0, alpha);
	}
	template <typename T = void> T CrossFadeAlpha(float alpha, float duration, bool ignoreTimeScale) {
		return ((T (*)(Graphic*, float, float, bool))(Il2CppBase() + 0x3D17F7C))(this, alpha, duration, ignoreTimeScale);
	}
	template <typename T = void> T RegisterDirtyLayoutCallback(uintptr_t action) {
		return ((T (*)(Graphic*, uintptr_t))(Il2CppBase() + 0x3D18084))(this, action);
	}
	template <typename T = void> T UnregisterDirtyLayoutCallback(uintptr_t action) {
		return ((T (*)(Graphic*, uintptr_t))(Il2CppBase() + 0x3D18210))(this, action);
	}
	template <typename T = void> T RegisterDirtyVerticesCallback(uintptr_t action) {
		return ((T (*)(Graphic*, uintptr_t))(Il2CppBase() + 0x3D1839C))(this, action);
	}
	template <typename T = void> T UnregisterDirtyVerticesCallback(uintptr_t action) {
		return ((T (*)(Graphic*, uintptr_t))(Il2CppBase() + 0x3D18528))(this, action);
	}
	template <typename T = void> T RegisterDirtyMaterialCallback(uintptr_t action) {
		return ((T (*)(Graphic*, uintptr_t))(Il2CppBase() + 0x3D186B4))(this, action);
	}
	template <typename T = void> T UnregisterDirtyMaterialCallback(uintptr_t action) {
		return ((T (*)(Graphic*, uintptr_t))(Il2CppBase() + 0x3D18840))(this, action);
	}
	template <typename T = uintptr_t> T UnityEngine_UI_ICanvasElement_get_transform() {
		return ((T (*)(Graphic*))(Il2CppBase() + 0x3D18A88))(this);
	}

};

}
