#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class UIRichSlider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "UIRichSlider"));
	}

	template <typename T = uintptr_t> T& mDecrease() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mIncrease() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mDigit() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mFloatDigitObj() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mFloatDigitLabel() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& mDigitFormat() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& mMinDigitRange() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& mDigitRange() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& mDigitHideWhenNoInteract() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& mPressDeltaValue() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& audioPlayCallback() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& mInteractObjects() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& mPressingDecrease() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& mPressingIncrease() {
		return *(T*)((uintptr_t)this + 0x75);
	}
	template <typename T = float> static T& kPressingInvokeTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& mLastPressingTime() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAudioCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetisColliderEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFgColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInteracting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDigitChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPressBackground() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragBackground() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPressForeground() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalProcessFloatDigitObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragForeground() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPressDecrease() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPressIncrease() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> T SetAudioCallback(uintptr_t cb) {
		return ((T (*)(UIRichSlider*, uintptr_t))(Il2CppBase() + 0x49FAF58))(this, cb);
	}
	template <typename T = void> T PlayAudio() {
		return ((T (*)(UIRichSlider*))(Il2CppBase() + 0x49FB000))(this);
	}
	template <typename T = bool> T GetisColliderEnabled() {
		return ((T (*)(UIRichSlider*))(Il2CppBase() + 0x49FB0AC))(this);
	}
	template <typename T = void> T SetFgColor(uintptr_t color) {
		return ((T (*)(UIRichSlider*, uintptr_t))(Il2CppBase() + 0x49FB1E4))(this, color);
	}
	template <typename T = void> T OnStart() {
		return ((T (*)(UIRichSlider*))(Il2CppBase() + 0x49FB308))(this);
	}
	template <typename T = void> T OnInteracting(int32_t interactObjects) {
		return ((T (*)(UIRichSlider*, int32_t))(Il2CppBase() + 0x49FB9F0))(this, interactObjects);
	}
	template <typename T = void> T OnDigitChange() {
		return ((T (*)(UIRichSlider*))(Il2CppBase() + 0x49FBAF8))(this);
	}
	template <typename T = void> T OnPressBackground(uintptr_t go, bool isPressed) {
		return ((T (*)(UIRichSlider*, uintptr_t, bool))(Il2CppBase() + 0x49FBCD0))(this, go, isPressed);
	}
	template <typename T = void> T OnDragBackground(uintptr_t go, Il2CppVector2 delta) {
		return ((T (*)(UIRichSlider*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x49FBEBC))(this, go, delta);
	}
	template <typename T = void> T OnPressForeground(uintptr_t go, bool isPressed) {
		return ((T (*)(UIRichSlider*, uintptr_t, bool))(Il2CppBase() + 0x49FC060))(this, go, isPressed);
	}
	template <typename T = void> T InternalProcessFloatDigitObj(bool isPressed) {
		return ((T (*)(UIRichSlider*, bool))(Il2CppBase() + 0x49FC320))(this, isPressed);
	}
	template <typename T = void> T OnDragForeground(uintptr_t go, Il2CppVector2 delta) {
		return ((T (*)(UIRichSlider*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x49FC468))(this, go, delta);
	}
	template <typename T = void> T OnPan(Il2CppVector2 delta) {
		return ((T (*)(UIRichSlider*, Il2CppVector2))(Il2CppBase() + 0x49FC620))(this, delta);
	}
	template <typename T = void> T OnPressDecrease(uintptr_t go, bool isPressed) {
		return ((T (*)(UIRichSlider*, uintptr_t, bool))(Il2CppBase() + 0x49FC718))(this, go, isPressed);
	}
	template <typename T = void> T OnPressIncrease(uintptr_t go, bool isPressed) {
		return ((T (*)(UIRichSlider*, uintptr_t, bool))(Il2CppBase() + 0x49FC820))(this, go, isPressed);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIRichSlider*))(Il2CppBase() + 0x49FC928))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStart() {
		return ((T (*)(UIRichSlider*))(Il2CppBase() + 0x49FCA90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnPan(Il2CppVector2 P0) {
		return ((T (*)(UIRichSlider*, Il2CppVector2))(Il2CppBase() + 0x49FCA98))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(UIRichSlider*))(Il2CppBase() + 0x49FCAA0))(this);
	}

};

}
