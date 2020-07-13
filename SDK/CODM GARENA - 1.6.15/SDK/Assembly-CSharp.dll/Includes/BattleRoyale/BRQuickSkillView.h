#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRQuickSkillView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRQuickSkillView"));
	}

	template <typename T = uintptr_t> T& GeneralRoot() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& CountLabelBackground() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& CancelBtn() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& PropBtn() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& PropFireBtn() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& PropUnequipBtn() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRQuickSkillView*))(Il2CppBase() + 0x1B1852C))(this);
	}
	template <typename T = uintptr_t> T get_mPawnSwitchState() {
		return ((T (*)(BRQuickSkillView*))(Il2CppBase() + 0x1B1853C))(this);
	}
	template <typename T = void> T RefreshUI(uintptr_t baseItemData, Il2CppList<uintptr_t>* upperItemDataList) {
		return ((T (*)(BRQuickSkillView*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1B18548))(this, baseItemData, upperItemDataList);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRQuickSkillView*))(Il2CppBase() + 0x1B18650))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRQuickSkillView*, float))(Il2CppBase() + 0x1B18658))(this, dt);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshUI(uintptr_t P0, Il2CppList<uintptr_t>* P1) {
		return ((T (*)(BRQuickSkillView*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1B1876C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRQuickSkillView*, float))(Il2CppBase() + 0x1B18770))(this, P0);
	}

};

}
