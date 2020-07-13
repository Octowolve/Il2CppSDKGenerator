#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TimiAudio.AudioLogic {

class BombGameAudioLogic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TimiAudio.AudioLogic", "BombGameAudioLogic"));
	}

	template <typename T = uintptr_t> T& m_SoundConfig() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& TickingRoundCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mSndCfg() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_IsBombDefused() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_BombDefusingSoundHandle() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_BombTickingSoundHandle() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_pCurConfig() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& fCurrentTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_BombDefusedByMe() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& mBombPosition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& mFreezing() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& mFreezeEndTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> static T& kFreezeEndDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& mRoundCount() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnShowCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnStartPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnStartMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnEndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMatchEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnIHaveTheBomb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBombDroped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BombTickingCoRoutine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BombTickingSoundCoRoutine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerPickupTheBomb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBombPlanted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBombDefused() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopBombTickingSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopDefusingSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartDefusing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBombStatusChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBombExploded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStarted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDefuseCanceled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundFreezeEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyBombPlantedAtPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyBombFoundAtPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBombTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchSide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}

	template <typename T = void> T RegisterEventHandler() {
		return ((T (*)(BombGameAudioLogic*))(Il2CppBase() + 0x46642A4))(this);
	}
	template <typename T = void> T UnregisterEventHandler() {
		return ((T (*)(BombGameAudioLogic*))(Il2CppBase() + 0x46649D4))(this);
	}
	template <typename T = void> T _OnCountDown(int32_t iCount) {
		return ((T (*)(BombGameAudioLogic*, int32_t))(Il2CppBase() + 0x4664C74))(this, iCount);
	}
	template <typename T = void> T _OnShowCamp() {
		return ((T (*)(BombGameAudioLogic*))(Il2CppBase() + 0x4664DB0))(this);
	}
	template <typename T = void> T _OnStartPlay() {
		return ((T (*)(BombGameAudioLogic*))(Il2CppBase() + 0x4664EE4))(this);
	}
	template <typename T = void> T _OnStartMatch() {
		return ((T (*)(BombGameAudioLogic*))(Il2CppBase() + 0x4665018))(this);
	}
	template <typename T = void> T _OnEndMatch() {
		return ((T (*)(BombGameAudioLogic*))(Il2CppBase() + 0x466514C))(this);
	}
	template <typename T = void> T OnCountDown(uintptr_t pMsg) {
		return ((T (*)(BombGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x46651FC))(this, pMsg);
	}
	template <typename T = void> T OnShowCamp(uintptr_t pMsg) {
		return ((T (*)(BombGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x4665348))(this, pMsg);
	}
	template <typename T = void> T OnStartPlay(uintptr_t pMsg) {
		return ((T (*)(BombGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x4665400))(this, pMsg);
	}
	template <typename T = void> T OnStartMatch(uintptr_t pMsg) {
		return ((T (*)(BombGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x46654B8))(this, pMsg);
	}
	template <typename T = void> T OnMatchEnd(uintptr_t pMsg) {
		return ((T (*)(BombGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x4665570))(this, pMsg);
	}
	template <typename T = void> T OnIHaveTheBomb(uintptr_t Msg) {
		return ((T (*)(BombGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x4665628))(this, Msg);
	}
	template <typename T = void> T OnBombDroped(uintptr_t Msg) {
		return ((T (*)(BombGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466584C))(this, Msg);
	}
	template <typename T = void> T OnRoundChange(uintptr_t Msg) {
		return ((T (*)(BombGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x4665DC4))(this, Msg);
	}
	template <typename T = uintptr_t> T BombTickingCoRoutine() {
		return ((T (*)(BombGameAudioLogic*))(Il2CppBase() + 0x46660AC))(this);
	}
	template <typename T = uintptr_t> T BombTickingSoundCoRoutine() {
		return ((T (*)(BombGameAudioLogic*))(Il2CppBase() + 0x4666194))(this);
	}
	template <typename T = void> T OnPlayerPickupTheBomb(uintptr_t Msg) {
		return ((T (*)(BombGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466627C))(this, Msg);
	}
	template <typename T = void> T OnBombPlanted(uintptr_t Msg) {
		return ((T (*)(BombGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x46667E0))(this, Msg);
	}
	template <typename T = void> T OnBombDefused(uintptr_t Msg) {
		return ((T (*)(BombGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x4666CD4))(this, Msg);
	}
	template <typename T = void> T _StopBombTickingSound() {
		return ((T (*)(BombGameAudioLogic*))(Il2CppBase() + 0x4665F9C))(this);
	}
	template <typename T = void> T _StopDefusingSound() {
		return ((T (*)(BombGameAudioLogic*))(Il2CppBase() + 0x4666FC8))(this);
	}
	template <typename T = void> T OnStartDefusing(uintptr_t Msg) {
		return ((T (*)(BombGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x46670C4))(this, Msg);
	}
	template <typename T = void> T OnBombStatusChanged(uintptr_t Msg) {
		return ((T (*)(BombGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x46673C4))(this, Msg);
	}
	template <typename T = void> T OnBombExploded(uintptr_t Msg) {
		return ((T (*)(BombGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466756C))(this, Msg);
	}
	template <typename T = void> T OnRoundStarted(uintptr_t Msg) {
		return ((T (*)(BombGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x46678D0))(this, Msg);
	}
	template <typename T = void> T OnRoundEnded(uintptr_t Msg) {
		return ((T (*)(BombGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x4667E60))(this, Msg);
	}
	template <typename T = void> T OnDefuseCanceled(uintptr_t Msg) {
		return ((T (*)(BombGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466823C))(this, Msg);
	}
	template <typename T = void> T OnRoundFreezeEnd(uintptr_t Msg) {
		return ((T (*)(BombGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x46683F8))(this, Msg);
	}
	template <typename T = void> T NotifyBombPlantedAtPoint(uintptr_t Msg) {
		return ((T (*)(BombGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x4668548))(this, Msg);
	}
	template <typename T = void> T NotifyBombFoundAtPoint(uintptr_t Msg) {
		return ((T (*)(BombGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x4668850))(this, Msg);
	}
	template <typename T = void> T UpdateBombTime(uintptr_t Msg) {
		return ((T (*)(BombGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x4668B58))(this, Msg);
	}
	template <typename T = void> T OnEndUseItem(uintptr_t Msg) {
		return ((T (*)(BombGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x4668C9C))(this, Msg);
	}
	template <typename T = void> T SwitchSide(uintptr_t Msg) {
		return ((T (*)(BombGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x46690C8))(this, Msg);
	}
	template <typename T = uintptr_t> T get_SndCfg() {
		return ((T (*)(BombGameAudioLogic*))(Il2CppBase() + 0x46692A8))(this);
	}
	template <typename T = void> T SetGameMode(uintptr_t pMode, int32_t iMapID) {
		return ((T (*)(BombGameAudioLogic*, uintptr_t, int32_t))(Il2CppBase() + 0x46692B0))(this, pMode, iMapID);
	}

};

}
