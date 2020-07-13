#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildSearchFriendItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildSearchFriendItemView"));
	}

	template <typename T = uintptr_t> T& FriendHead() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSearchFriendInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetSearchFriendInfo(uintptr_t friendInfo, uintptr_t mCutPanel) {
		return ((T (*)(GuildSearchFriendItemView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3BF0E58))(this, friendInfo, mCutPanel);
	}

};

}
