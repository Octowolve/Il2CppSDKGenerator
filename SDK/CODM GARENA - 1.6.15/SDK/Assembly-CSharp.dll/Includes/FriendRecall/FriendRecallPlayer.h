#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FriendRecall {

class FriendRecallPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FriendRecall", "FriendRecallPlayer"));
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
	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& AvatarInfo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& IsRecalled() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& State() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint64_t> T& LogoutTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& LadderLevel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& BRLadderLevel() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
