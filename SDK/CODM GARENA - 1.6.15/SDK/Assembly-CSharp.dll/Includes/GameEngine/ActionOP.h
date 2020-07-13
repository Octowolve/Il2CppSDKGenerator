#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ActionOP
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ActionOP"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_initAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRemove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_playAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_stopAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_runAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateRunAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_preEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_registerStopCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CombineStopCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = bool> static T initAction(uintptr_t action, uintptr_t inObj) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B9C3A8))(0, action, inObj);
	}
	template <typename T = void> static T OnRemove(uintptr_t action) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E7E2C0))(0, action);
	}
	template <typename T = bool> static T playAction(uintptr_t action, uintptr_t inObj, float inFadeTime) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x1B9C664))(0, action, inObj, inFadeTime);
	}
	template <typename T = bool> static T stopAction(uintptr_t action, uintptr_t inObj) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B9CADC))(0, action, inObj);
	}
	template <typename T = bool> static T runAction(uintptr_t action, float delta, uintptr_t inObj) {
		return ((T (*)(void *, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x1B9C96C))(0, action, delta, inObj);
	}
	template <typename T = bool> static T LateRunAction(uintptr_t action, float delta, uintptr_t inObj) {
		return ((T (*)(void *, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x1B9C4F4))(0, action, delta, inObj);
	}
	template <typename T = bool> static T preEvent(uintptr_t action, float delta, uintptr_t inEvent, uintptr_t inObj) {
		return ((T (*)(void *, uintptr_t, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B9C7D4))(0, action, delta, inEvent, inObj);
	}
	template <typename T = void> static T registerStopCallback(uintptr_t action, uintptr_t inFuc) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E7E3BC))(0, action, inFuc);
	}
	template <typename T = void> static T CombineStopCallback(uintptr_t action, uintptr_t inFuc) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E7E19C))(0, action, inFuc);
	}

};

}
