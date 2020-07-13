#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RoomRecommandTeamClickReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomRecommandTeamClickReport"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& m_ReportType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_PlayerNum() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& m_RoomID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_RoomGUID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& m_IsGameStart() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& m_GameMode() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& PlusClickFlag() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& InviteClickFlag() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = bool> T& PlusAndInviteClick() {
		return *(T*)((uintptr_t)this + 0x22);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlusClickCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInviteClickCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetFlags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(RoomRecommandTeamClickReport*))(Il2CppBase() + 0x49524C4))(this);
	}
	template <typename T = void> T SetPlusClickCache() {
		return ((T (*)(RoomRecommandTeamClickReport*))(Il2CppBase() + 0x495253C))(this);
	}
	template <typename T = void> T SetInviteClickCache() {
		return ((T (*)(RoomRecommandTeamClickReport*))(Il2CppBase() + 0x4952610))(this);
	}
	template <typename T = void> T ResetFlags() {
		return ((T (*)(RoomRecommandTeamClickReport*))(Il2CppBase() + 0x49526E4))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T SetTLogArgs(bool GameStart, int32_t GameMode) {
		return ((T (*)(RoomRecommandTeamClickReport*, bool, int32_t))(Il2CppBase() + 0x49527BC))(this, GameStart, GameMode);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(RoomRecommandTeamClickReport*))(Il2CppBase() + 0x4952A1C))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(RoomRecommandTeamClickReport*))(Il2CppBase() + 0x4952D24))(this);
	}

};

}
