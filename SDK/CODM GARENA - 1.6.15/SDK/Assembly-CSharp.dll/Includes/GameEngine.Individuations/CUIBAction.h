#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.Individuations {

class CUIBAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.Individuations", "CUIBAction"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_nullRunAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_initAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_playAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_stopAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_runAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateRunAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_preEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__initAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__playAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__stopAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__runAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__LateRunAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__preEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = bool> static T nullRunAction(float delta, uintptr_t inActor) {
		return ((T (*)(void *, float, uintptr_t))(Il2CppBase() + 0x37081B0))(0, delta, inActor);
	}
	template <typename T = bool> T initAction(uintptr_t inObj) {
		return ((T (*)(CUIBAction*, uintptr_t))(Il2CppBase() + 0x1B9DDE8))(this, inObj);
	}
	template <typename T = bool> T playAction(uintptr_t inObj, float inFadeTime) {
		return ((T (*)(CUIBAction*, uintptr_t, float))(Il2CppBase() + 0x1B9E12C))(this, inObj, inFadeTime);
	}
	template <typename T = bool> T stopAction(uintptr_t inObj) {
		return ((T (*)(CUIBAction*, uintptr_t))(Il2CppBase() + 0x1B9E660))(this, inObj);
	}
	template <typename T = bool> T runAction(float delta, uintptr_t inObj) {
		return ((T (*)(CUIBAction*, float, uintptr_t))(Il2CppBase() + 0x1B9E4B8))(this, delta, inObj);
	}
	template <typename T = bool> T LateRunAction(float delta, uintptr_t inObj) {
		return ((T (*)(CUIBAction*, float, uintptr_t))(Il2CppBase() + 0x1B9DF84))(this, delta, inObj);
	}
	template <typename T = bool> T preEvent(float delta, uintptr_t inEvent, uintptr_t inObj) {
		return ((T (*)(CUIBAction*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B9E2F0))(this, delta, inEvent, inObj);
	}
	template <typename T = bool> T _initAction(uintptr_t inActor) {
		return ((T (*)(CUIBAction*, uintptr_t))(Il2CppBase() + 0x1B9D6FC))(this, inActor);
	}
	template <typename T = bool> T _playAction(uintptr_t inActor, float inFadeTime) {
		return ((T (*)(CUIBAction*, uintptr_t, float))(Il2CppBase() + 0x1B9D934))(this, inActor, inFadeTime);
	}
	template <typename T = bool> T _stopAction(uintptr_t inActor) {
		return ((T (*)(CUIBAction*, uintptr_t))(Il2CppBase() + 0x1B9DCDC))(this, inActor);
	}
	template <typename T = bool> T _runAction(float delta, uintptr_t inActor) {
		return ((T (*)(CUIBAction*, float, uintptr_t))(Il2CppBase() + 0x1B9DBB0))(this, delta, inActor);
	}
	template <typename T = bool> T _LateRunAction(float delta, uintptr_t inObj) {
		return ((T (*)(CUIBAction*, float, uintptr_t))(Il2CppBase() + 0x1B9D808))(this, delta, inObj);
	}
	template <typename T = bool> T _preEvent(float delta, uintptr_t inEvent, uintptr_t inActor) {
		return ((T (*)(CUIBAction*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B9DA60))(this, delta, inEvent, inActor);
	}

};

}
