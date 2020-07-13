#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class InviteInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "InviteInfo"));
	}

	template <typename T = uint32_t> T& MapID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& ModeID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& PVEMapGroupID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& RoomType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Channel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& PlayerNumber() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& LevelRestrict() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& RankRestrict() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& Difficulty() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& TicketType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& playlistId() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uint32_t>*> T& playlistList() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& brPlaylistId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uint32_t>*> T& mapIds() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& IsMicrophoneRequired() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& LanguageCode() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& IsBrFeatureOnly() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& IsMpFeatureOnly() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = int32_t> T& DSCGroupId() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMapIds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T CopyInfo(uintptr_t info) {
		return ((T (*)(InviteInfo*, uintptr_t))(Il2CppBase() + 0x3A1CD7C))(this, info);
	}
	template <typename T = void> T UpdateMapIds() {
		return ((T (*)(InviteInfo*))(Il2CppBase() + 0x3A1CF40))(this);
	}
	template <typename T = bool> T UpdateMapIdsm__0(uintptr_t it) {
		return ((T (*)(InviteInfo*, uintptr_t))(Il2CppBase() + 0x3A1D178))(this, it);
	}

};

}
