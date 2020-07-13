#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UISprite
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UISprite"));
	}

	template <typename T = uintptr_t> T& mAtlas() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = Il2CppString*> T& mSpriteName() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = bool> T& mFillCenter() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = uintptr_t> T& mSprite() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = bool> T& mSpriteSet() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> T& mGrayMaterial() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& mGrayBaseMat() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = bool> T& mIsDirtySpriteName() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = bool> T& mLastGrayStatus() {
		return *(T*)((uintptr_t)this + 0x1C1);
	}
	template <typename T = bool> T& mNeedSetGray() {
		return *(T*)((uintptr_t)this + 0x1C2);
	}
	template <typename T = bool> T& m_IsSpriteHasLoaded() {
		return *(T*)((uintptr_t)this + 0x1C3);
	}
	template <typename T = int32_t> T& defaultWidth() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = int32_t> T& defaultHeight() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = int32_t> T& oldWidth() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = int32_t> T& oldHeight() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = bool> T& mFixAspectRatioOnStart() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = bool> T& VarifyOnceAwake() {
		return *(T*)((uintptr_t)this + 0x1D5);
	}
	template <typename T = int32_t> T& AtlasReferenceGeneration() {
		return *(T*)((uintptr_t)this + 0x1D8);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetGray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSetGray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSetNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshGrayMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAtlasSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAtlasSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MakePixelPerfect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MakePixelPerfectWithLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IncRef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DecRef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoverOldSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VerifyAtlas() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_KeepAspectRatioBasedOnWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_KeepAspectRatioBasedOnHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_KeepAspectRatioInRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MakePixelPerfectExtended() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}

	template <typename T = uintptr_t> T get_mainTexture() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA587C))(this);
	}
	template <typename T = void> T set_mainTexture(uintptr_t value) {
		return ((T (*)(UISprite*, uintptr_t))(Il2CppBase() + 0x2FA59C4))(this, value);
	}
	template <typename T = uintptr_t> T get_material() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA59CC))(this);
	}
	template <typename T = void> T set_material(uintptr_t value) {
		return ((T (*)(UISprite*, uintptr_t))(Il2CppBase() + 0x2FA5B64))(this, value);
	}
	template <typename T = uintptr_t> T get_originalMaterial() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA5B6C))(this);
	}
	template <typename T = bool> T get_NeedSetGray() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA5CAC))(this);
	}
	template <typename T = void> T SetGray() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA5CB4))(this);
	}
	template <typename T = void> T DoSetGray() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA5DD0))(this);
	}
	template <typename T = void> T SetNormal() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA641C))(this);
	}
	template <typename T = void> T DoSetNormal() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA6538))(this);
	}
	template <typename T = void> T RefreshSprite() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA62D8))(this);
	}
	template <typename T = uintptr_t> T get_atlas() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2F66608))(this);
	}
	template <typename T = void> T set_atlas(uintptr_t value) {
		return ((T (*)(UISprite*, uintptr_t))(Il2CppBase() + 0x2FA6614))(this, value);
	}
	template <typename T = Il2CppString*> T get_spriteName() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2F66610))(this);
	}
	template <typename T = void> T set_spriteName(Il2CppString* value) {
		return ((T (*)(UISprite*, Il2CppString*))(Il2CppBase() + 0x2F61480))(this, value);
	}
	template <typename T = void> T RefreshGrayMaterial() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA6E84))(this);
	}
	template <typename T = bool> T get_isValid() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA6FA0))(this);
	}
	template <typename T = bool> T get_fillCenter() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA7318))(this);
	}
	template <typename T = void> T set_fillCenter(bool value) {
		return ((T (*)(UISprite*, bool))(Il2CppBase() + 0x2FA7328))(this, value);
	}
	template <typename T = bool> T get_applyGradient() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA7350))(this);
	}
	template <typename T = void> T set_applyGradient(bool value) {
		return ((T (*)(UISprite*, bool))(Il2CppBase() + 0x2FA7358))(this, value);
	}
	template <typename T = uintptr_t> T get_gradientTop() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA7380))(this);
	}
	template <typename T = void> T set_gradientTop(uintptr_t value) {
		return ((T (*)(UISprite*, uintptr_t))(Il2CppBase() + 0x2FA7390))(this, value);
	}
	template <typename T = uintptr_t> T get_gradientBottom() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA7420))(this);
	}
	template <typename T = void> T set_gradientBottom(uintptr_t value) {
		return ((T (*)(UISprite*, uintptr_t))(Il2CppBase() + 0x2FA7430))(this, value);
	}
	template <typename T = uintptr_t> T get_border() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA74C0))(this);
	}
	template <typename T = float> T get_pixelSize() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA754C))(this);
	}
	template <typename T = int32_t> T get_minWidth() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA762C))(this);
	}
	template <typename T = int32_t> T get_minHeight() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA7A6C))(this);
	}
	template <typename T = uintptr_t> T get_drawingDimensions() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA7EB0))(this);
	}
	template <typename T = bool> T get_premultipliedAlpha() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA83D0))(this);
	}
	template <typename T = uintptr_t> T GetAtlasSprite() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA6FB8))(this);
	}
	template <typename T = void> T SetAtlasSprite(uintptr_t sp) {
		return ((T (*)(UISprite*, uintptr_t))(Il2CppBase() + 0x2FA6904))(this, sp);
	}
	template <typename T = void> T MakePixelPerfect() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA84B4))(this);
	}
	template <typename T = void> T MakePixelPerfectWithLimit(uintptr_t limitType, int32_t limitValue) {
		return ((T (*)(UISprite*, uintptr_t, int32_t))(Il2CppBase() + 0x2FA8990))(this, limitType, limitValue);
	}
	template <typename T = void> T OnInit() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA8F34))(this);
	}
	template <typename T = void> T UpdateRect() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA9028))(this);
	}
	template <typename T = void> T OnFill(Il2CppList<Il2CppVector3>* verts, Il2CppList<Il2CppVector2>* uvs, Il2CppList<uintptr_t>* cols) {
		return ((T (*)(UISprite*, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector2>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2F66630))(this, verts, uvs, cols);
	}
	template <typename T = bool> T get_FixAspectRatioOnStart() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA9198))(this);
	}
	template <typename T = void> T set_FixAspectRatioOnStart(bool value) {
		return ((T (*)(UISprite*, bool))(Il2CppBase() + 0x2FA91A0))(this, value);
	}
	template <typename T = int32_t> T get_AtlasReferenceGeneration() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA91A8))(this);
	}
	template <typename T = void> T set_AtlasReferenceGeneration(int32_t value) {
		return ((T (*)(UISprite*, int32_t))(Il2CppBase() + 0x2FA91B0))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA91B8))(this);
	}
	template <typename T = void> T IncRef() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA9378))(this);
	}
	template <typename T = void> T DecRef() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA9570))(this);
	}
	template <typename T = void> T RecoverOldSize() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA9788))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA98B0))(this);
	}
	template <typename T = void> T OnStart() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA9A7C))(this);
	}
	template <typename T = Il2CppString*> T get_spriteNameWidth() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FAA06C))(this);
	}
	template <typename T = void> T set_spriteNameWidth(Il2CppString* value) {
		return ((T (*)(UISprite*, Il2CppString*))(Il2CppBase() + 0x2FAA074))(this, value);
	}
	template <typename T = Il2CppString*> T get_spriteNameHeight() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FAA0A8))(this);
	}
	template <typename T = void> T set_spriteNameHeight(Il2CppString* value) {
		return ((T (*)(UISprite*, Il2CppString*))(Il2CppBase() + 0x2FAA0B0))(this, value);
	}
	template <typename T = Il2CppString*> T get_spriteNameOriginalSize() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FAA56C))(this);
	}
	template <typename T = void> T set_spriteNameOriginalSize(Il2CppString* value) {
		return ((T (*)(UISprite*, Il2CppString*))(Il2CppBase() + 0x2FAA574))(this, value);
	}
	template <typename T = Il2CppString*> T get_spriteNameAuto() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FAABB8))(this);
	}
	template <typename T = void> T set_spriteNameAuto(Il2CppString* value) {
		return ((T (*)(UISprite*, Il2CppString*))(Il2CppBase() + 0x2FAABC0))(this, value);
	}
	template <typename T = bool> T get_GrayScale() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FAADFC))(this);
	}
	template <typename T = void> T set_GrayScale(bool value) {
		return ((T (*)(UISprite*, bool))(Il2CppBase() + 0x2FAAE04))(this, value);
	}
	template <typename T = void> T VerifyAtlas() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FA6A70))(this);
	}
	template <typename T = void> T KeepAspectRatioBasedOnWidth(int32_t newWidth, bool keepOriginalSizeIfSmaller) {
		return ((T (*)(UISprite*, int32_t, bool))(Il2CppBase() + 0x2FA9C88))(this, newWidth, keepOriginalSizeIfSmaller);
	}
	template <typename T = void> T KeepAspectRatioBasedOnHeight(int32_t newHeight, bool keepOriginalSizeIfSmaller) {
		return ((T (*)(UISprite*, int32_t, bool))(Il2CppBase() + 0x2FAA190))(this, newHeight, keepOriginalSizeIfSmaller);
	}
	template <typename T = void> T KeepAspectRatioInRect(int32_t WidthLimit, int32_t HeightLimit, bool keepOriginalSizeIfSmaller) {
		return ((T (*)(UISprite*, int32_t, int32_t, bool))(Il2CppBase() + 0x2FAAE30))(this, WidthLimit, HeightLimit, keepOriginalSizeIfSmaller);
	}
	template <typename T = void> T MakePixelPerfectExtended() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FAA64C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_MakePixelPerfect() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FAB394))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnInit() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FAB39C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateRect() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FAB3A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnFill(Il2CppList<Il2CppVector3>* P0, Il2CppList<Il2CppVector2>* P1, Il2CppList<uintptr_t>* P2) {
		return ((T (*)(UISprite*, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector2>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2FAB3AC))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FAB3CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FAB3D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStart() {
		return ((T (*)(UISprite*))(Il2CppBase() + 0x2FAB3DC))(this);
	}

};

}
