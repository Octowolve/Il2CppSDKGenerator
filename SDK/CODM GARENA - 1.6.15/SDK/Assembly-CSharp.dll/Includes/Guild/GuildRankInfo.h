#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildRankInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildRankInfo"));
	}

	template <typename T = uint64_t> T& GuildId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& GuildName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Rank() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& RankPermile() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& GuildLevel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& MemberString() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Activity() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& IsSeasonal() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& IsWeekly() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildSelfGuildRankInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildGuildRankInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T BuildSelfGuildRankInfo(uintptr_t dataStore, bool is_week) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x3BE47E0))(0, dataStore, is_week);
	}
	template <typename T = uintptr_t> static T BuildGuildRankInfo(uintptr_t data, bool isSeasonal, bool isWeekly) {
		return ((T (*)(void *, uintptr_t, bool, bool))(Il2CppBase() + 0x3BE43D8))(0, data, isSeasonal, isWeekly);
	}
	template <typename T = bool> T IsValid() {
		return ((T (*)(GuildRankInfo*))(Il2CppBase() + 0x3BE6884))(this);
	}

};

}
