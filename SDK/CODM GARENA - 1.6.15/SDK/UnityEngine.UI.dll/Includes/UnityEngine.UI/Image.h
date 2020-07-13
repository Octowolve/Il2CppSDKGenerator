#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class Image
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "Image"));
	}

	template <typename T = uintptr_t> static T& s_ETC1DefaultUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_Sprite() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_OverrideSprite() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_Type() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& m_PreserveAspect() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& m_FillCenter() {
		return *(T*)((uintptr_t)this + 0x71);
	}
	template <typename T = uintptr_t> T& m_FillMethod() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& m_FillAmount() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& m_FillClockwise() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& m_FillOrigin() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& m_AlphaHitTestMinimumThreshold() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& s_VertScratch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& s_UVScratch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& s_Xy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& s_Uv() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_sprite() {
		return ((T (*)(Image*))(Il2CppBase() + 0x3D0FD4C))(this);
	}
	template <typename T = void> T set_sprite(uintptr_t value) {
		return ((T (*)(Image*, uintptr_t))(Il2CppBase() + 0x3D0FD64))(this, value);
	}
	template <typename T = uintptr_t> T get_overrideSprite() {
		return ((T (*)(Image*))(Il2CppBase() + 0x3D1DE0C))(this);
	}
	template <typename T = void> T set_overrideSprite(uintptr_t value) {
		return ((T (*)(Image*, uintptr_t))(Il2CppBase() + 0x3D1DED0))(this, value);
	}
	template <typename T = uintptr_t> T get_activeSprite() {
		return ((T (*)(Image*))(Il2CppBase() + 0x3D1DE10))(this);
	}
	template <typename T = uintptr_t> T get_type() {
		return ((T (*)(Image*))(Il2CppBase() + 0x3D1DF7C))(this);
	}
	template <typename T = void> T set_type(uintptr_t value) {
		return ((T (*)(Image*, uintptr_t))(Il2CppBase() + 0x3D1DF84))(this, value);
	}
	template <typename T = bool> T get_preserveAspect() {
		return ((T (*)(Image*))(Il2CppBase() + 0x3D1E030))(this);
	}
	template <typename T = void> T set_preserveAspect(bool value) {
		return ((T (*)(Image*, bool))(Il2CppBase() + 0x3D1E038))(this, value);
	}
	template <typename T = bool> T get_fillCenter() {
		return ((T (*)(Image*))(Il2CppBase() + 0x3D1E0E4))(this);
	}
	template <typename T = void> T set_fillCenter(bool value) {
		return ((T (*)(Image*, bool))(Il2CppBase() + 0x3D1E0EC))(this, value);
	}
	template <typename T = uintptr_t> T get_fillMethod() {
		return ((T (*)(Image*))(Il2CppBase() + 0x3D1E198))(this);
	}
	template <typename T = void> T set_fillMethod(uintptr_t value) {
		return ((T (*)(Image*, uintptr_t))(Il2CppBase() + 0x3D1E1A0))(this, value);
	}
	template <typename T = float> T get_fillAmount() {
		return ((T (*)(Image*))(Il2CppBase() + 0x3D1E254))(this);
	}
	template <typename T = void> T set_fillAmount(float value) {
		return ((T (*)(Image*, float))(Il2CppBase() + 0x3D1E25C))(this, value);
	}
	template <typename T = bool> T get_fillClockwise() {
		return ((T (*)(Image*))(Il2CppBase() + 0x3D1E354))(this);
	}
	template <typename T = void> T set_fillClockwise(bool value) {
		return ((T (*)(Image*, bool))(Il2CppBase() + 0x3D1E35C))(this, value);
	}
	template <typename T = int32_t> T get_fillOrigin() {
		return ((T (*)(Image*))(Il2CppBase() + 0x3D1E408))(this);
	}
	template <typename T = void> T set_fillOrigin(int32_t value) {
		return ((T (*)(Image*, int32_t))(Il2CppBase() + 0x3D1E410))(this, value);
	}
	template <typename T = float> T get_eventAlphaThreshold() {
		return ((T (*)(Image*))(Il2CppBase() + 0x3D1E4BC))(this);
	}
	template <typename T = void> T set_eventAlphaThreshold(float value) {
		return ((T (*)(Image*, float))(Il2CppBase() + 0x3D1E4D8))(this, value);
	}
	template <typename T = float> T get_alphaHitTestMinimumThreshold() {
		return ((T (*)(Image*))(Il2CppBase() + 0x3D1E4D0))(this);
	}
	template <typename T = void> T set_alphaHitTestMinimumThreshold(float value) {
		return ((T (*)(Image*, float))(Il2CppBase() + 0x3D1E4EC))(this, value);
	}
	template <typename T = uintptr_t> static T get_defaultETC1GraphicMaterial() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D1E4F4))(0);
	}
	template <typename T = uintptr_t> T get_mainTexture() {
		return ((T (*)(Image*))(Il2CppBase() + 0x3D1E6A0))(this);
	}
	template <typename T = bool> T get_hasBorder() {
		return ((T (*)(Image*))(Il2CppBase() + 0x3D1E8DC))(this);
	}
	template <typename T = float> T get_pixelsPerUnit() {
		return ((T (*)(Image*))(Il2CppBase() + 0x3D1EA10))(this);
	}
	template <typename T = uintptr_t> T get_material() {
		return ((T (*)(Image*))(Il2CppBase() + 0x3D1EB88))(this);
	}
	template <typename T = void> T set_material(uintptr_t value) {
		return ((T (*)(Image*, uintptr_t))(Il2CppBase() + 0x3D1ED64))(this, value);
	}
	template <typename T = void> T OnBeforeSerialize() {
		return ((T (*)(Image*))(Il2CppBase() + 0x3D1ED68))(this);
	}
	template <typename T = void> T OnAfterDeserialize() {
		return ((T (*)(Image*))(Il2CppBase() + 0x3D1ED6C))(this);
	}
	template <typename T = uintptr_t> T GetDrawingDimensions(bool shouldPreserveAspect) {
		return ((T (*)(Image*, bool))(Il2CppBase() + 0x3D1EE70))(this, shouldPreserveAspect);
	}
	template <typename T = void> T SetNativeSize() {
		return ((T (*)(Image*))(Il2CppBase() + 0x3D1F450))(this);
	}
	template <typename T = void> T OnPopulateMesh(uintptr_t toFill) {
		return ((T (*)(Image*, uintptr_t))(Il2CppBase() + 0x3D1F690))(this, toFill);
	}
	template <typename T = void> T UpdateMaterial() {
		return ((T (*)(Image*))(Il2CppBase() + 0x3D23B0C))(this);
	}
	template <typename T = void> T GenerateSimpleSprite(uintptr_t vh, bool lPreserveAspect) {
		return ((T (*)(Image*, uintptr_t, bool))(Il2CppBase() + 0x3D1F7D4))(this, vh, lPreserveAspect);
	}
	template <typename T = void> T GenerateSlicedSprite(uintptr_t toFill) {
		return ((T (*)(Image*, uintptr_t))(Il2CppBase() + 0x3D1FBC8))(this, toFill);
	}
	template <typename T = void> T GenerateTiledSprite(uintptr_t toFill) {
		return ((T (*)(Image*, uintptr_t))(Il2CppBase() + 0x3D20850))(this, toFill);
	}
	template <typename T = void> static T AddQuad(uintptr_t vertexHelper, Il2CppArray<uintptr_t>* quadPositions, uintptr_t color, Il2CppArray<uintptr_t>* quadUVs) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3D241B4))(0, vertexHelper, quadPositions, color, quadUVs);
	}
	template <typename T = void> static T AddQuad_1(uintptr_t vertexHelper, Il2CppVector2 posMin, Il2CppVector2 posMax, uintptr_t color, Il2CppVector2 uvMin, Il2CppVector2 uvMax) {
		return ((T (*)(void *, uintptr_t, Il2CppVector2, Il2CppVector2, uintptr_t, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x3D23F90))(0, vertexHelper, posMin, posMax, color, uvMin, uvMax);
	}
	template <typename T = uintptr_t> T GetAdjustedBorders(uintptr_t border, Il2CppRect adjustedRect) {
		return ((T (*)(Image*, uintptr_t, Il2CppRect))(Il2CppBase() + 0x3D23C7C))(this, border, adjustedRect);
	}
	template <typename T = void> T GenerateFilledSprite(uintptr_t toFill, bool preserveAspect) {
		return ((T (*)(Image*, uintptr_t, bool))(Il2CppBase() + 0x3D220B0))(this, toFill, preserveAspect);
	}
	template <typename T = bool> static T RadialCut(Il2CppArray<uintptr_t>* xy, Il2CppArray<uintptr_t>* uv, float fill, bool invert, int32_t corner) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, float, bool, int32_t))(Il2CppBase() + 0x3D242E8))(0, xy, uv, fill, invert, corner);
	}
	template <typename T = void> static T RadialCut_1(Il2CppArray<uintptr_t>* xy, float cos, float sin, bool invert, int32_t corner) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, float, float, bool, int32_t))(Il2CppBase() + 0x3D244DC))(0, xy, cos, sin, invert, corner);
	}
	template <typename T = void> T CalculateLayoutInputHorizontal() {
		return ((T (*)(Image*))(Il2CppBase() + 0x3D24D1C))(this);
	}
	template <typename T = void> T CalculateLayoutInputVertical() {
		return ((T (*)(Image*))(Il2CppBase() + 0x3D24D20))(this);
	}
	template <typename T = float> T get_minWidth() {
		return ((T (*)(Image*))(Il2CppBase() + 0x3D24D24))(this);
	}
	template <typename T = float> T get_preferredWidth() {
		return ((T (*)(Image*))(Il2CppBase() + 0x3D24D2C))(this);
	}
	template <typename T = float> T get_flexibleWidth() {
		return ((T (*)(Image*))(Il2CppBase() + 0x3D24EA0))(this);
	}
	template <typename T = float> T get_minHeight() {
		return ((T (*)(Image*))(Il2CppBase() + 0x3D24EAC))(this);
	}
	template <typename T = float> T get_preferredHeight() {
		return ((T (*)(Image*))(Il2CppBase() + 0x3D24EB4))(this);
	}
	template <typename T = float> T get_flexibleHeight() {
		return ((T (*)(Image*))(Il2CppBase() + 0x3D25028))(this);
	}
	template <typename T = int32_t> T get_layoutPriority() {
		return ((T (*)(Image*))(Il2CppBase() + 0x3D25034))(this);
	}
	template <typename T = bool> T IsRaycastLocationValid(Il2CppVector2 screenPoint, uintptr_t eventCamera) {
		return ((T (*)(Image*, Il2CppVector2, uintptr_t))(Il2CppBase() + 0x3D2503C))(this, screenPoint, eventCamera);
	}
	template <typename T = Il2CppVector2> T MapCoordinate(Il2CppVector2 local, Il2CppRect rect) {
		return ((T (*)(Image*, Il2CppVector2, Il2CppRect))(Il2CppBase() + 0x3D25660))(this, local, rect);
	}

};

}
