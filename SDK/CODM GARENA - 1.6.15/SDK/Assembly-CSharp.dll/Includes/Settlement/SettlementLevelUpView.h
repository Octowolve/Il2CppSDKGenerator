#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementLevelUpView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementLevelUpView"));
	}

	template <typename T = uintptr_t> T& LabelFrom() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& LabelTo() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& GridRoot() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& GoItemTemplate() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& BtnExit() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& ExitTip() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& mScrollView() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLevelInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLockoutInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetLevelInfo(int32_t OldLevel, int32_t NewLevel) {
		return ((T (*)(SettlementLevelUpView*, int32_t, int32_t))(Il2CppBase() + 0x296646C))(this, OldLevel, NewLevel);
	}
	template <typename T = void> T SetLockoutInfo(int32_t lockoutLevelFrom, int32_t lockoutLevelTo) {
		return ((T (*)(SettlementLevelUpView*, int32_t, int32_t))(Il2CppBase() + 0x296659C))(this, lockoutLevelFrom, lockoutLevelTo);
	}

};

}
