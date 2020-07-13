#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ModeMatching {

class PVEModeLevelData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ModeMatching", "PVEModeLevelData"));
	}

	template <typename T = int32_t> T& m_ID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_DiffcultyType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_Chapter() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_Section() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_Unlocked() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_StarLevel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_StarLevelContent() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_DayPlayCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_ResetTimes() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_CanSweep() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_LockedReason() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_HasGetLottery() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLockedForReason() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = int32_t> T get_ID() {
		return ((T (*)(PVEModeLevelData*))(Il2CppBase() + 0x3303C68))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(PVEModeLevelData*, int32_t))(Il2CppBase() + 0x3303C70))(this, value);
	}
	template <typename T = uintptr_t> T get_DiffcultyType() {
		return ((T (*)(PVEModeLevelData*))(Il2CppBase() + 0x3303C78))(this);
	}
	template <typename T = void> T set_DiffcultyType(uintptr_t value) {
		return ((T (*)(PVEModeLevelData*, uintptr_t))(Il2CppBase() + 0x3303C80))(this, value);
	}
	template <typename T = int32_t> T get_Chapter() {
		return ((T (*)(PVEModeLevelData*))(Il2CppBase() + 0x3303C88))(this);
	}
	template <typename T = void> T set_Chapter(int32_t value) {
		return ((T (*)(PVEModeLevelData*, int32_t))(Il2CppBase() + 0x3303C90))(this, value);
	}
	template <typename T = int32_t> T get_Section() {
		return ((T (*)(PVEModeLevelData*))(Il2CppBase() + 0x3303C98))(this);
	}
	template <typename T = void> T set_Section(int32_t value) {
		return ((T (*)(PVEModeLevelData*, int32_t))(Il2CppBase() + 0x3303CA0))(this, value);
	}
	template <typename T = bool> T get_Unlocked() {
		return ((T (*)(PVEModeLevelData*))(Il2CppBase() + 0x3303CA8))(this);
	}
	template <typename T = void> T set_Unlocked(bool value) {
		return ((T (*)(PVEModeLevelData*, bool))(Il2CppBase() + 0x3303CB0))(this, value);
	}
	template <typename T = int32_t> T get_StarLevel() {
		return ((T (*)(PVEModeLevelData*))(Il2CppBase() + 0x3303CB8))(this);
	}
	template <typename T = void> T set_StarLevel(int32_t value) {
		return ((T (*)(PVEModeLevelData*, int32_t))(Il2CppBase() + 0x3303CC0))(this, value);
	}
	template <typename T = int32_t> T get_StarLevelContent() {
		return ((T (*)(PVEModeLevelData*))(Il2CppBase() + 0x3303CC8))(this);
	}
	template <typename T = void> T set_StarLevelContent(int32_t value) {
		return ((T (*)(PVEModeLevelData*, int32_t))(Il2CppBase() + 0x3303CD0))(this, value);
	}
	template <typename T = int32_t> T get_DayPlayCount() {
		return ((T (*)(PVEModeLevelData*))(Il2CppBase() + 0x3303CD8))(this);
	}
	template <typename T = void> T set_DayPlayCount(int32_t value) {
		return ((T (*)(PVEModeLevelData*, int32_t))(Il2CppBase() + 0x3303CE0))(this, value);
	}
	template <typename T = int32_t> T get_ResetTimes() {
		return ((T (*)(PVEModeLevelData*))(Il2CppBase() + 0x3303CE8))(this);
	}
	template <typename T = void> T set_ResetTimes(int32_t value) {
		return ((T (*)(PVEModeLevelData*, int32_t))(Il2CppBase() + 0x3303CF0))(this, value);
	}
	template <typename T = int32_t> T get_CanSweep() {
		return ((T (*)(PVEModeLevelData*))(Il2CppBase() + 0x3303CF8))(this);
	}
	template <typename T = void> T set_CanSweep(int32_t value) {
		return ((T (*)(PVEModeLevelData*, int32_t))(Il2CppBase() + 0x3303C60))(this, value);
	}
	template <typename T = bool> T get_HasGetLottery() {
		return ((T (*)(PVEModeLevelData*))(Il2CppBase() + 0x3303D00))(this);
	}
	template <typename T = bool> T IsLockedForReason(uintptr_t reason) {
		return ((T (*)(PVEModeLevelData*, uintptr_t))(Il2CppBase() + 0x3303D08))(this, reason);
	}

};

}
