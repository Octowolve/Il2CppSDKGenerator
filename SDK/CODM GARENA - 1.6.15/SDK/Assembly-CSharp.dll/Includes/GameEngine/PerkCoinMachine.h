#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PerkCoinMachine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PerkCoinMachine"));
	}

	template <typename T = uintptr_t> T& machineType() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& controlledByLua() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& perkCoinModelAsset() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& perkCoinRedAsset() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& perkCoinBlueAsset() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& perkCoinModel() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& activeEffect() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& coinPoint() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& initialHidden() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& buyCount() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uint32_t> T& currentCoinID() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> static T& currentBuyCost() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& autoDropCoinDuration() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& AutoDropTime() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& perkCoinHUD() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& m_Pawn() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> static T& currentActiveCoinMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& machineAnimController() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& machineEffectController() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& redCoin() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& blueCoin() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& currentCoin() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& currentCoinConf() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& m_PerkCoinInteractiveHUD() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelObjectType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerEnterExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyInteractiveContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedCheckBeforeInteractive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCheckBeforeInteractive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCoinTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideCoinTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetCoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoDropCoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConsumeCoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAvailableEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayMachineAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncUsability() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = uint32_t> T get_currentCoinID() {
		return ((T (*)(PerkCoinMachine*))(Il2CppBase() + 0x27416F4))(this);
	}
	template <typename T = void> T set_currentCoinID(uint32_t value) {
		return ((T (*)(PerkCoinMachine*, uint32_t))(Il2CppBase() + 0x27416FC))(this, value);
	}
	template <typename T = int32_t> static T get_currentBuyCost() {
		return ((T (*)(void *))(Il2CppBase() + 0x2741704))(0);
	}
	template <typename T = void> static T set_currentBuyCost(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2741784))(0, value);
	}
	template <typename T = uintptr_t> T GetLevelObjectType() {
		return ((T (*)(PerkCoinMachine*))(Il2CppBase() + 0x2741808))(this);
	}
	template <typename T = uintptr_t> static T get_currentActiveCoinMachine() {
		return ((T (*)(void *))(Il2CppBase() + 0x27418A8))(0);
	}
	template <typename T = void> static T set_currentActiveCoinMachine(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2741928))(0, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PerkCoinMachine*))(Il2CppBase() + 0x27419AC))(this);
	}
	template <typename T = bool> T get_canUse() {
		return ((T (*)(PerkCoinMachine*))(Il2CppBase() + 0x2741FA0))(this);
	}
	template <typename T = void> T OnLocalPlayerEnterExit(uintptr_t p, bool enter) {
		return ((T (*)(PerkCoinMachine*, uintptr_t, bool))(Il2CppBase() + 0x2741FF4))(this, p, enter);
	}
	template <typename T = void> T NotifyInteractiveContext(bool show) {
		return ((T (*)(PerkCoinMachine*, bool))(Il2CppBase() + 0x2742464))(this, show);
	}
	template <typename T = bool> T NeedCheckBeforeInteractive() {
		return ((T (*)(PerkCoinMachine*))(Il2CppBase() + 0x27426B8))(this);
	}
	template <typename T = bool> T OnCheckBeforeInteractive() {
		return ((T (*)(PerkCoinMachine*))(Il2CppBase() + 0x2742758))(this);
	}
	template <typename T = void> T ShowCoinTip() {
		return ((T (*)(PerkCoinMachine*))(Il2CppBase() + 0x2742340))(this);
	}
	template <typename T = void> T HideCoinTip() {
		return ((T (*)(PerkCoinMachine*))(Il2CppBase() + 0x274221C))(this);
	}
	template <typename T = void> T OnGetCoin(uint32_t coinID) {
		return ((T (*)(PerkCoinMachine*, uint32_t))(Il2CppBase() + 0x27429DC))(this, coinID);
	}
	template <typename T = void> T AutoDropCoin() {
		return ((T (*)(PerkCoinMachine*))(Il2CppBase() + 0x274360C))(this);
	}
	template <typename T = void> T OnConsumeCoin(bool drop) {
		return ((T (*)(PerkCoinMachine*, bool))(Il2CppBase() + 0x27436D0))(this, drop);
	}
	template <typename T = void> T UpdateAvailableEffect() {
		return ((T (*)(PerkCoinMachine*))(Il2CppBase() + 0x27434AC))(this);
	}
	template <typename T = void> T PlayMachineAnim(bool open) {
		return ((T (*)(PerkCoinMachine*, bool))(Il2CppBase() + 0x2743214))(this, open);
	}
	template <typename T = void> T OnSyncUsability(bool available) {
		return ((T (*)(PerkCoinMachine*, bool))(Il2CppBase() + 0x274397C))(this, available);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(PerkCoinMachine*))(Il2CppBase() + 0x2743A1C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(PerkCoinMachine*))(Il2CppBase() + 0x2743ACC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PerkCoinMachine*))(Il2CppBase() + 0x2743C64))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetLevelObjectType() {
		return ((T (*)(PerkCoinMachine*))(Il2CppBase() + 0x2743D18))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PerkCoinMachine*))(Il2CppBase() + 0x2743D20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLocalPlayerEnterExit(uintptr_t P0, bool P1) {
		return ((T (*)(PerkCoinMachine*, uintptr_t, bool))(Il2CppBase() + 0x2743D28))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_NotifyInteractiveContext(bool P0) {
		return ((T (*)(PerkCoinMachine*, bool))(Il2CppBase() + 0x2743D30))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedCheckBeforeInteractive() {
		return ((T (*)(PerkCoinMachine*))(Il2CppBase() + 0x2743D38))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_OnCheckBeforeInteractive() {
		return ((T (*)(PerkCoinMachine*))(Il2CppBase() + 0x2743D40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncUsability(bool P0) {
		return ((T (*)(PerkCoinMachine*, bool))(Il2CppBase() + 0x2743D48))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(PerkCoinMachine*))(Il2CppBase() + 0x2743D50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(PerkCoinMachine*))(Il2CppBase() + 0x2743D58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(PerkCoinMachine*))(Il2CppBase() + 0x2743D60))(this);
	}

};

}
