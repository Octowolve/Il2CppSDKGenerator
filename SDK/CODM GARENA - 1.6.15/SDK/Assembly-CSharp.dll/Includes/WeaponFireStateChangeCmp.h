#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponFireStateChangeCmp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponFireStateChangeCmp"));
	}

	template <typename T = uintptr_t> T& mEndPawnState() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mCallBack() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> static T& DelayTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndCurrentStateToOther() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCallBackFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNeedEndCurState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCurState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDelayTriggerCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoEndTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T EndCurrentStateToOther(uintptr_t endState, uintptr_t callBackFunc) {
		return ((T (*)(WeaponFireStateChangeCmp*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C4BC90))(this, endState, callBackFunc);
	}
	template <typename T = void> T SetCallBackFunc(uintptr_t callBackFunc) {
		return ((T (*)(WeaponFireStateChangeCmp*, uintptr_t))(Il2CppBase() + 0x4C4C0FC))(this, callBackFunc);
	}
	template <typename T = uintptr_t> T GetNeedEndCurState() {
		return ((T (*)(WeaponFireStateChangeCmp*))(Il2CppBase() + 0x4C4C328))(this);
	}
	template <typename T = bool> T CheckCurState(uintptr_t callBack, uintptr_t checkState) {
		return ((T (*)(WeaponFireStateChangeCmp*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C4C53C))(this, callBack, checkState);
	}
	template <typename T = void> T CheckDelayTriggerCallBack() {
		return ((T (*)(WeaponFireStateChangeCmp*))(Il2CppBase() + 0x4C4C668))(this);
	}
	template <typename T = void> T DoEndTrigger() {
		return ((T (*)(WeaponFireStateChangeCmp*))(Il2CppBase() + 0x4C4C8A4))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(WeaponFireStateChangeCmp*))(Il2CppBase() + 0x4C4CAF4))(this);
	}

};

}
