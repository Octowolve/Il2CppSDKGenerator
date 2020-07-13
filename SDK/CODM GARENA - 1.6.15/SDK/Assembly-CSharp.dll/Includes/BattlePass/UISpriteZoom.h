#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class UISpriteZoom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "UISpriteZoom"));
	}

	template <typename T = uintptr_t> T& mTexture() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& DragClickCollider() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& OffSetMovement() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& InitPostionOffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& DoubleClickZoom() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& ZoomNum() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& initialWidth() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& initialHeight() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& lastTouchIdx1() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& lastTouchIdx2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& lastTouchDis() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> static T& MinScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& MaxScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& SLIDER_VALUE_DELTA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& currentScale() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& ScreenHeight() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& ScreenWidth() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitTexturePostion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScaleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSlideChangeEditor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSlideChangeTouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndGetTouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDoubleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpriteDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BoundRestrict() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = float> T get_CurrentScale() {
		return ((T (*)(UISpriteZoom*))(Il2CppBase() + 0x2C51A3C))(this);
	}
	template <typename T = void> T set_CurrentScale(float value) {
		return ((T (*)(UISpriteZoom*, float))(Il2CppBase() + 0x2C51A44))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UISpriteZoom*))(Il2CppBase() + 0x2C51B0C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UISpriteZoom*))(Il2CppBase() + 0x2C51C9C))(this);
	}
	template <typename T = void> T InitTexturePostion() {
		return ((T (*)(UISpriteZoom*))(Il2CppBase() + 0x2C51D34))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UISpriteZoom*))(Il2CppBase() + 0x2C520D0))(this);
	}
	template <typename T = void> T UpdateScaleChange() {
		return ((T (*)(UISpriteZoom*))(Il2CppBase() + 0x2C52174))(this);
	}
	template <typename T = void> T UpdateSlideChangeEditor() {
		return ((T (*)(UISpriteZoom*))(Il2CppBase() + 0x2C52600))(this);
	}
	template <typename T = void> T UpdateSlideChangeTouch() {
		return ((T (*)(UISpriteZoom*))(Il2CppBase() + 0x2C52264))(this);
	}
	template <typename T = bool> T CheckAndGetTouch(uintptr_t idx1, uintptr_t idx2) {
		return ((T (*)(UISpriteZoom*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2C52ACC))(this, idx1, idx2);
	}
	template <typename T = void> T OnDoubleClick(uintptr_t go) {
		return ((T (*)(UISpriteZoom*, uintptr_t))(Il2CppBase() + 0x2C52C14))(this, go);
	}
	template <typename T = void> T OnSpriteDrag(uintptr_t go, Il2CppVector2 delta) {
		return ((T (*)(UISpriteZoom*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x2C52D50))(this, go, delta);
	}
	template <typename T = void> T BoundRestrict() {
		return ((T (*)(UISpriteZoom*))(Il2CppBase() + 0x2C527C0))(this);
	}

};

}
