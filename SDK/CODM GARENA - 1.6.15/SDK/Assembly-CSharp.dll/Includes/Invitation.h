#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Invitation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Invitation"));
	}

	template <typename T = Il2CppString*> T& InvitorName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& InvitorAvatarUrl() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& playerPictureInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& InvitationSrvAddress() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint64_t> T& InvitorPlayerID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& IsApplyEnterRoom() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& playerLobbyBusID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& InvitorPlayerLadderLevel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& ladderType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& InvitorLevel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& PeakLevel() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& InvitationModeID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& InvitationMapID() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& InvitationInstanceID() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& PlaylistId() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uint32_t>*> T& PlaylistList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& BrPlaylistId() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<int32_t>*> T& MapIds() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& InvitationRoomType() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& SourceType() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& MatchTeamType() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& MatchInviteSource() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& PpMode() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& InvitedTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& CurPlayerNum() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& MaxPlayerNum() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uint64_t> T& InviteId() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
