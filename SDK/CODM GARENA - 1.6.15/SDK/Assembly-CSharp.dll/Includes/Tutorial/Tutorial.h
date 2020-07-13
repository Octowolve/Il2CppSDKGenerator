#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class Tutorial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "Tutorial"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& guidelines() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFirstGuideline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindGuideline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasTutorialEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExecuteEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveDiabledGuidelines() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddGuideline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStarted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = bool> T get_InGame() {
		return ((T (*)(Tutorial*))(Il2CppBase() + 0x4B15A6C))(this);
	}
	template <typename T = bool> T HasFinished(uintptr_t eventType) {
		return ((T (*)(Tutorial*, uintptr_t))(Il2CppBase() + 0x4B15A74))(this, eventType);
	}
	template <typename T = bool> T IsFirstGuideline(uintptr_t eventType) {
		return ((T (*)(Tutorial*, uintptr_t))(Il2CppBase() + 0x4B15BBC))(this, eventType);
	}
	template <typename T = uintptr_t> T FindGuideline(uintptr_t eventType) {
		return ((T (*)(Tutorial*, uintptr_t))(Il2CppBase() + 0x4B15CBC))(this, eventType);
	}
	template <typename T = bool> T HasTutorialEvent(uintptr_t eventType) {
		return ((T (*)(Tutorial*, uintptr_t))(Il2CppBase() + 0x4B15E34))(this, eventType);
	}
	template <typename T = void> T ExecuteEvent(uintptr_t eventType, Il2CppArray<uintptr_t>* eventInfo) {
		return ((T (*)(Tutorial*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B15EEC))(this, eventType, eventInfo);
	}
	template <typename T = void> T RemoveDiabledGuidelines() {
		return ((T (*)(Tutorial*))(Il2CppBase() + 0x4B15FF0))(this);
	}
	template <typename T = void> T AddGuideline(uintptr_t newGuideline) {
		return ((T (*)(Tutorial*, uintptr_t))(Il2CppBase() + 0x4B16148))(this, newGuideline);
	}
	template <typename T = void> T RegisterDelegate(uintptr_t inEvent, uintptr_t callback) {
		return ((T (*)(Tutorial*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B1629C))(this, inEvent, callback);
	}
	template <typename T = bool> T CanTrigger(uintptr_t e) {
		return ((T (*)(Tutorial*, uintptr_t))(Il2CppBase() + 0x4B16368))(this, e);
	}
	template <typename T = void> T OnStarted() {
		return ((T (*)(Tutorial*))(Il2CppBase() + 0x4B164E8))(this);
	}
	template <typename T = void> T OnFinished() {
		return ((T (*)(Tutorial*))(Il2CppBase() + 0x4B16580))(this);
	}
	template <typename T = bool> static T RemoveDiabledGuidelinesm__0(uintptr_t removeGuidline) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B16618))(0, removeGuidline);
	}

};

}
