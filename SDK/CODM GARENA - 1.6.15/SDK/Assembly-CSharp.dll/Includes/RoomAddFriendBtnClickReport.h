#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RoomAddFriendBtnClickReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomAddFriendBtnClickReport"));
	}

	template <typename T = uintptr_t> static T& m_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& MoreRecommendClick() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4950A74))(0);
	}
	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(RoomAddFriendBtnClickReport*))(Il2CppBase() + 0x4950BD0))(this);
	}
	template <typename T = Il2CppString*> T get_EventTime() {
		return ((T (*)(RoomAddFriendBtnClickReport*))(Il2CppBase() + 0x4950C48))(this);
	}
	template <typename T = Il2CppString*> T get_GameAppId() {
		return ((T (*)(RoomAddFriendBtnClickReport*))(Il2CppBase() + 0x4950C80))(this);
	}
	template <typename T = int32_t> T get_PlatID() {
		return ((T (*)(RoomAddFriendBtnClickReport*))(Il2CppBase() + 0x4950C8C))(this);
	}
	template <typename T = Il2CppString*> T get_OpenId() {
		return ((T (*)(RoomAddFriendBtnClickReport*))(Il2CppBase() + 0x4950C98))(this);
	}
	template <typename T = Il2CppString*> T get_Platform() {
		return ((T (*)(RoomAddFriendBtnClickReport*))(Il2CppBase() + 0x4950CA4))(this);
	}
	template <typename T = Il2CppString*> T get_Country() {
		return ((T (*)(RoomAddFriendBtnClickReport*))(Il2CppBase() + 0x4950CB0))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs(uintptr_t source) {
		return ((T (*)(RoomAddFriendBtnClickReport*, uintptr_t))(Il2CppBase() + 0x4950CBC))(this, source);
	}

};

}
