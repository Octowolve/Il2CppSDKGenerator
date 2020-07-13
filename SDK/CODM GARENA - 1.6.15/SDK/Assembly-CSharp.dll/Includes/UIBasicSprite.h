#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIBasicSprite
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIBasicSprite"));
	}

	template <typename T = bool> T& mGrayScale() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& mType() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& mFillDirection() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = float> T& mFillAmount() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = bool> T& mInvert() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& mFlip() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& mMirroredType() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = bool> T& mApplyGradient() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& mGradientTop() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& mGradientBottom() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = Il2CppRect> T& mInnerUV() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = Il2CppRect> T& mOuterUV() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& centerType() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& leftType() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> T& rightType() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& bottomType() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> T& topType() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& mTempPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& mTempUVs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& mMirroredXs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& mMirroredYs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& mMirroredUs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& mMirroredVs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Fill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimpleFill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SlicedFill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddVertexColours() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TiledFill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FilledFill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MirroredFill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdvancedFill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SliceFilledFill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DealVertValueScall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DealUvValueScall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RadialCut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RadialCut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Fill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = uintptr_t> T get_type() {
		return ((T (*)(UIBasicSprite*))(Il2CppBase() + 0x4264708))(this);
	}
	template <typename T = void> T set_type(uintptr_t value) {
		return ((T (*)(UIBasicSprite*, uintptr_t))(Il2CppBase() + 0x4264710))(this, value);
	}
	template <typename T = uintptr_t> T get_flip() {
		return ((T (*)(UIBasicSprite*))(Il2CppBase() + 0x4264730))(this);
	}
	template <typename T = void> T set_flip(uintptr_t value) {
		return ((T (*)(UIBasicSprite*, uintptr_t))(Il2CppBase() + 0x4264738))(this, value);
	}
	template <typename T = uintptr_t> T get_fillDirection() {
		return ((T (*)(UIBasicSprite*))(Il2CppBase() + 0x4264758))(this);
	}
	template <typename T = void> T set_fillDirection(uintptr_t value) {
		return ((T (*)(UIBasicSprite*, uintptr_t))(Il2CppBase() + 0x4264760))(this, value);
	}
	template <typename T = uintptr_t> T get_mirroredType() {
		return ((T (*)(UIBasicSprite*))(Il2CppBase() + 0x4264778))(this);
	}
	template <typename T = void> T set_mirroredType(uintptr_t value) {
		return ((T (*)(UIBasicSprite*, uintptr_t))(Il2CppBase() + 0x4264780))(this, value);
	}
	template <typename T = float> T get_fillAmount() {
		return ((T (*)(UIBasicSprite*))(Il2CppBase() + 0x4251420))(this);
	}
	template <typename T = void> T set_fillAmount(float value) {
		return ((T (*)(UIBasicSprite*, float))(Il2CppBase() + 0x4251518))(this, value);
	}
	template <typename T = int32_t> T get_minWidth() {
		return ((T (*)(UIBasicSprite*))(Il2CppBase() + 0x42647A0))(this);
	}
	template <typename T = int32_t> T get_minHeight() {
		return ((T (*)(UIBasicSprite*))(Il2CppBase() + 0x426496C))(this);
	}
	template <typename T = bool> T get_invert() {
		return ((T (*)(UIBasicSprite*))(Il2CppBase() + 0x4264B38))(this);
	}
	template <typename T = void> T set_invert(bool value) {
		return ((T (*)(UIBasicSprite*, bool))(Il2CppBase() + 0x4264B40))(this, value);
	}
	template <typename T = bool> T get_hasBorder() {
		return ((T (*)(UIBasicSprite*))(Il2CppBase() + 0x425C448))(this);
	}
	template <typename T = bool> T get_premultipliedAlpha() {
		return ((T (*)(UIBasicSprite*))(Il2CppBase() + 0x4264B60))(this);
	}
	template <typename T = float> T get_pixelSize() {
		return ((T (*)(UIBasicSprite*))(Il2CppBase() + 0x4264B68))(this);
	}
	template <typename T = uintptr_t> T get_drawingUVs() {
		return ((T (*)(UIBasicSprite*))(Il2CppBase() + 0x4264B70))(this);
	}
	template <typename T = uintptr_t> T get_drawingColor() {
		return ((T (*)(UIBasicSprite*))(Il2CppBase() + 0x4264CA8))(this);
	}
	template <typename T = void> T Fill(Il2CppList<Il2CppVector3>* verts, Il2CppList<Il2CppVector2>* uvs, Il2CppList<uintptr_t>* cols, Il2CppRect outer, Il2CppRect inner) {
		return ((T (*)(UIBasicSprite*, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector2>*, Il2CppList<uintptr_t>*, Il2CppRect, Il2CppRect))(Il2CppBase() + 0x425CA24))(this, verts, uvs, cols, outer, inner);
	}
	template <typename T = void> T SimpleFill(Il2CppList<Il2CppVector3>* verts, Il2CppList<Il2CppVector2>* uvs, Il2CppList<uintptr_t>* cols) {
		return ((T (*)(UIBasicSprite*, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector2>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4264DCC))(this, verts, uvs, cols);
	}
	template <typename T = void> T SlicedFill(Il2CppList<Il2CppVector3>* verts, Il2CppList<Il2CppVector2>* uvs, Il2CppList<uintptr_t>* cols) {
		return ((T (*)(UIBasicSprite*, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector2>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4265260))(this, verts, uvs, cols);
	}
	template <typename T = void> T AddVertexColours(Il2CppList<uintptr_t>* cols, uintptr_t color, int32_t x, int32_t y) {
		return ((T (*)(UIBasicSprite*, Il2CppList<uintptr_t>*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x426E968))(this, cols, color, x, y);
	}
	template <typename T = void> T TiledFill(Il2CppList<Il2CppVector3>* verts, Il2CppList<Il2CppVector2>* uvs, Il2CppList<uintptr_t>* cols) {
		return ((T (*)(UIBasicSprite*, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector2>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x42684A0))(this, verts, uvs, cols);
	}
	template <typename T = void> T FilledFill(Il2CppList<Il2CppVector3>* verts, Il2CppList<Il2CppVector2>* uvs, Il2CppList<uintptr_t>* cols) {
		return ((T (*)(UIBasicSprite*, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector2>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x426677C))(this, verts, uvs, cols);
	}
	template <typename T = void> T MirroredFill(Il2CppList<Il2CppVector3>* verts, Il2CppList<Il2CppVector2>* uvs, Il2CppList<uintptr_t>* cols) {
		return ((T (*)(UIBasicSprite*, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector2>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4268CB0))(this, verts, uvs, cols);
	}
	template <typename T = void> T AdvancedFill(Il2CppList<Il2CppVector3>* verts, Il2CppList<Il2CppVector2>* uvs, Il2CppList<uintptr_t>* cols) {
		return ((T (*)(UIBasicSprite*, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector2>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x426AAB4))(this, verts, uvs, cols);
	}
	template <typename T = void> T SliceFilledFill(Il2CppList<Il2CppVector3>* verts, Il2CppList<Il2CppVector2>* uvs, Il2CppList<uintptr_t>* cols) {
		return ((T (*)(UIBasicSprite*, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector2>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x426D160))(this, verts, uvs, cols);
	}
	template <typename T = float> T DealVertValueScall(float baseNum, float min, float max) {
		return ((T (*)(UIBasicSprite*, float, float, float))(Il2CppBase() + 0x426F1E4))(this, baseNum, min, max);
	}
	template <typename T = float> T DealUvValueScall(float min, float max, float baseVertNum, float minVert, float maxVert) {
		return ((T (*)(UIBasicSprite*, float, float, float, float, float))(Il2CppBase() + 0x426F304))(this, min, max, baseVertNum, minVert, maxVert);
	}
	template <typename T = bool> static T RadialCut(Il2CppArray<uintptr_t>* xy, Il2CppArray<uintptr_t>* uv, float fill, bool invert, int32_t corner) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, float, bool, int32_t))(Il2CppBase() + 0x426EB54))(0, xy, uv, fill, invert, corner);
	}
	template <typename T = void> static T RadialCut_1(Il2CppArray<uintptr_t>* xy, float cos, float sin, bool invert, int32_t corner) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, float, float, bool, int32_t))(Il2CppBase() + 0x426F430))(0, xy, cos, sin, invert, corner);
	}
	template <typename T = void> static T Fill_1(Il2CppList<Il2CppVector3>* verts, Il2CppList<Il2CppVector2>* uvs, Il2CppList<uintptr_t>* cols, float v0x, float v1x, float v0y, float v1y, float u0x, float u1x, float u0y, float u1y, uintptr_t col) {
		return ((T (*)(void *, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector2>*, Il2CppList<uintptr_t>*, float, float, float, float, float, float, float, float, uintptr_t))(Il2CppBase() + 0x426EDB8))(0, verts, uvs, cols, v0x, v1x, v0y, v1y, u0x, u1x, u0y, u1y, col);
	}

};

}
