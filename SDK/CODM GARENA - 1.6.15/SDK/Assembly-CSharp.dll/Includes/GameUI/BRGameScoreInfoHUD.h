#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRGameScoreInfoHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRGameScoreInfoHUD"));
	}

	template <typename T = uintptr_t> T& SurviveLabel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& TotalLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& KillLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& NormalBG() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& OBBG() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& DoaTagRoot() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& DoaTagEffect() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& DoaTagNum() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& MineTagRoot() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& MineTagEffect() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& MineTagNum() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& totalCount() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& AlphaTween() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& mLastSurvivalCount() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> static T& kSurvivalCountRTPCName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAlivePeopleCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStyle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRealPlayerCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessSurvivalCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DogTagEventInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyDogTagEventActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDogTagEventActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDogTagEventNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDogTagEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideDogTagEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MineTagEventInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyMineTagEventActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyGoldCollect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMineTagEventActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMineTagEventNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleMineTagEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRGameScoreInfoHUD*))(Il2CppBase() + 0x2D8E284))(this);
	}
	template <typename T = uint64_t> T get_AlwaysShowGameHudState() {
		return ((T (*)(BRGameScoreInfoHUD*))(Il2CppBase() + 0x2D8E28C))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRGameScoreInfoHUD*))(Il2CppBase() + 0x2D8E298))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRGameScoreInfoHUD*))(Il2CppBase() + 0x2D8E2A8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BRGameScoreInfoHUD*))(Il2CppBase() + 0x2D8E2B0))(this);
	}
	template <typename T = void> T SetActive(bool value, bool enableOptimize) {
		return ((T (*)(BRGameScoreInfoHUD*, bool, bool))(Il2CppBase() + 0x2D8E85C))(this, value, enableOptimize);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRGameScoreInfoHUD*))(Il2CppBase() + 0x2D8EAC0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRGameScoreInfoHUD*))(Il2CppBase() + 0x2D8EF1C))(this);
	}
	template <typename T = void> T UpdateAlivePeopleCount(int32_t count) {
		return ((T (*)(BRGameScoreInfoHUD*, int32_t))(Il2CppBase() + 0x2D8EFFC))(this, count);
	}
	template <typename T = void> T OnSyncPlayerInfo(uint32_t playerID, uint32_t propertyID, uintptr_t msg) {
		return ((T (*)(BRGameScoreInfoHUD*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x2D8F258))(this, playerID, propertyID, msg);
	}
	template <typename T = void> T SetStyle(bool normalView) {
		return ((T (*)(BRGameScoreInfoHUD*, bool))(Il2CppBase() + 0x2D8F504))(this, normalView);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BRGameScoreInfoHUD*))(Il2CppBase() + 0x2D8F85C))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRGameScoreInfoHUD*, float))(Il2CppBase() + 0x2D8F964))(this, dt);
	}
	template <typename T = int32_t> T GetRealPlayerCount(Il2CppDictionary<uint32_t, uintptr_t>* playerMap) {
		return ((T (*)(BRGameScoreInfoHUD*, Il2CppDictionary<uint32_t, uintptr_t>*))(Il2CppBase() + 0x2D8FC7C))(this, playerMap);
	}
	template <typename T = void> T ProcessSurvivalCount(int32_t count) {
		return ((T (*)(BRGameScoreInfoHUD*, int32_t))(Il2CppBase() + 0x2D8F0AC))(this, count);
	}
	template <typename T = void> T DogTagEventInit() {
		return ((T (*)(BRGameScoreInfoHUD*))(Il2CppBase() + 0x2D8E3CC))(this);
	}
	template <typename T = void> T OnNotifyDogTagEventActive(uintptr_t Msg) {
		return ((T (*)(BRGameScoreInfoHUD*, uintptr_t))(Il2CppBase() + 0x2D9005C))(this, Msg);
	}
	template <typename T = void> T SetDogTagEventActive(bool isActive) {
		return ((T (*)(BRGameScoreInfoHUD*, bool))(Il2CppBase() + 0x2D8FF50))(this, isActive);
	}
	template <typename T = void> T SetDogTagEventNum(uint32_t num) {
		return ((T (*)(BRGameScoreInfoHUD*, uint32_t))(Il2CppBase() + 0x2D8F620))(this, num);
	}
	template <typename T = void> T PlayDogTagEffect() {
		return ((T (*)(BRGameScoreInfoHUD*))(Il2CppBase() + 0x2D90170))(this);
	}
	template <typename T = void> T HideDogTagEffect() {
		return ((T (*)(BRGameScoreInfoHUD*))(Il2CppBase() + 0x2D8EC6C))(this);
	}
	template <typename T = void> T MineTagEventInit() {
		return ((T (*)(BRGameScoreInfoHUD*))(Il2CppBase() + 0x2D8E614))(this);
	}
	template <typename T = void> T OnNotifyMineTagEventActive(uintptr_t msg) {
		return ((T (*)(BRGameScoreInfoHUD*, uintptr_t))(Il2CppBase() + 0x2D905A8))(this, msg);
	}
	template <typename T = void> T OnNotifyGoldCollect(uintptr_t msg) {
		return ((T (*)(BRGameScoreInfoHUD*, uintptr_t))(Il2CppBase() + 0x2D906BC))(this, msg);
	}
	template <typename T = void> T SetMineTagEventActive(bool isActive) {
		return ((T (*)(BRGameScoreInfoHUD*, bool))(Il2CppBase() + 0x2D902A0))(this, isActive);
	}
	template <typename T = void> T SetMineTagEventNum(uint32_t num) {
		return ((T (*)(BRGameScoreInfoHUD*, uint32_t))(Il2CppBase() + 0x2D8F73C))(this, num);
	}
	template <typename T = void> T HandleMineTagEffect(bool state) {
		return ((T (*)(BRGameScoreInfoHUD*, bool))(Il2CppBase() + 0x2D8ED84))(this, state);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(BRGameScoreInfoHUD*))(Il2CppBase() + 0x2D907EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetActive(bool P0, bool P1) {
		return ((T (*)(BRGameScoreInfoHUD*, bool, bool))(Il2CppBase() + 0x2D907F0))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRGameScoreInfoHUD*))(Il2CppBase() + 0x2D907F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRGameScoreInfoHUD*))(Il2CppBase() + 0x2D907F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncPlayerInfo(uint32_t P0, uint32_t P1, uintptr_t P2) {
		return ((T (*)(BRGameScoreInfoHUD*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x2D907FC))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(BRGameScoreInfoHUD*))(Il2CppBase() + 0x2D9081C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRGameScoreInfoHUD*, float))(Il2CppBase() + 0x2D90820))(this, P0);
	}

};

}
