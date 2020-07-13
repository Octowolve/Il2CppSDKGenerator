#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponFireModeLockCmp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponFireModeLockCmp"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& mLockCheckList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LockCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveLockStateType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveTotalLockState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCheckTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T LockCheck(uintptr_t stateType, float lockTime) {
		return ((T (*)(WeaponFireModeLockCmp*, uintptr_t, float))(Il2CppBase() + 0x4C49508))(this, stateType, lockTime);
	}
	template <typename T = void> T RemoveLockStateType(uintptr_t stateType) {
		return ((T (*)(WeaponFireModeLockCmp*, uintptr_t))(Il2CppBase() + 0x4C497A0))(this, stateType);
	}
	template <typename T = void> T RemoveTotalLockState() {
		return ((T (*)(WeaponFireModeLockCmp*))(Il2CppBase() + 0x4C49A48))(this);
	}
	template <typename T = void> T UpdateCheckTime(float deltaTime) {
		return ((T (*)(WeaponFireModeLockCmp*, float))(Il2CppBase() + 0x4C49C78))(this, deltaTime);
	}

};

}
