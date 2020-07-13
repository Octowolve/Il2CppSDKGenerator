#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RankGame {

class RankMultiTab
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RankGame", "RankMultiTab"));
	}

	template <typename T = int32_t> T& Group() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_callBack() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& Static_List() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& extraHighObjs() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& extraLowObjs() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& highLabel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& lowLabel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& isInvisible() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& isSelect() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = uintptr_t> T& FinishCount_High() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& FinishCount_Low() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& LockSprite_High() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& LockSprite_Low() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClickSelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClickSelf_NotCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClickTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTabState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLabelString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBattlePassWeekTaskFinishCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBattlePassWeekTaskLockSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RankMultiTab*))(Il2CppBase() + 0x3812F68))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(RankMultiTab*))(Il2CppBase() + 0x3813108))(this);
	}
	template <typename T = void> T OnClickTab(uintptr_t obj) {
		return ((T (*)(RankMultiTab*, uintptr_t))(Il2CppBase() + 0x3813248))(this, obj);
	}
	template <typename T = void> T ClickSelf() {
		return ((T (*)(RankMultiTab*))(Il2CppBase() + 0x380A994))(this);
	}
	template <typename T = void> T ClickSelf_NotCallBack() {
		return ((T (*)(RankMultiTab*))(Il2CppBase() + 0x3813AD4))(this);
	}
	template <typename T = void> T SetCallBack(void* fun) {
		return ((T (*)(RankMultiTab*, void*))(Il2CppBase() + 0x380A7AC))(this, fun);
	}
	template <typename T = void> static T ClickTab(uintptr_t tab, bool doNotdefaultCallback) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x3813348))(0, tab, doNotdefaultCallback);
	}
	template <typename T = void> static T SetTabState(uintptr_t tab, bool isActive) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x3813BCC))(0, tab, isActive);
	}
	template <typename T = void> T SetLabelString(Il2CppString* text) {
		return ((T (*)(RankMultiTab*, Il2CppString*))(Il2CppBase() + 0x3813E28))(this, text);
	}
	template <typename T = void> T SetBattlePassWeekTaskFinishCount(Il2CppString* finishCount) {
		return ((T (*)(RankMultiTab*, Il2CppString*))(Il2CppBase() + 0x3813F60))(this, finishCount);
	}
	template <typename T = void> T SetBattlePassWeekTaskLockSprite(bool isLock) {
		return ((T (*)(RankMultiTab*, bool))(Il2CppBase() + 0x3814098))(this, isLock);
	}

};

}
