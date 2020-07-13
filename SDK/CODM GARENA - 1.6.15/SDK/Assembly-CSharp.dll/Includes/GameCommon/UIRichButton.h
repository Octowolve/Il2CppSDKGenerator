#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class UIRichButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "UIRichButton"));
	}

	template <typename T = uintptr_t> T& m_TweenTarget() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_NormalObjects() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_HighlightedObjects() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_LockObjects() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& Lock() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& mConfigured() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = uintptr_t> T& Badge() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& BadgeNumber() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& mNotifies() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& mNotifiesSet() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> static T& kTweenDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> static T& kTweenFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppVector3> static T& kTweenTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& current() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppString*> T& clickSound() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onClick() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& onClickForTLog() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayClickSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> T set_Lock(bool value) {
		return ((T (*)(UIRichButton*, bool))(Il2CppBase() + 0x49F9234))(this, value);
	}
	template <typename T = bool> T get_Lock() {
		return ((T (*)(UIRichButton*))(Il2CppBase() + 0x49F923C))(this);
	}
	template <typename T = void> T ConfigureButton(bool highlited) {
		return ((T (*)(UIRichButton*, bool))(Il2CppBase() + 0x49F9244))(this, highlited);
	}
	template <typename T = void> T set_Notifies(int32_t value) {
		return ((T (*)(UIRichButton*, int32_t))(Il2CppBase() + 0x49F9644))(this, value);
	}
	template <typename T = int32_t> T get_Notifies() {
		return ((T (*)(UIRichButton*))(Il2CppBase() + 0x49F97F0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIRichButton*))(Il2CppBase() + 0x49F97F8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIRichButton*))(Il2CppBase() + 0x49F992C))(this);
	}
	template <typename T = void> T OnHover(bool isOver) {
		return ((T (*)(UIRichButton*, bool))(Il2CppBase() + 0x49F9A3C))(this, isOver);
	}
	template <typename T = void> T OnPress(bool isPressed) {
		return ((T (*)(UIRichButton*, bool))(Il2CppBase() + 0x49F9B3C))(this, isPressed);
	}
	template <typename T = void> T PlayClickSound() {
		return ((T (*)(UIRichButton*))(Il2CppBase() + 0x49F9DBC))(this);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(UIRichButton*))(Il2CppBase() + 0x49F9FB4))(this);
	}

};

}
