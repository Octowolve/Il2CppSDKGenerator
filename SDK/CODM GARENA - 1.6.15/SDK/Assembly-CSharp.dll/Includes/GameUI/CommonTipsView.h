#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CommonTipsView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CommonTipsView"));
	}

	template <typename T = uintptr_t> T& CommonTipsGameObject() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& TipsLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& TipsBgSprite() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_Panel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& container() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& m_IsTipsFinished() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& tweenPosition() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& tweenAlpha() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppVector3> static T& beginPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> static T& endPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = float> static T& tweenDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = int32_t> T& PanelDepth() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTipsLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCommonTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayAndHideCommonTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTweenFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLastCommonTipsShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = bool> T get_IsTipsFinished() {
		return ((T (*)(CommonTipsView*))(Il2CppBase() + 0x3DF61C8))(this);
	}
	template <typename T = void> T set_IsTipsFinished(bool value) {
		return ((T (*)(CommonTipsView*, bool))(Il2CppBase() + 0x3DF576C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CommonTipsView*))(Il2CppBase() + 0x3DF67E0))(this);
	}
	template <typename T = void> T SetTipsLabel(Il2CppString* tips) {
		return ((T (*)(CommonTipsView*, Il2CppString*))(Il2CppBase() + 0x3DF6990))(this, tips);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(CommonTipsView*))(Il2CppBase() + 0x3DF6AB4))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(CommonTipsView*, float))(Il2CppBase() + 0x3DF6ABC))(this, dt);
	}
	template <typename T = void> T ShowCommonTips(Il2CppString* tipsContent, float visibleTime) {
		return ((T (*)(CommonTipsView*, Il2CppString*, float))(Il2CppBase() + 0x3DF5C48))(this, tipsContent, visibleTime);
	}
	template <typename T = uintptr_t> T DelayAndHideCommonTips(float delay) {
		return ((T (*)(CommonTipsView*, float))(Il2CppBase() + 0x3DF6C88))(this, delay);
	}
	template <typename T = uintptr_t> T OnTweenFinished(float delay) {
		return ((T (*)(CommonTipsView*, float))(Il2CppBase() + 0x3DF6DBC))(this, delay);
	}
	template <typename T = void> T OnLastCommonTipsShow() {
		return ((T (*)(CommonTipsView*))(Il2CppBase() + 0x3DF66C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(CommonTipsView*))(Il2CppBase() + 0x3DF7000))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(CommonTipsView*, float))(Il2CppBase() + 0x3DF7008))(this, P0);
	}

};

}
