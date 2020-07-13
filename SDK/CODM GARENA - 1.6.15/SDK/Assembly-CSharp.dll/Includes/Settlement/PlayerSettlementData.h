#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PlayerSettlementData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PlayerSettlementData"));
	}

	template <typename T = uintptr_t> T& camp() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& isValid() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isLocalPlayer() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = int32_t> T& curLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& peakLevel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint64_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& PlayerUID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& playerName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& PicInfo() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& PlayerSex() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint64_t> T& role_id() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& bagWeaponStatis() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Medals() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& isMvp() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& is_fail_mvp() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = Il2CppString*> T& score() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& kills() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& deaths() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& assists() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& total_take_damage() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uint32_t> T& TeamId() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint32_t> T& PlayerRank() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uint32_t> T& TeamRank() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& Accuracy() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& HeadShotAccuracy() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uint32_t> T& ItemScore() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uint32_t> T& SurvivalScore() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uint32_t> T& FightingScore() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uint32_t> T& AssistScore() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uint32_t> T& InjureScore() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uint32_t> T& KillScore() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uint32_t> T& PassTimeScore() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uint32_t> T& AccuracyScore() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uint32_t> T& CritScore() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uint32_t> T& DeathScore() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uint32_t> T& AverageScore() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uint32_t> T& SurvivalTime() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& score_details() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uint32_t> T& times_player_become_goliath() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& times_capture_stronghold() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppString*> T& hp_kills() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& captures() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppString*> T& CaptureScore() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& plants() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppString*> T& defuses() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uint32_t> T& Spvp_Ladder_Score() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uint32_t> T& Spvp_Ladder_Level() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppString*> T& MaxCombo() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uint32_t> T& UseMostWeaponId() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uint64_t> T& totalTakeBossDamage() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& BossDamagePercent() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uint32_t> T& TotalKillZombie() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& TotalDamageRatio() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uint64_t> T& TotalDamage() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uint64_t> T& AverageRoundDamage() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& CardRewardItems() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& CardRewardPropItems() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AddItems() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& brAddGold() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& brAddExp() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& brTotalTakeDamage() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = float> T& brTotalGetDamgae() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uint32_t> T& brCureValue() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uint32_t> T& brTimesCure() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uint32_t> T& brPlayerGameState() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uint32_t> T& brTeamGameState() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uint32_t> T& brTimesSave() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uint32_t> T& brTimesReborn() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uint32_t> T& brRatingScore() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uint32_t> T& brScore() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = float> T& brForwardDistance() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uint32_t> T& brUseSkillTimes() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = int32_t> T& brLadderScore() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = int32_t> T& brLadderLevel() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uint32_t> T& teammate_dog_tag_value() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
