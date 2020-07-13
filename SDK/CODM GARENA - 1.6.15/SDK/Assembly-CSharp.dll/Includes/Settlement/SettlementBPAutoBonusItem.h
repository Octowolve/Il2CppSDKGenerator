#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementBPAutoBonusItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementBPAutoBonusItem"));
	}

	template <typename T = uintptr_t> T& Title() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Num() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Lock() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& GoldBG() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& NormalBG() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayLockAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetInfo(Il2CppString* title, Il2CppString* num, bool isLock, bool isGoldBG, Il2CppString* iconName) {
		return ((T (*)(SettlementBPAutoBonusItem*, Il2CppString*, Il2CppString*, bool, bool, Il2CppString*))(Il2CppBase() + 0x3B60074))(this, title, num, isLock, isGoldBG, iconName);
	}
	template <typename T = void> T PlayLockAnim(bool isLock) {
		return ((T (*)(SettlementBPAutoBonusItem*, bool))(Il2CppBase() + 0x3B601E8))(this, isLock);
	}

};

}
