#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildMemberInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildMemberInfo"));
	}

	template <typename T = uint64_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& PlayerName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& PlayerSocialName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& PlayerStateInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& PlayerState() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& LadderScore() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& BrLadderScore() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& LadderLevel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& BrLadderLevel() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& RoleType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& PeakLevel() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& IconInfo() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& DailyActive() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& WeeklyActive() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& SeasonalActive() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& DailyActivePrizeBit() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& GuildDailyActivePrizeBit() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& LastInviteJoinTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint32_t> T& OpTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint32_t> T& LastLoginTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uint32_t> T& LastLogoutTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint32_t> T& JoinTime() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T IsValid() {
		return ((T (*)(GuildMemberInfo*))(Il2CppBase() + 0x3BD1FF0))(this);
	}

};

}
