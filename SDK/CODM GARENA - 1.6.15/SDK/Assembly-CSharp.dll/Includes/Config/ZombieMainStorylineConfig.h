#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ZombieMainStorylineConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ZombieMainStorylineConfig"));
	}

	template <typename T = int32_t> T& LevelID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& DifficultyLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ChapterID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& MapId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& UnlockId() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& UnlockId2() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& ShowText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& ShowImg() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& RecommendPower() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& LuckyBoxID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& RewardShow_1() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& RewardShow_2() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConfigByMapId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T GetConfigByMapId(int32_t mapId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x414ED00))(0, mapId);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(ZombieMainStorylineConfig*))(Il2CppBase() + 0x414EEA4))(this);
	}
	template <typename T = int32_t> T get_LevelID() {
		return ((T (*)(ZombieMainStorylineConfig*))(Il2CppBase() + 0x414EF44))(this);
	}
	template <typename T = void> T set_LevelID(int32_t value) {
		return ((T (*)(ZombieMainStorylineConfig*, int32_t))(Il2CppBase() + 0x414EF4C))(this, value);
	}
	template <typename T = int32_t> T get_DifficultyLevel() {
		return ((T (*)(ZombieMainStorylineConfig*))(Il2CppBase() + 0x414EF54))(this);
	}
	template <typename T = void> T set_DifficultyLevel(int32_t value) {
		return ((T (*)(ZombieMainStorylineConfig*, int32_t))(Il2CppBase() + 0x414EF5C))(this, value);
	}
	template <typename T = int32_t> T get_ChapterID() {
		return ((T (*)(ZombieMainStorylineConfig*))(Il2CppBase() + 0x414EF64))(this);
	}
	template <typename T = void> T set_ChapterID(int32_t value) {
		return ((T (*)(ZombieMainStorylineConfig*, int32_t))(Il2CppBase() + 0x414EF6C))(this, value);
	}
	template <typename T = int32_t> T get_MapId() {
		return ((T (*)(ZombieMainStorylineConfig*))(Il2CppBase() + 0x414EE9C))(this);
	}
	template <typename T = void> T set_MapId(int32_t value) {
		return ((T (*)(ZombieMainStorylineConfig*, int32_t))(Il2CppBase() + 0x414EF74))(this, value);
	}
	template <typename T = int32_t> T get_UnlockId() {
		return ((T (*)(ZombieMainStorylineConfig*))(Il2CppBase() + 0x414EF7C))(this);
	}
	template <typename T = void> T set_UnlockId(int32_t value) {
		return ((T (*)(ZombieMainStorylineConfig*, int32_t))(Il2CppBase() + 0x414EF84))(this, value);
	}
	template <typename T = int32_t> T get_UnlockId2() {
		return ((T (*)(ZombieMainStorylineConfig*))(Il2CppBase() + 0x414EF8C))(this);
	}
	template <typename T = void> T set_UnlockId2(int32_t value) {
		return ((T (*)(ZombieMainStorylineConfig*, int32_t))(Il2CppBase() + 0x414EF94))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(ZombieMainStorylineConfig*))(Il2CppBase() + 0x414EF9C))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(ZombieMainStorylineConfig*, Il2CppString*))(Il2CppBase() + 0x414EFA4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ZombieMainStorylineConfig*))(Il2CppBase() + 0x414EFAC))(this);
	}
	template <typename T = Il2CppString*> T get_ShowText() {
		return ((T (*)(ZombieMainStorylineConfig*))(Il2CppBase() + 0x414EFBC))(this);
	}
	template <typename T = void> T set_ShowText(Il2CppString* value) {
		return ((T (*)(ZombieMainStorylineConfig*, Il2CppString*))(Il2CppBase() + 0x414EFC4))(this, value);
	}
	template <typename T = Il2CppString*> T get_ShowImg() {
		return ((T (*)(ZombieMainStorylineConfig*))(Il2CppBase() + 0x414EFCC))(this);
	}
	template <typename T = void> T set_ShowImg(Il2CppString* value) {
		return ((T (*)(ZombieMainStorylineConfig*, Il2CppString*))(Il2CppBase() + 0x414EFD4))(this, value);
	}
	template <typename T = int32_t> T get_RecommendPower() {
		return ((T (*)(ZombieMainStorylineConfig*))(Il2CppBase() + 0x414EFDC))(this);
	}
	template <typename T = void> T set_RecommendPower(int32_t value) {
		return ((T (*)(ZombieMainStorylineConfig*, int32_t))(Il2CppBase() + 0x414EFE4))(this, value);
	}
	template <typename T = int32_t> T get_LuckyBoxID() {
		return ((T (*)(ZombieMainStorylineConfig*))(Il2CppBase() + 0x414EFEC))(this);
	}
	template <typename T = void> T set_LuckyBoxID(int32_t value) {
		return ((T (*)(ZombieMainStorylineConfig*, int32_t))(Il2CppBase() + 0x414EFF4))(this, value);
	}
	template <typename T = int32_t> T get_RewardShow_1() {
		return ((T (*)(ZombieMainStorylineConfig*))(Il2CppBase() + 0x414EFFC))(this);
	}
	template <typename T = void> T set_RewardShow_1(int32_t value) {
		return ((T (*)(ZombieMainStorylineConfig*, int32_t))(Il2CppBase() + 0x414F004))(this, value);
	}
	template <typename T = int32_t> T get_RewardShow_2() {
		return ((T (*)(ZombieMainStorylineConfig*))(Il2CppBase() + 0x414F00C))(this);
	}
	template <typename T = void> T set_RewardShow_2(int32_t value) {
		return ((T (*)(ZombieMainStorylineConfig*, int32_t))(Il2CppBase() + 0x414F014))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ZombieMainStorylineConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x414F01C))(this, bytes, position);
	}

};

}
