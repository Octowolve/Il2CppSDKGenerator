#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GamePrepareSystemDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GamePrepareSystemDataStore"));
	}

	template <typename T = int32_t> static T& PS_EQUIP_POSITION_BEG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& PS_EQUIP_POSITION_END() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PreWarPreparationList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_PSBuffItemCache() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_CurrentChallengeModeChapterId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_CurrentChallengeModeRoundId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_IsCurrentMapLastInChapter() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_ChallengeSkipOverInitScore() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_ChallengeSkipOverInitCoin() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_ChallengeReviveTimes() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& m_ChallengeKillCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& m_ChallengeHeadShotCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_ChallengeLastIsWin() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_ChallengeAddCardRes() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_UseLastRushPathIndex() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& m_LastRushPathIndex() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPreWarPreparationList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPreWarPreparationList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEquipPosNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPSBuffID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPSPassiveItemIDList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPSActiveItemIDList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsActiveItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPSItemIDList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPSBuffEquipedID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPSPassiveEquipedItemIDList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPSActiveEquipedItemIDList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPSPropItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPSBuffItemCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPSPropItemsInGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowNewTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowRedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordRushPathIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseRecordRushPathIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryUseRecordRushPathIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = Il2CppList<uint32_t>*> T GetPreWarPreparationList(int32_t modeId) {
		return ((T (*)(GamePrepareSystemDataStore*, int32_t))(Il2CppBase() + 0x1E8D63C))(this, modeId);
	}
	template <typename T = void> T SetPreWarPreparationList(Il2CppList<uintptr_t>* preWarPreparationList) {
		return ((T (*)(GamePrepareSystemDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1E8D8C0))(this, preWarPreparationList);
	}
	template <typename T = int32_t> T GetEquipPosNum(int32_t modeId) {
		return ((T (*)(GamePrepareSystemDataStore*, int32_t))(Il2CppBase() + 0x1E8DA08))(this, modeId);
	}
	template <typename T = uint64_t> T GetPSBuffID(int32_t modeId) {
		return ((T (*)(GamePrepareSystemDataStore*, int32_t))(Il2CppBase() + 0x1E8DAB0))(this, modeId);
	}
	template <typename T = Il2CppList<uint64_t>*> T GetPSPassiveItemIDList(int32_t modeId) {
		return ((T (*)(GamePrepareSystemDataStore*, int32_t))(Il2CppBase() + 0x1E8DB5C))(this, modeId);
	}
	template <typename T = Il2CppList<uint64_t>*> T GetPSActiveItemIDList(int32_t modeId) {
		return ((T (*)(GamePrepareSystemDataStore*, int32_t))(Il2CppBase() + 0x1E8DC40))(this, modeId);
	}
	template <typename T = bool> T IsActiveItem(uint64_t itemId) {
		return ((T (*)(GamePrepareSystemDataStore*, uint64_t))(Il2CppBase() + 0x1E8DD24))(this, itemId);
	}
	template <typename T = Il2CppList<uint64_t>*> T GetPSItemIDList(int32_t modeId) {
		return ((T (*)(GamePrepareSystemDataStore*, int32_t))(Il2CppBase() + 0x1E8DDE4))(this, modeId);
	}
	template <typename T = uintptr_t> T GetPSBuffEquipedID(int32_t modeId) {
		return ((T (*)(GamePrepareSystemDataStore*, int32_t))(Il2CppBase() + 0x1E8DFCC))(this, modeId);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetPSPassiveEquipedItemIDList(int32_t modeId) {
		return ((T (*)(GamePrepareSystemDataStore*, int32_t))(Il2CppBase() + 0x1E8E074))(this, modeId);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetPSActiveEquipedItemIDList(int32_t modeId) {
		return ((T (*)(GamePrepareSystemDataStore*, int32_t))(Il2CppBase() + 0x1E8E158))(this, modeId);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetPSPropItems(int32_t modeId) {
		return ((T (*)(GamePrepareSystemDataStore*, int32_t))(Il2CppBase() + 0x1E8E23C))(this, modeId);
	}
	template <typename T = void> T SetPSBuffItemCache(uintptr_t psBuffItem) {
		return ((T (*)(GamePrepareSystemDataStore*, uintptr_t))(Il2CppBase() + 0x1E8E3DC))(this, psBuffItem);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetPSPropItemsInGame(int32_t modeId) {
		return ((T (*)(GamePrepareSystemDataStore*, int32_t))(Il2CppBase() + 0x1E8E484))(this, modeId);
	}
	template <typename T = bool> T IsShowNewTips(int32_t modeId) {
		return ((T (*)(GamePrepareSystemDataStore*, int32_t))(Il2CppBase() + 0x1E8E634))(this, modeId);
	}
	template <typename T = bool> T IsShowRedPoint(int32_t modeId) {
		return ((T (*)(GamePrepareSystemDataStore*, int32_t))(Il2CppBase() + 0x1E8E6DC))(this, modeId);
	}
	template <typename T = int32_t> T get_CurrentChallengeModeChapterId() {
		return ((T (*)(GamePrepareSystemDataStore*))(Il2CppBase() + 0x1E8E7E0))(this);
	}
	template <typename T = void> T set_CurrentChallengeModeChapterId(int32_t value) {
		return ((T (*)(GamePrepareSystemDataStore*, int32_t))(Il2CppBase() + 0x1E8E7E8))(this, value);
	}
	template <typename T = int32_t> T get_CurrentChallengeModeRoundId() {
		return ((T (*)(GamePrepareSystemDataStore*))(Il2CppBase() + 0x1E8E7F0))(this);
	}
	template <typename T = void> T set_CurrentChallengeModeRoundId(int32_t value) {
		return ((T (*)(GamePrepareSystemDataStore*, int32_t))(Il2CppBase() + 0x1E8E7F8))(this, value);
	}
	template <typename T = bool> T get_IsCurrentMapLastInChapter() {
		return ((T (*)(GamePrepareSystemDataStore*))(Il2CppBase() + 0x1E8E800))(this);
	}
	template <typename T = void> T set_IsCurrentMapLastInChapter(bool value) {
		return ((T (*)(GamePrepareSystemDataStore*, bool))(Il2CppBase() + 0x1E8E808))(this, value);
	}
	template <typename T = int32_t> T get_ChallengeSkipOverInitScore() {
		return ((T (*)(GamePrepareSystemDataStore*))(Il2CppBase() + 0x1E8E810))(this);
	}
	template <typename T = void> T set_ChallengeSkipOverInitScore(int32_t value) {
		return ((T (*)(GamePrepareSystemDataStore*, int32_t))(Il2CppBase() + 0x1E8E818))(this, value);
	}
	template <typename T = int32_t> T get_ChallengeSkipOverInitCoin() {
		return ((T (*)(GamePrepareSystemDataStore*))(Il2CppBase() + 0x1E8E820))(this);
	}
	template <typename T = void> T set_ChallengeSkipOverInitCoin(int32_t value) {
		return ((T (*)(GamePrepareSystemDataStore*, int32_t))(Il2CppBase() + 0x1E8E828))(this, value);
	}
	template <typename T = int32_t> T get_ChallengeReviveTimes() {
		return ((T (*)(GamePrepareSystemDataStore*))(Il2CppBase() + 0x1E8E830))(this);
	}
	template <typename T = void> T set_ChallengeReviveTimes(int32_t value) {
		return ((T (*)(GamePrepareSystemDataStore*, int32_t))(Il2CppBase() + 0x1E8E838))(this, value);
	}
	template <typename T = uint32_t> T get_ChallengeKillCount() {
		return ((T (*)(GamePrepareSystemDataStore*))(Il2CppBase() + 0x1E8E840))(this);
	}
	template <typename T = void> T set_ChallengeKillCount(uint32_t value) {
		return ((T (*)(GamePrepareSystemDataStore*, uint32_t))(Il2CppBase() + 0x1E8E848))(this, value);
	}
	template <typename T = uint32_t> T get_ChallengeHeadShotCount() {
		return ((T (*)(GamePrepareSystemDataStore*))(Il2CppBase() + 0x1E8E850))(this);
	}
	template <typename T = void> T set_ChallengeHeadShotCount(uint32_t value) {
		return ((T (*)(GamePrepareSystemDataStore*, uint32_t))(Il2CppBase() + 0x1E8E858))(this, value);
	}
	template <typename T = bool> T get_ChallengeLastIsWin() {
		return ((T (*)(GamePrepareSystemDataStore*))(Il2CppBase() + 0x1E8E860))(this);
	}
	template <typename T = void> T set_ChallengeLastIsWin(bool value) {
		return ((T (*)(GamePrepareSystemDataStore*, bool))(Il2CppBase() + 0x1E8E868))(this, value);
	}
	template <typename T = uintptr_t> T get_ChallengeAddCardRes() {
		return ((T (*)(GamePrepareSystemDataStore*))(Il2CppBase() + 0x1E8E870))(this);
	}
	template <typename T = void> T set_ChallengeAddCardRes(uintptr_t value) {
		return ((T (*)(GamePrepareSystemDataStore*, uintptr_t))(Il2CppBase() + 0x1E8E878))(this, value);
	}
	template <typename T = void> T RecordRushPathIndex(int32_t lastPathIndex) {
		return ((T (*)(GamePrepareSystemDataStore*, int32_t))(Il2CppBase() + 0x1E8E880))(this, lastPathIndex);
	}
	template <typename T = void> T UseRecordRushPathIndex() {
		return ((T (*)(GamePrepareSystemDataStore*))(Il2CppBase() + 0x1E8E928))(this);
	}
	template <typename T = bool> T TryUseRecordRushPathIndex(uintptr_t index) {
		return ((T (*)(GamePrepareSystemDataStore*, uintptr_t))(Il2CppBase() + 0x1E8E9CC))(this, index);
	}

};

}
