#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UITexture
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UITexture"));
	}

	template <typename T = Il2CppRect> T& mRect() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> T& mTexture() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> T& mShader() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& mBorder() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = bool> T& mFixedAspect() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = int32_t> T& mPMA() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MakePixelPerfect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_mainTexture() {
		return ((T (*)(UITexture*))(Il2CppBase() + 0x2FB3364))(this);
	}
	template <typename T = void> T set_mainTexture(uintptr_t value) {
		return ((T (*)(UITexture*, uintptr_t))(Il2CppBase() + 0x2FB34A0))(this, value);
	}
	template <typename T = uintptr_t> T get_material() {
		return ((T (*)(UITexture*))(Il2CppBase() + 0x2FB3688))(this);
	}
	template <typename T = void> T set_material(uintptr_t value) {
		return ((T (*)(UITexture*, uintptr_t))(Il2CppBase() + 0x2FB3690))(this, value);
	}
	template <typename T = uintptr_t> T get_shader() {
		return ((T (*)(UITexture*))(Il2CppBase() + 0x2FB3780))(this);
	}
	template <typename T = void> T set_shader(uintptr_t value) {
		return ((T (*)(UITexture*, uintptr_t))(Il2CppBase() + 0x2FB3918))(this, value);
	}
	template <typename T = bool> T get_premultipliedAlpha() {
		return ((T (*)(UITexture*))(Il2CppBase() + 0x2FB3B08))(this);
	}
	template <typename T = uintptr_t> T get_border() {
		return ((T (*)(UITexture*))(Il2CppBase() + 0x2FB3CC4))(this);
	}
	template <typename T = void> T set_border(uintptr_t value) {
		return ((T (*)(UITexture*, uintptr_t))(Il2CppBase() + 0x2FB3CD4))(this, value);
	}
	template <typename T = Il2CppRect> T get_uvRect() {
		return ((T (*)(UITexture*))(Il2CppBase() + 0x2FB3D58))(this);
	}
	template <typename T = void> T set_uvRect(Il2CppRect value) {
		return ((T (*)(UITexture*, Il2CppRect))(Il2CppBase() + 0x2FB3D68))(this, value);
	}
	template <typename T = uintptr_t> T get_drawingDimensions() {
		return ((T (*)(UITexture*))(Il2CppBase() + 0x2FB3DEC))(this);
	}
	template <typename T = bool> T get_fixedAspect() {
		return ((T (*)(UITexture*))(Il2CppBase() + 0x2FB4128))(this);
	}
	template <typename T = void> T set_fixedAspect(bool value) {
		return ((T (*)(UITexture*, bool))(Il2CppBase() + 0x2FB4130))(this, value);
	}
	template <typename T = void> T MakePixelPerfect() {
		return ((T (*)(UITexture*))(Il2CppBase() + 0x2FB41B4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(UITexture*))(Il2CppBase() + 0x2FB43B4))(this);
	}
	template <typename T = void> T OnFill(Il2CppList<Il2CppVector3>* verts, Il2CppList<Il2CppVector2>* uvs, Il2CppList<uintptr_t>* cols) {
		return ((T (*)(UITexture*, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector2>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2FB444C))(this, verts, uvs, cols);
	}
	template <typename T = void> T xLuaBaseProxy_MakePixelPerfect() {
		return ((T (*)(UITexture*))(Il2CppBase() + 0x2FB4994))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpdate() {
		return ((T (*)(UITexture*))(Il2CppBase() + 0x2FB499C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnFill(Il2CppList<Il2CppVector3>* P0, Il2CppList<Il2CppVector2>* P1, Il2CppList<uintptr_t>* P2) {
		return ((T (*)(UITexture*, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector2>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2FB49A0))(this, P0, P1, P2);
	}

};

}
