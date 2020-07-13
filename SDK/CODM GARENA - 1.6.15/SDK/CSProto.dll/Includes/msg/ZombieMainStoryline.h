#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ZombieMainStoryline
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ZombieMainStoryline"));
	}

	template <typename T = int32_t> T& _LevelID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _DifficultyLevel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _ChapterID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& _MapId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _UnlockId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& _LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& _ShowText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& _ShowImg() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _RecommendPower() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _LuckyBoxID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<int32_t>*> T& _RewardShow() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _UnlockId2() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _MapId_Int() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _LevelPower() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& _RestrictWeaponId() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = int32_t> T get_LevelID() {
		return ((T (*)(ZombieMainStoryline*))(Il2CppBase() + 0x51AB3CC))(this);
	}
	template <typename T = void> T set_LevelID(int32_t value) {
		return ((T (*)(ZombieMainStoryline*, int32_t))(Il2CppBase() + 0x51AB3D4))(this, value);
	}
	template <typename T = int32_t> T get_DifficultyLevel() {
		return ((T (*)(ZombieMainStoryline*))(Il2CppBase() + 0x51AB3DC))(this);
	}
	template <typename T = void> T set_DifficultyLevel(int32_t value) {
		return ((T (*)(ZombieMainStoryline*, int32_t))(Il2CppBase() + 0x51AB3E4))(this, value);
	}
	template <typename T = int32_t> T get_ChapterID() {
		return ((T (*)(ZombieMainStoryline*))(Il2CppBase() + 0x51AB3EC))(this);
	}
	template <typename T = void> T set_ChapterID(int32_t value) {
		return ((T (*)(ZombieMainStoryline*, int32_t))(Il2CppBase() + 0x51AB3F4))(this, value);
	}
	template <typename T = Il2CppString*> T get_MapId() {
		return ((T (*)(ZombieMainStoryline*))(Il2CppBase() + 0x51AB3FC))(this);
	}
	template <typename T = void> T set_MapId(Il2CppString* value) {
		return ((T (*)(ZombieMainStoryline*, Il2CppString*))(Il2CppBase() + 0x51AB404))(this, value);
	}
	template <typename T = int32_t> T get_UnlockId() {
		return ((T (*)(ZombieMainStoryline*))(Il2CppBase() + 0x51AB40C))(this);
	}
	template <typename T = void> T set_UnlockId(int32_t value) {
		return ((T (*)(ZombieMainStoryline*, int32_t))(Il2CppBase() + 0x51AB414))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(ZombieMainStoryline*))(Il2CppBase() + 0x51AB41C))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(ZombieMainStoryline*, Il2CppString*))(Il2CppBase() + 0x51AB424))(this, value);
	}
	template <typename T = Il2CppString*> T get_ShowText() {
		return ((T (*)(ZombieMainStoryline*))(Il2CppBase() + 0x51AB42C))(this);
	}
	template <typename T = void> T set_ShowText(Il2CppString* value) {
		return ((T (*)(ZombieMainStoryline*, Il2CppString*))(Il2CppBase() + 0x51AB434))(this, value);
	}
	template <typename T = Il2CppString*> T get_ShowImg() {
		return ((T (*)(ZombieMainStoryline*))(Il2CppBase() + 0x51AB43C))(this);
	}
	template <typename T = void> T set_ShowImg(Il2CppString* value) {
		return ((T (*)(ZombieMainStoryline*, Il2CppString*))(Il2CppBase() + 0x51AB444))(this, value);
	}
	template <typename T = int32_t> T get_RecommendPower() {
		return ((T (*)(ZombieMainStoryline*))(Il2CppBase() + 0x51AB44C))(this);
	}
	template <typename T = void> T set_RecommendPower(int32_t value) {
		return ((T (*)(ZombieMainStoryline*, int32_t))(Il2CppBase() + 0x51AB454))(this, value);
	}
	template <typename T = int32_t> T get_LuckyBoxID() {
		return ((T (*)(ZombieMainStoryline*))(Il2CppBase() + 0x51AB45C))(this);
	}
	template <typename T = void> T set_LuckyBoxID(int32_t value) {
		return ((T (*)(ZombieMainStoryline*, int32_t))(Il2CppBase() + 0x51AB464))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_RewardShow() {
		return ((T (*)(ZombieMainStoryline*))(Il2CppBase() + 0x51AB46C))(this);
	}
	template <typename T = int32_t> T get_UnlockId2() {
		return ((T (*)(ZombieMainStoryline*))(Il2CppBase() + 0x51AB474))(this);
	}
	template <typename T = void> T set_UnlockId2(int32_t value) {
		return ((T (*)(ZombieMainStoryline*, int32_t))(Il2CppBase() + 0x51AB47C))(this, value);
	}
	template <typename T = uint32_t> T get_MapId_Int() {
		return ((T (*)(ZombieMainStoryline*))(Il2CppBase() + 0x51AB484))(this);
	}
	template <typename T = void> T set_MapId_Int(uint32_t value) {
		return ((T (*)(ZombieMainStoryline*, uint32_t))(Il2CppBase() + 0x51AB48C))(this, value);
	}
	template <typename T = uint32_t> T get_LevelPower() {
		return ((T (*)(ZombieMainStoryline*))(Il2CppBase() + 0x51AB494))(this);
	}
	template <typename T = void> T set_LevelPower(uint32_t value) {
		return ((T (*)(ZombieMainStoryline*, uint32_t))(Il2CppBase() + 0x51AB49C))(this, value);
	}
	template <typename T = uint32_t> T get_RestrictWeaponId() {
		return ((T (*)(ZombieMainStoryline*))(Il2CppBase() + 0x51AB4A4))(this);
	}
	template <typename T = void> T set_RestrictWeaponId(uint32_t value) {
		return ((T (*)(ZombieMainStoryline*, uint32_t))(Il2CppBase() + 0x51AB4AC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ZombieMainStoryline*, bool))(Il2CppBase() + 0x51AB4B4))(this, createIfMissing);
	}

};

}
