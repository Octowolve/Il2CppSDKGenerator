#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildFrientRequestView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildFrientRequestView"));
	}

	template <typename T = uintptr_t> T& FriendNumAndMaxFriendNum() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& RemainRequestNum() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& ScrollView() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& NoFriendsBG() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRemainNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideNumAndBg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T UpdateInfo(int32_t FriendNum, int32_t MaxFriendNum) {
		return ((T (*)(GuildFrientRequestView*, int32_t, int32_t))(Il2CppBase() + 0x3BBBB40))(this, FriendNum, MaxFriendNum);
	}
	template <typename T = void> T UpdateRemainNum(uint32_t RemainNum) {
		return ((T (*)(GuildFrientRequestView*, uint32_t))(Il2CppBase() + 0x3BBCCAC))(this, RemainNum);
	}
	template <typename T = void> T HideNumAndBg() {
		return ((T (*)(GuildFrientRequestView*))(Il2CppBase() + 0x3BBB6F0))(this);
	}

};

}
