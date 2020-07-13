#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class CUAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "CUAction"));
	}

	template <typename T = int32_t> T& mID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& mIdx() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& GroupName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& actionName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& actionInfo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& isCore() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& FStopCallback() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_registerStopCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CombineStopCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_initAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_playAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_stopAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_runAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateRunAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_preEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T get_ActionType() {
		return ((T (*)(CUAction*))(Il2CppBase() + 0x41AD8DC))(this);
	}
	template <typename T = Il2CppString*> static T get_G_nollActionName() {
		return ((T (*)(void *))(Il2CppBase() + 0x41AD864))(0);
	}
	template <typename T = int32_t> T get_runtimeID() {
		return ((T (*)(CUAction*))(Il2CppBase() + 0x41AD8E4))(this);
	}
	template <typename T = void> T set_runtimeID(int32_t value) {
		return ((T (*)(CUAction*, int32_t))(Il2CppBase() + 0x41AD8EC))(this, value);
	}
	template <typename T = int32_t> T get_index() {
		return ((T (*)(CUAction*))(Il2CppBase() + 0x41AD8F4))(this);
	}
	template <typename T = void> T set_index(int32_t value) {
		return ((T (*)(CUAction*, int32_t))(Il2CppBase() + 0x41AD8FC))(this, value);
	}
	template <typename T = void> T registerStopCallback(uintptr_t inFuc) {
		return ((T (*)(CUAction*, uintptr_t))(Il2CppBase() + 0x41AD904))(this, inFuc);
	}
	template <typename T = void> T CombineStopCallback(uintptr_t inFuc) {
		return ((T (*)(CUAction*, uintptr_t))(Il2CppBase() + 0x41AD9AC))(this, inFuc);
	}
	template <typename T = bool> T initAction(uintptr_t inObj) {
		return ((T (*)(CUAction*, uintptr_t))(Il2CppBase() + 0x1B9CC28))(this, inObj);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(CUAction*))(Il2CppBase() + 0x41ADBBC))(this);
	}
	template <typename T = bool> T playAction(uintptr_t inObj, float inFadeTime) {
		return ((T (*)(CUAction*, uintptr_t, float))(Il2CppBase() + 0x1B9CE6C))(this, inObj, inFadeTime);
	}
	template <typename T = bool> T stopAction(uintptr_t inObj) {
		return ((T (*)(CUAction*, uintptr_t))(Il2CppBase() + 0x1B9D214))(this, inObj);
	}
	template <typename T = bool> T runAction(float delta, uintptr_t inObj) {
		return ((T (*)(CUAction*, float, uintptr_t))(Il2CppBase() + 0x1B9D0E8))(this, delta, inObj);
	}
	template <typename T = bool> T LateRunAction(float delta, uintptr_t inObj) {
		return ((T (*)(CUAction*, float, uintptr_t))(Il2CppBase() + 0x1B9CD40))(this, delta, inObj);
	}
	template <typename T = bool> T preEvent(float delta, uintptr_t inEvent, uintptr_t inObj) {
		return ((T (*)(CUAction*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B9CF98))(this, delta, inEvent, inObj);
	}

};

}
