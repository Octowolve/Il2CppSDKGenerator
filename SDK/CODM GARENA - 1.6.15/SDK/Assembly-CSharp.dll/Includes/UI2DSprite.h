#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UI2DSprite
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UI2DSprite"));
	}

	template <typename T = uintptr_t> T& mSprite() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> T& mShader() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& mBorder() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = bool> T& mFixedAspect() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = float> T& mPixelSize() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& nextSprite() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = int32_t> T& mPMA() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = bool> T& m_GrayScale() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = uintptr_t> static T& GrayScaleColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& NormalColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MakePixelPerfect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMaterialFloat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T get_sprite2D() {
		return ((T (*)(UI2DSprite*))(Il2CppBase() + 0x425B1D0))(this);
	}
	template <typename T = void> T set_sprite2D(uintptr_t value) {
		return ((T (*)(UI2DSprite*, uintptr_t))(Il2CppBase() + 0x425B1D8))(this, value);
	}
	template <typename T = uintptr_t> T get_material() {
		return ((T (*)(UI2DSprite*))(Il2CppBase() + 0x425B2B8))(this);
	}
	template <typename T = void> T set_material(uintptr_t value) {
		return ((T (*)(UI2DSprite*, uintptr_t))(Il2CppBase() + 0x425B2C0))(this, value);
	}
	template <typename T = uintptr_t> T get_shader() {
		return ((T (*)(UI2DSprite*))(Il2CppBase() + 0x425B3A8))(this);
	}
	template <typename T = void> T set_shader(uintptr_t value) {
		return ((T (*)(UI2DSprite*, uintptr_t))(Il2CppBase() + 0x425B540))(this, value);
	}
	template <typename T = uintptr_t> T get_mainTexture() {
		return ((T (*)(UI2DSprite*))(Il2CppBase() + 0x425B67C))(this);
	}
	template <typename T = bool> T get_fixedAspect() {
		return ((T (*)(UI2DSprite*))(Il2CppBase() + 0x425B7CC))(this);
	}
	template <typename T = void> T set_fixedAspect(bool value) {
		return ((T (*)(UI2DSprite*, bool))(Il2CppBase() + 0x425B7D4))(this, value);
	}
	template <typename T = bool> T get_premultipliedAlpha() {
		return ((T (*)(UI2DSprite*))(Il2CppBase() + 0x425B858))(this);
	}
	template <typename T = float> T get_pixelSize() {
		return ((T (*)(UI2DSprite*))(Il2CppBase() + 0x425B9A8))(this);
	}
	template <typename T = uintptr_t> T get_drawingDimensions() {
		return ((T (*)(UI2DSprite*))(Il2CppBase() + 0x425B9B0))(this);
	}
	template <typename T = uintptr_t> T get_border() {
		return ((T (*)(UI2DSprite*))(Il2CppBase() + 0x425BFF4))(this);
	}
	template <typename T = void> T set_border(uintptr_t value) {
		return ((T (*)(UI2DSprite*, uintptr_t))(Il2CppBase() + 0x425C004))(this, value);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(UI2DSprite*))(Il2CppBase() + 0x425C088))(this);
	}
	template <typename T = void> T MakePixelPerfect() {
		return ((T (*)(UI2DSprite*))(Il2CppBase() + 0x425C150))(this);
	}
	template <typename T = void> T OnFill(Il2CppList<Il2CppVector3>* verts, Il2CppList<Il2CppVector2>* uvs, Il2CppList<uintptr_t>* cols) {
		return ((T (*)(UI2DSprite*, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector2>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x425C4B8))(this, verts, uvs, cols);
	}
	template <typename T = void> T SetMaterialFloat(Il2CppString* paraName, float value) {
		return ((T (*)(UI2DSprite*, Il2CppString*, float))(Il2CppBase() + 0x425CC20))(this, paraName, value);
	}
	template <typename T = bool> T get_GrayScale() {
		return ((T (*)(UI2DSprite*))(Il2CppBase() + 0x425CE2C))(this);
	}
	template <typename T = void> T set_GrayScale(bool value) {
		return ((T (*)(UI2DSprite*, bool))(Il2CppBase() + 0x425CE34))(this, value);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpdate() {
		return ((T (*)(UI2DSprite*))(Il2CppBase() + 0x425D07C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_MakePixelPerfect() {
		return ((T (*)(UI2DSprite*))(Il2CppBase() + 0x425D084))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnFill(Il2CppList<Il2CppVector3>* P0, Il2CppList<Il2CppVector2>* P1, Il2CppList<uintptr_t>* P2) {
		return ((T (*)(UI2DSprite*, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector2>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x425D08C))(this, P0, P1, P2);
	}

};

}
