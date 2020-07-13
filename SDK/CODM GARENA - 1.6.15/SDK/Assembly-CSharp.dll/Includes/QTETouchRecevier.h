#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QTETouchRecevier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QTETouchRecevier"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_SpritesList() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& m_InRectCount() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& m_BeginTouch() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& m_LightTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_CurLightSprite() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& m_LightIndex() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& m_SendEvent() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_CurrentChooseList() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& EventQTESwipe() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& bCompleted() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppVector2> T& m_LastTouchPosition() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_EventQTESwipe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_EventQTESwipe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEasyTouchEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterEasyTouchEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LightSwipeItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetSwipeItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InsideSwipeItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EasyTouch_OnSwipeStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EasyTouch_OnSwipe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EasyTouch_OnSwipeEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LineRectIntersect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TouchPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayHideSpriteAndSendEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpriteToRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = void> T add_EventQTESwipe(uintptr_t value) {
		return ((T (*)(QTETouchRecevier*, uintptr_t))(Il2CppBase() + 0x3DB33E4))(this, value);
	}
	template <typename T = void> T remove_EventQTESwipe(uintptr_t value) {
		return ((T (*)(QTETouchRecevier*, uintptr_t))(Il2CppBase() + 0x3DB35DC))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(QTETouchRecevier*))(Il2CppBase() + 0x3DB37D4))(this);
	}
	template <typename T = void> T RegisterEasyTouchEvent() {
		return ((T (*)(QTETouchRecevier*))(Il2CppBase() + 0x3DB3888))(this);
	}
	template <typename T = void> T UnRegisterEasyTouchEvent() {
		return ((T (*)(QTETouchRecevier*))(Il2CppBase() + 0x3DB3A08))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(QTETouchRecevier*))(Il2CppBase() + 0x3DB3B88))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(QTETouchRecevier*))(Il2CppBase() + 0x3DB4134))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(QTETouchRecevier*))(Il2CppBase() + 0x3DB42B8))(this);
	}
	template <typename T = void> T LightSwipeItem(uintptr_t itemObj) {
		return ((T (*)(QTETouchRecevier*, uintptr_t))(Il2CppBase() + 0x3DB3F84))(this, itemObj);
	}
	template <typename T = void> T ResetSwipeItem(uintptr_t itemObj) {
		return ((T (*)(QTETouchRecevier*, uintptr_t))(Il2CppBase() + 0x3DB3D98))(this, itemObj);
	}
	template <typename T = void> T InsideSwipeItem(uintptr_t itemObj) {
		return ((T (*)(QTETouchRecevier*, uintptr_t))(Il2CppBase() + 0x3DB4380))(this, itemObj);
	}
	template <typename T = void> T EasyTouch_OnSwipeStart(uintptr_t gesture) {
		return ((T (*)(QTETouchRecevier*, uintptr_t))(Il2CppBase() + 0x3DB4530))(this, gesture);
	}
	template <typename T = void> T EasyTouch_OnSwipe(uintptr_t gesture) {
		return ((T (*)(QTETouchRecevier*, uintptr_t))(Il2CppBase() + 0x3DB4950))(this, gesture);
	}
	template <typename T = void> T EasyTouch_OnSwipeEnd(uintptr_t gesture) {
		return ((T (*)(QTETouchRecevier*, uintptr_t))(Il2CppBase() + 0x3DB4A18))(this, gesture);
	}
	template <typename T = bool> T LineRectIntersect(Il2CppVector2 a, Il2CppVector2 b, Il2CppRect rect) {
		return ((T (*)(QTETouchRecevier*, Il2CppVector2, Il2CppVector2, Il2CppRect))(Il2CppBase() + 0x3DB4BB4))(this, a, b, rect);
	}
	template <typename T = void> T TouchPosition(Il2CppVector2 touchPosition) {
		return ((T (*)(QTETouchRecevier*, Il2CppVector2))(Il2CppBase() + 0x3DB46A8))(this, touchPosition);
	}
	template <typename T = uintptr_t> T DelayHideSpriteAndSendEvent() {
		return ((T (*)(QTETouchRecevier*))(Il2CppBase() + 0x3DB54A4))(this);
	}
	template <typename T = bool> T CheckIsComplete() {
		return ((T (*)(QTETouchRecevier*))(Il2CppBase() + 0x3DB5318))(this);
	}
	template <typename T = Il2CppRect> T SpriteToRect(uintptr_t spriteObj) {
		return ((T (*)(QTETouchRecevier*, uintptr_t))(Il2CppBase() + 0x3DB4F0C))(this, spriteObj);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(QTETouchRecevier*))(Il2CppBase() + 0x3DB558C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(QTETouchRecevier*))(Il2CppBase() + 0x3DB5634))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterEasyTouchEvent() {
		return ((T (*)(QTETouchRecevier*))(Il2CppBase() + 0x3DB563C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterEasyTouchEvent() {
		return ((T (*)(QTETouchRecevier*))(Il2CppBase() + 0x3DB5644))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(QTETouchRecevier*))(Il2CppBase() + 0x3DB564C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(QTETouchRecevier*))(Il2CppBase() + 0x3DB5654))(this);
	}

};

}
