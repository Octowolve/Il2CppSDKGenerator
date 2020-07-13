#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class ChatMessageInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "ChatMessageInfo"));
	}

	template <typename T = bool> T& IsInGame() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& ChatMessageType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& OwnerID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& Time() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& TimeNeedShow() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& IsSender() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = uintptr_t> T& PictureInfo() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& PeakLevel() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& LadderLevel() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& BRLadderLevel() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& Content() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& ReadFinish() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& RoomSvrAddr() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& RoomID() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& MapID() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint32_t> T& ModeID() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& playlistId() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppList<uint32_t>*> T& playlistList() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& brPlaylistId() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppList<int32_t>*> T& mapIds() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uint32_t> T& RoomType() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uint32_t> T& LevelRestrict() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uint32_t> T& RankRestrict() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uint32_t> T& RoundRestrict() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uint32_t> T& PlayerNum() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uint32_t> T& CurPlayerNumInRoom() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uint64_t> T& GuildID() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& GuildName() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& GuildIcon() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& IsFeatureOnly() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uint32_t> T& DSCGroupId() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& IsMicrophoneRequired() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& LanguageCode() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& TicketRoomType() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& ShouldShow() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppString*> T& HtmlContent() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& IsVoice() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppString*> T& VoiceFileId() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& TranslateHtmlContent() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& VoiceTime() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppString*> T& TextForTranslateHtmlString() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = bool> T& isReadVoice() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& playTime() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = bool> T& isPlayingVoice() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& showPercent() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = bool> T& isRecord() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& bTranslated() {
		return *(T*)((uintptr_t)this + 0xD9);
	}
	template <typename T = bool> T& bTranslating() {
		return *(T*)((uintptr_t)this + 0xDA);
	}
	template <typename T = Il2CppString*> T& TranslatedHtmlContent() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uint64_t> T& invite_id() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetContentInLobby() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetContentInGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppString*> T GetContentInLobby() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x1D20594))(this);
	}
	template <typename T = Il2CppString*> T GetContentInGame() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x1D3C428))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x1D5A654))(this);
	}

};

}
