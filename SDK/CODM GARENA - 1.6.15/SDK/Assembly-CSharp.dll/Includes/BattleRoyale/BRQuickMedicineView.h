#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRQuickMedicineView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRQuickMedicineView"));
	}

	template <typename T = uintptr_t> T& NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& NewGuideText() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T OnDisable() {
		return ((T (*)(BRQuickMedicineView*))(Il2CppBase() + 0x1B13694))(this);
	}
	template <typename T = void> T UpdateBg(bool isChange) {
		return ((T (*)(BRQuickMedicineView*, bool))(Il2CppBase() + 0x1B1387C))(this, isChange);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(BRQuickMedicineView*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1B1391C))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(BRQuickMedicineView*, uintptr_t))(Il2CppBase() + 0x1B13B90))(this, itemType);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(BRQuickMedicineView*))(Il2CppBase() + 0x1B13C8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateBg(bool P0) {
		return ((T (*)(BRQuickMedicineView*, bool))(Il2CppBase() + 0x1B13C94))(this, P0);
	}

};

}
