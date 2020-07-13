#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.ZM {

class ZombieSystemAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.ZM", "ZombieSystemAssist"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_ZombieDS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_ZombieDailyDS() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_ZombieEndlessDS() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqPveChapterLevelInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetPveChapterLevelInfoResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqRewardLimitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetRewardLimitationResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqPveLevelEndlessInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetPveLevelEndlessInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_ZombieDS() {
		return ((T (*)(ZombieSystemAssist*))(Il2CppBase() + 0x4067C38))(this);
	}
	template <typename T = uintptr_t> T get_ZombieDailyDS() {
		return ((T (*)(ZombieSystemAssist*))(Il2CppBase() + 0x4067CE8))(this);
	}
	template <typename T = uintptr_t> T get_ZombieEndlessDS() {
		return ((T (*)(ZombieSystemAssist*))(Il2CppBase() + 0x4067D98))(this);
	}
	template <typename T = void> T ReqPveChapterLevelInfo(int32_t chapterId, int32_t difficultyLevel) {
		return ((T (*)(ZombieSystemAssist*, int32_t, int32_t))(Il2CppBase() + 0x4067E48))(this, chapterId, difficultyLevel);
	}
	template <typename T = bool> T OnGetPveChapterLevelInfoResponse(uintptr_t message, uintptr_t* errStr) {
		return ((T (*)(ZombieSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4068038))(this, message, errStr);
	}
	template <typename T = void> T ReqRewardLimitation() {
		return ((T (*)(ZombieSystemAssist*))(Il2CppBase() + 0x40681EC))(this);
	}
	template <typename T = bool> T OnGetRewardLimitationResponse(uintptr_t message, uintptr_t* errStr) {
		return ((T (*)(ZombieSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x40682B4))(this, message, errStr);
	}
	template <typename T = void> T ReqPveLevelEndlessInfo() {
		return ((T (*)(ZombieSystemAssist*))(Il2CppBase() + 0x40683F8))(this);
	}
	template <typename T = bool> T OnGetPveLevelEndlessInfo(uintptr_t message, uintptr_t* errStr) {
		return ((T (*)(ZombieSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x40684C0))(this, message, errStr);
	}

};

}
