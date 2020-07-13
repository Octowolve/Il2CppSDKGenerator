#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildSearchInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildSearchInfo"));
	}

	template <typename T = int32_t> T& Rank() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& CaptainName() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppString*> T& CaptainSocialName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& CaptainLevel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& CaptainPeakLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& CaptainLadderLevel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& CaptainIconURL() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& BaseInfo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& MemberNum() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& MaxMemberNum() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppString*> T& Location() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& SeasonActive() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& FriendNum() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& FriendList() {
		return *(T*)((uintptr_t)this + 0x84);
	}


};

}
