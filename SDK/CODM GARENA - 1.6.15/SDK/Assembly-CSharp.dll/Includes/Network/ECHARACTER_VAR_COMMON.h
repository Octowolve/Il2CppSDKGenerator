#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class ECHARACTERVARCOMMON
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "ECHARACTER_VAR_COMMON"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_CHARACTER_CAMP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_CHARACTER_PLAYER_STATE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_CHARACTER_CANUSEREVIVAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_CHARACTER_PLAYER_LEVEL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_CHARACTER_WEAPON_STATE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_CHARACTER_LOCK_STATE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_CHARACTER_NPC_STATE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_CHARACTER_RUN_ENERGY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_CHARACTER_BAG_MANUAL_SELECTED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_GOD_FLAG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_DAMAGE_ULT_PERCENT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_TAUNT_STATUS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_CONVERGE_TAG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_CHARACTER_VEHICLE_STATE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_CHARACTER_SEATID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_VTOL_STATE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_CHARACTER_BAGID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_TEAM_ROLE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_SKYDIVING_FOLLOW_STAT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_CHARACTER_ULT_LAYER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_CHARACTER_PARACHUTE_STAT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_BR_PLAYER_STAT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_CHARACTER_VISION_RANGE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_CERBERUS_HEAD_STATE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_WAR_STATUS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_BUFF_LAYER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_DEBUFF_LAYER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_ANGRY_PHASE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_LEFT_RESPAWN_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_IS_LEAVE_LEADER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_ESCAR_CUR_ATTACK_NUM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_ESCAR_MAX_ATTACK_NUM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_IN_ULT_INVISIBLE_MAN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_CHARACTER_GENDER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_TMDOGTAG_CONFIRM_NUM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_TMDOGTAG_DENY_NUM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_UNILATERAL_HOLD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_CLOSE_SHOW_BALLPROF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_ULT_STATE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_TMDOGTAG_GOLDRUSH_NUM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_ADS_STATE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_INVISIBLE_MAN_AROUND() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_RAW_LEADER_SEATID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_CHARACTER_WEAPON_HOLD_STATE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_SCORESTREAK_STATE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_CHARACTER_SHADOW_BLADE_FIRE_MODE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT8VAR_CHARACTER_END() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_BEGIN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_HEALTHPOINT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_KILLED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_DEATH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_WEAPONRESID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_SCORE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_SKILLID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_SPEED_SCALE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_DAMAGE_SCALE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_ATTACK_SCALE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_MAX_HEALTHPOINT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_LEVEL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_ROLERESID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_ARMOR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_MAX_ARMOR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_SHOOTSCALE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_SELECTED_ITEM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_GAME_MONEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_PLAYER_EXP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_PLAYER_GAME_POINT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_PLAYER_DIAMOND() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_REVIVAL_TIMES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_PLAYER_RESPAWN_LEFT_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_BOSS_DAMAGE_PERCENT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_NPC_MOVE_SPEED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_JUMP_SCALE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_GRENADE_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_RELOAD_SCALE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_TOWER_COLOR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_BUY_EXP_TIMES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_SHIELD_BUFF_HEALTHPOINT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_TOWER_GRID_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_TELEPORT_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_GAME_LEVEL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_PLAYER_STAGE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_GAINED_EXP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_RAW_EXP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_POINT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_ASSIST_CNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_CAPTURE_STRONGHOLD_CNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_DEFEND_STRONGHOLD_CNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_PLANT_BOMB_CNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_BOMB_DETONATED_CNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_BODY_FRAGMENT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_ULT_ENERGY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_REALDAMAGE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_SPI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_REVIVAL_COIN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_STREAKSCORE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_VEHICLEID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_TEAMID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_SEATID_IN_VEHICLE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_ENERGYPOINT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_MEDICINE_MAXADDHP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_BOSS_DAMAGE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_OXYGEN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_OXYGEN_QUANTITY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_DEFEND_KILLED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_FREE_REVIVAL_COIN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_GAME_POINT_BUFF_SCALE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_PLAYER_PEAK_LEVEL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_HOLDING_ACTOR_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_ULT_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_REST_USE_REVIVAL_TIMES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_WEAPON_ACTORID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_PROFESSION_CHIP_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_PERK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_MAX_USE_REVIVAL_TIMES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_LEFT_WEAPON_RESID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_LEFT_WEAPON_ACTORID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_PRECHOICE_CHIP_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_BAG_APPEAR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_ZIPLINE_UID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_LONG_MAX_HP_H() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_LONG_MAX_HP_L() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_LONG_HP_H() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_LONG_HP_L() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_TWINE_TARGET_UIN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_TWINED_BY_VINE_UIN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_INTERACTION_OPE_TYPE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_INTERACTION_OPE_TIME_MS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_LAST_VEHICLE_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_TEAMMATE_DOG_TAG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_WINGSUIT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_PARACHUTE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_PLAYER_BITSTATE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_OPERATOR_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_NPC_MODEL_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_NPC_ANIMATION_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_NPC_BUTTON_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_NPC_BUTTON_MESSAGE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_NPC_HIDE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_NPC_BUTTON_PARAM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_NPC_COST_POINT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_NPC_PERKMACHINE_PERKID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_NPC_TIP_MESSAGE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_NPC_ANIMATION_STATE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_MLK_LastWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_MLK_NextWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_NPC_MAGIC_BOX_WEAPON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_NPC_BUTTON_CONTENT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_ROLE_RES_ID_H() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_ROLE_RES_ID_L() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_RESCUED_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_SKYDIVING_ROTATEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_CUR_POS_X() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_CUR_POS_Z() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_SAS_Weapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_NPC_MAGIC_BOX_PLAYER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_WEAPON_PAP_LEVEL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_BUFF_SLOT_NUM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_SIGNALPOINT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_MAX_SIGNALPOINT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_HEAD_RESID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_FASTEN_ME_ACTOR_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_HAT_APPEAR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_CLOTH_APPEAR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_SUIT_APPEAR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_NPC_FLAG_DROP_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_TOTAL_TAKE_DAMAGE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_NPC_OPERATOR_PLAYER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_BEATTACK_ESCAR_ATTACKBEGINTIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_BEATTACK_ESCAR_ATTACKANIMLEN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_BEATTACK_ESCAR_SHAKEOFFREDUCETIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_BEATTACK_ESCARID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_SHOOTOUT_SCORE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_NAME_CARD_ID_H() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_NAME_CARD_ID_L() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUINT32VAR_CHARACTER_END() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
