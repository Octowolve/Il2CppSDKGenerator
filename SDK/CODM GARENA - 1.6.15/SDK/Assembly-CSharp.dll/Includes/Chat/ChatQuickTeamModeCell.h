#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class ChatQuickTeamModeCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "ChatQuickTeamModeCell"));
	}

	template <typename T = int32_t> T& modeType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& modeName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& modeSprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& modeBgSprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& onSelectCell() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& playlistId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& rankRestrict() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& playerNum() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& IsGameMode() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& IsPlaylist() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = bool> T& IsPlayerNumber() {
		return *(T*)((uintptr_t)this + 0x2E);
	}
	template <typename T = bool> T& IsRankRestrict() {
		return *(T*)((uintptr_t)this + 0x2F);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetModeName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnClick() {
		return ((T (*)(ChatQuickTeamModeCell*))(Il2CppBase() + 0x1D788A4))(this);
	}
	template <typename T = void> T SetModeName(Il2CppString* name, Il2CppString* spriteName, bool bSnapSprite) {
		return ((T (*)(ChatQuickTeamModeCell*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x1D6AA3C))(this, name, spriteName, bSnapSprite);
	}

};

}
