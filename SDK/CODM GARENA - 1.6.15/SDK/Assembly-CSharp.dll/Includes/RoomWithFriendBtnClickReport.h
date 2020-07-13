#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RoomWithFriendBtnClickReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomWithFriendBtnClickReport"));
	}

	template <typename T = uintptr_t> static T& m_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x495357C))(0);
	}
	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(RoomWithFriendBtnClickReport*))(Il2CppBase() + 0x49536D8))(this);
	}
	template <typename T = Il2CppString*> T get_EventTime() {
		return ((T (*)(RoomWithFriendBtnClickReport*))(Il2CppBase() + 0x4953750))(this);
	}
	template <typename T = Il2CppString*> T get_GameAppId() {
		return ((T (*)(RoomWithFriendBtnClickReport*))(Il2CppBase() + 0x4953788))(this);
	}
	template <typename T = int32_t> T get_PlatID() {
		return ((T (*)(RoomWithFriendBtnClickReport*))(Il2CppBase() + 0x4953794))(this);
	}
	template <typename T = Il2CppString*> T get_OpenId() {
		return ((T (*)(RoomWithFriendBtnClickReport*))(Il2CppBase() + 0x49537A0))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(RoomWithFriendBtnClickReport*))(Il2CppBase() + 0x49537AC))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(RoomWithFriendBtnClickReport*))(Il2CppBase() + 0x4953BB4))(this);
	}

};

}
