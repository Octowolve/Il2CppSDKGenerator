#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ZombieRandomMissionConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ZombieRandomMissionConfConfig"));
	}

	template <typename T = int32_t> T& MissionId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& MissionType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& IsTeamMission() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& MissionDesc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& MissionSprite() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& MissionProb() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& UsedGameMode() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& ReachTargetType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& ReachTargetValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& LimitType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& LimitParam() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& UseWeaponLimit() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& IsThrowWeapon() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& IsTrapDamage() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& IsHeadShot() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& BuyItemType() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& AwardType() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& AwardValue() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(ZombieRandomMissionConfConfig*))(Il2CppBase() + 0x4151A14))(this);
	}
	template <typename T = int32_t> T get_MissionId() {
		return ((T (*)(ZombieRandomMissionConfConfig*))(Il2CppBase() + 0x4151AB4))(this);
	}
	template <typename T = void> T set_MissionId(int32_t value) {
		return ((T (*)(ZombieRandomMissionConfConfig*, int32_t))(Il2CppBase() + 0x4151ABC))(this, value);
	}
	template <typename T = int32_t> T get_MissionType() {
		return ((T (*)(ZombieRandomMissionConfConfig*))(Il2CppBase() + 0x4151AC4))(this);
	}
	template <typename T = void> T set_MissionType(int32_t value) {
		return ((T (*)(ZombieRandomMissionConfConfig*, int32_t))(Il2CppBase() + 0x4151ACC))(this, value);
	}
	template <typename T = int32_t> T get_IsTeamMission() {
		return ((T (*)(ZombieRandomMissionConfConfig*))(Il2CppBase() + 0x4151AD4))(this);
	}
	template <typename T = void> T set_IsTeamMission(int32_t value) {
		return ((T (*)(ZombieRandomMissionConfConfig*, int32_t))(Il2CppBase() + 0x4151ADC))(this, value);
	}
	template <typename T = Il2CppString*> T get_MissionDesc() {
		return ((T (*)(ZombieRandomMissionConfConfig*))(Il2CppBase() + 0x4151AE4))(this);
	}
	template <typename T = void> T set_MissionDesc(Il2CppString* value) {
		return ((T (*)(ZombieRandomMissionConfConfig*, Il2CppString*))(Il2CppBase() + 0x4151AEC))(this, value);
	}
	template <typename T = Il2CppString*> T get_MissionSprite() {
		return ((T (*)(ZombieRandomMissionConfConfig*))(Il2CppBase() + 0x4151AF4))(this);
	}
	template <typename T = void> T set_MissionSprite(Il2CppString* value) {
		return ((T (*)(ZombieRandomMissionConfConfig*, Il2CppString*))(Il2CppBase() + 0x4151AFC))(this, value);
	}
	template <typename T = int32_t> T get_MissionProb() {
		return ((T (*)(ZombieRandomMissionConfConfig*))(Il2CppBase() + 0x4151B04))(this);
	}
	template <typename T = void> T set_MissionProb(int32_t value) {
		return ((T (*)(ZombieRandomMissionConfConfig*, int32_t))(Il2CppBase() + 0x4151B0C))(this, value);
	}
	template <typename T = Il2CppString*> T get_UsedGameMode() {
		return ((T (*)(ZombieRandomMissionConfConfig*))(Il2CppBase() + 0x4151B14))(this);
	}
	template <typename T = void> T set_UsedGameMode(Il2CppString* value) {
		return ((T (*)(ZombieRandomMissionConfConfig*, Il2CppString*))(Il2CppBase() + 0x4151B1C))(this, value);
	}
	template <typename T = int32_t> T get_ReachTargetType() {
		return ((T (*)(ZombieRandomMissionConfConfig*))(Il2CppBase() + 0x4151B24))(this);
	}
	template <typename T = void> T set_ReachTargetType(int32_t value) {
		return ((T (*)(ZombieRandomMissionConfConfig*, int32_t))(Il2CppBase() + 0x4151B2C))(this, value);
	}
	template <typename T = int32_t> T get_ReachTargetValue() {
		return ((T (*)(ZombieRandomMissionConfConfig*))(Il2CppBase() + 0x4151B34))(this);
	}
	template <typename T = void> T set_ReachTargetValue(int32_t value) {
		return ((T (*)(ZombieRandomMissionConfConfig*, int32_t))(Il2CppBase() + 0x4151B3C))(this, value);
	}
	template <typename T = int32_t> T get_LimitType() {
		return ((T (*)(ZombieRandomMissionConfConfig*))(Il2CppBase() + 0x4151B44))(this);
	}
	template <typename T = void> T set_LimitType(int32_t value) {
		return ((T (*)(ZombieRandomMissionConfConfig*, int32_t))(Il2CppBase() + 0x4151B4C))(this, value);
	}
	template <typename T = int32_t> T get_LimitParam() {
		return ((T (*)(ZombieRandomMissionConfConfig*))(Il2CppBase() + 0x4151B54))(this);
	}
	template <typename T = void> T set_LimitParam(int32_t value) {
		return ((T (*)(ZombieRandomMissionConfConfig*, int32_t))(Il2CppBase() + 0x4151B5C))(this, value);
	}
	template <typename T = int32_t> T get_UseWeaponLimit() {
		return ((T (*)(ZombieRandomMissionConfConfig*))(Il2CppBase() + 0x4151B64))(this);
	}
	template <typename T = void> T set_UseWeaponLimit(int32_t value) {
		return ((T (*)(ZombieRandomMissionConfConfig*, int32_t))(Il2CppBase() + 0x4151B6C))(this, value);
	}
	template <typename T = int32_t> T get_IsThrowWeapon() {
		return ((T (*)(ZombieRandomMissionConfConfig*))(Il2CppBase() + 0x4151B74))(this);
	}
	template <typename T = void> T set_IsThrowWeapon(int32_t value) {
		return ((T (*)(ZombieRandomMissionConfConfig*, int32_t))(Il2CppBase() + 0x4151B7C))(this, value);
	}
	template <typename T = int32_t> T get_IsTrapDamage() {
		return ((T (*)(ZombieRandomMissionConfConfig*))(Il2CppBase() + 0x4151B84))(this);
	}
	template <typename T = void> T set_IsTrapDamage(int32_t value) {
		return ((T (*)(ZombieRandomMissionConfConfig*, int32_t))(Il2CppBase() + 0x4151B8C))(this, value);
	}
	template <typename T = int32_t> T get_IsHeadShot() {
		return ((T (*)(ZombieRandomMissionConfConfig*))(Il2CppBase() + 0x4151B94))(this);
	}
	template <typename T = void> T set_IsHeadShot(int32_t value) {
		return ((T (*)(ZombieRandomMissionConfConfig*, int32_t))(Il2CppBase() + 0x4151B9C))(this, value);
	}
	template <typename T = int32_t> T get_BuyItemType() {
		return ((T (*)(ZombieRandomMissionConfConfig*))(Il2CppBase() + 0x4151BA4))(this);
	}
	template <typename T = void> T set_BuyItemType(int32_t value) {
		return ((T (*)(ZombieRandomMissionConfConfig*, int32_t))(Il2CppBase() + 0x4151BAC))(this, value);
	}
	template <typename T = int32_t> T get_AwardType() {
		return ((T (*)(ZombieRandomMissionConfConfig*))(Il2CppBase() + 0x4151BB4))(this);
	}
	template <typename T = void> T set_AwardType(int32_t value) {
		return ((T (*)(ZombieRandomMissionConfConfig*, int32_t))(Il2CppBase() + 0x4151BBC))(this, value);
	}
	template <typename T = int32_t> T get_AwardValue() {
		return ((T (*)(ZombieRandomMissionConfConfig*))(Il2CppBase() + 0x4151BC4))(this);
	}
	template <typename T = void> T set_AwardValue(int32_t value) {
		return ((T (*)(ZombieRandomMissionConfConfig*, int32_t))(Il2CppBase() + 0x4151BCC))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ZombieRandomMissionConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4151BD4))(this, bytes, position);
	}

};

}
