#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class FriendClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "FriendClient"));
	}

	template <typename T = uint64_t> T& FriendID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Friend() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& NewChats() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& NewChatTimeStamp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& bInviteOnLine() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = double> T& LastInviteJoinTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& isSend() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFullName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_LadderScore() {
		return ((T (*)(FriendClient*))(Il2CppBase() + 0x3CE96FC))(this);
	}
	template <typename T = int32_t> T get_BrLadderScore() {
		return ((T (*)(FriendClient*))(Il2CppBase() + 0x3CE9760))(this);
	}
	template <typename T = uintptr_t> T get_State() {
		return ((T (*)(FriendClient*))(Il2CppBase() + 0x3CE97C4))(this);
	}
	template <typename T = Il2CppString*> T GetFullName() {
		return ((T (*)(FriendClient*))(Il2CppBase() + 0x3CE458C))(this);
	}

};

}
