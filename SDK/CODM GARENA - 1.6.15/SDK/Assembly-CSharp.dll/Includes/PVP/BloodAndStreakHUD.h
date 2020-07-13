#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class BloodAndStreakHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "BloodAndStreakHUD"));
	}

	template <typename T = uintptr_t> T& SelfRootWidget() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& BloodInfo() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& KillStreakInfo() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& EquippedStreakStateInfoList() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& CarePackageStreakStateInfo() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& mNuclearBombClass() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& SingleBloodInfo() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_EquippedScoreStreakDataList() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& m_StartScoreOffset() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& m_IsAimming() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& m_IsSingleBolldMode() {
		return *(T*)((uintptr_t)this + 0xA1);
	}
	template <typename T = uintptr_t> T& m_LastLocalPawnPhysicsState() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PlayObtainSoundRecordList() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& m_LastCheckStreakStateTime() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> static T& HP_THREE_STYLE_VALUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& scoreTemp() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uint32_t> T& m_CurRuningStreakID() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& T_TargetClickedHandler() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BloodAndStreakHUD*))(Il2CppBase() + 0x406EE88))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BloodAndStreakHUD*))(Il2CppBase() + 0x406EE90))(this);
	}
	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(BloodAndStreakHUD*))(Il2CppBase() + 0x406EEA0))(this);
	}
	template <typename T = uintptr_t> T get_mPawnSwitchState() {
		return ((T (*)(BloodAndStreakHUD*))(Il2CppBase() + 0x406EEAC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BloodAndStreakHUD*))(Il2CppBase() + 0x406EEB8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BloodAndStreakHUD*))(Il2CppBase() + 0x406EFC8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BloodAndStreakHUD*))(Il2CppBase() + 0x406F094))(this);
	}
	template <typename T = void> T CheckSingleBolldMode() {
		return ((T (*)(BloodAndStreakHUD*))(Il2CppBase() + 0x406F09C))(this);
	}
	template <typename T = void> T ShowBloodContainer(bool isShow) {
		return ((T (*)(BloodAndStreakHUD*, bool))(Il2CppBase() + 0x406F2C8))(this, isShow);
	}
	template <typename T = void> T ShowKillStreakContainer(bool isShow) {
		return ((T (*)(BloodAndStreakHUD*, bool))(Il2CppBase() + 0x406F3A0))(this, isShow);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BloodAndStreakHUD*))(Il2CppBase() + 0x406F478))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BloodAndStreakHUD*))(Il2CppBase() + 0x406FD08))(this);
	}
	template <typename T = void> T OnUseStreak1(uintptr_t obj, bool state) {
		return ((T (*)(BloodAndStreakHUD*, uintptr_t, bool))(Il2CppBase() + 0x4070044))(this, obj, state);
	}
	template <typename T = void> T OnUseStreak2(uintptr_t obj, bool state) {
		return ((T (*)(BloodAndStreakHUD*, uintptr_t, bool))(Il2CppBase() + 0x4070170))(this, obj, state);
	}
	template <typename T = void> T OnUseStreak3(uintptr_t obj, bool state) {
		return ((T (*)(BloodAndStreakHUD*, uintptr_t, bool))(Il2CppBase() + 0x407029C))(this, obj, state);
	}
	template <typename T = bool> T UseStreak1() {
		return ((T (*)(BloodAndStreakHUD*))(Il2CppBase() + 0x4070050))(this);
	}
	template <typename T = bool> T UseStreak2() {
		return ((T (*)(BloodAndStreakHUD*))(Il2CppBase() + 0x407017C))(this);
	}
	template <typename T = bool> T UseStreak3() {
		return ((T (*)(BloodAndStreakHUD*))(Il2CppBase() + 0x40702A8))(this);
	}
	template <typename T = void> T OnUseCarePackageStreak(uintptr_t obj, bool state) {
		return ((T (*)(BloodAndStreakHUD*, uintptr_t, bool))(Il2CppBase() + 0x4071048))(this, obj, state);
	}
	template <typename T = void> T OnUseNuclearBombStreak(uintptr_t obj, bool state) {
		return ((T (*)(BloodAndStreakHUD*, uintptr_t, bool))(Il2CppBase() + 0x40711D4))(this, obj, state);
	}
	template <typename T = bool> T UseCarePackageStreak() {
		return ((T (*)(BloodAndStreakHUD*))(Il2CppBase() + 0x4071054))(this);
	}
	template <typename T = void> T OnUseStreakBomb(uintptr_t obj, bool state) {
		return ((T (*)(BloodAndStreakHUD*, uintptr_t, bool))(Il2CppBase() + 0x40713E4))(this, obj, state);
	}
	template <typename T = bool> T UseStreakBomb() {
		return ((T (*)(BloodAndStreakHUD*))(Il2CppBase() + 0x40711E0))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BloodAndStreakHUD*))(Il2CppBase() + 0x40713F0))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BloodAndStreakHUD*, float))(Il2CppBase() + 0x40713F8))(this, dt);
	}
	template <typename T = void> T OnRoundStart() {
		return ((T (*)(BloodAndStreakHUD*))(Il2CppBase() + 0x4071968))(this);
	}
	template <typename T = void> T UpdateHPInfo() {
		return ((T (*)(BloodAndStreakHUD*))(Il2CppBase() + 0x4071978))(this);
	}
	template <typename T = void> T OnSyncPlayerInfo(uint32_t playerID, uint32_t propertyID, uintptr_t msg) {
		return ((T (*)(BloodAndStreakHUD*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x4071AE0))(this, playerID, propertyID, msg);
	}
	template <typename T = void> T SetHPValue(float hpPercent) {
		return ((T (*)(BloodAndStreakHUD*, float))(Il2CppBase() + 0x4071C6C))(this, hpPercent);
	}
	template <typename T = void> T UpdateScoreStreakDataInfo() {
		return ((T (*)(BloodAndStreakHUD*))(Il2CppBase() + 0x4071E78))(this);
	}
	template <typename T = void> T InitStreakStateInfo() {
		return ((T (*)(BloodAndStreakHUD*))(Il2CppBase() + 0x4072160))(this);
	}
	template <typename T = void> T InitStreakStateInfoItem(uint32_t scoreStreakID, bool isCarePackageStreak, uintptr_t streakStateInfo) {
		return ((T (*)(BloodAndStreakHUD*, uint32_t, bool, uintptr_t))(Il2CppBase() + 0x40726A0))(this, scoreStreakID, isCarePackageStreak, streakStateInfo);
	}
	template <typename T = bool> T IsAnyStreakColdDown() {
		return ((T (*)(BloodAndStreakHUD*))(Il2CppBase() + 0x407182C))(this);
	}
	template <typename T = bool> T UpdateStreakStateInfoItem(uintptr_t streakStateInfo) {
		return ((T (*)(BloodAndStreakHUD*, uintptr_t))(Il2CppBase() + 0x40728F8))(this, streakStateInfo);
	}
	template <typename T = int32_t> T GetColdDownTime(uint32_t weaponID) {
		return ((T (*)(BloodAndStreakHUD*, uint32_t))(Il2CppBase() + 0x407058C))(this, weaponID);
	}
	template <typename T = void> T OnStreakSkillChanged(uintptr_t msg) {
		return ((T (*)(BloodAndStreakHUD*, uintptr_t))(Il2CppBase() + 0x40736D8))(this, msg);
	}
	template <typename T = void> T OnStreakSkillDataReady(uintptr_t msg) {
		return ((T (*)(BloodAndStreakHUD*, uintptr_t))(Il2CppBase() + 0x40740B4))(this, msg);
	}
	template <typename T = uintptr_t> T GetPlayObtainSoundRecord(int32_t ID) {
		return ((T (*)(BloodAndStreakHUD*, int32_t))(Il2CppBase() + 0x4073F08))(this, ID);
	}
	template <typename T = void> T FixScoreOffset(int32_t realScore) {
		return ((T (*)(BloodAndStreakHUD*, int32_t))(Il2CppBase() + 0x4073314))(this, realScore);
	}
	template <typename T = void> T NotifyKillStreakChange(int32_t weaponID, int32_t count, bool isCarePackageStreak) {
		return ((T (*)(BloodAndStreakHUD*, int32_t, int32_t, bool))(Il2CppBase() + 0x4073BBC))(this, weaponID, count, isCarePackageStreak);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BloodAndStreakHUD*))(Il2CppBase() + 0x40740CC))(this);
	}
	template <typename T = uintptr_t> T GetStreakFromWeaponNameifHas(int32_t weaponID) {
		return ((T (*)(BloodAndStreakHUD*, int32_t))(Il2CppBase() + 0x4073DAC))(this, weaponID);
	}
	template <typename T = void> T UpdateStreakState() {
		return ((T (*)(BloodAndStreakHUD*))(Il2CppBase() + 0x4074114))(this);
	}
	template <typename T = bool> T IsCanUseStreak() {
		return ((T (*)(BloodAndStreakHUD*))(Il2CppBase() + 0x40703C8))(this);
	}
	template <typename T = void> T OnStreakClick(int32_t streakID, uintptr_t streakStateInfo) {
		return ((T (*)(BloodAndStreakHUD*, int32_t, uintptr_t))(Il2CppBase() + 0x407077C))(this, streakID, streakStateInfo);
	}
	template <typename T = void> T UpdateNuclearBombState() {
		return ((T (*)(BloodAndStreakHUD*))(Il2CppBase() + 0x4075254))(this);
	}
	template <typename T = void> T OnSwitchAimmingState(uintptr_t msg) {
		return ((T (*)(BloodAndStreakHUD*, uintptr_t))(Il2CppBase() + 0x4075718))(this, msg);
	}
	template <typename T = void> T OnKillStreakTweenFinished() {
		return ((T (*)(BloodAndStreakHUD*))(Il2CppBase() + 0x40758E0))(this);
	}
	template <typename T = bool> T CheckUseItemSpace(int32_t type, float size) {
		return ((T (*)(BloodAndStreakHUD*, int32_t, float))(Il2CppBase() + 0x4074428))(this, type, size);
	}
	template <typename T = Il2CppVector3> T CalcSpawnSkillItemPosition() {
		return ((T (*)(BloodAndStreakHUD*))(Il2CppBase() + 0x4074EE8))(this);
	}
	template <typename T = bool> T CheckOneDirectionSpace(Il2CppVector3 pawnPosition, Il2CppVector3 direction, float size) {
		return ((T (*)(BloodAndStreakHUD*, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x4075A2C))(this, pawnPosition, direction, size);
	}
	template <typename T = void> T SetStreakHUDActive(bool active) {
		return ((T (*)(BloodAndStreakHUD*, bool))(Il2CppBase() + 0x4075B58))(this, active);
	}
	template <typename T = void> T OnNotifyTutorialFinalChangeScoreStreak(uintptr_t MSG) {
		return ((T (*)(BloodAndStreakHUD*, uintptr_t))(Il2CppBase() + 0x4075D64))(this, MSG);
	}
	template <typename T = void> T T_OnClick() {
		return ((T (*)(BloodAndStreakHUD*))(Il2CppBase() + 0x40751D8))(this);
	}
	template <typename T = void> T T_SetClickHandler(uintptr_t clickHandler) {
		return ((T (*)(BloodAndStreakHUD*, uintptr_t))(Il2CppBase() + 0x4075F60))(this, clickHandler);
	}

};

}
