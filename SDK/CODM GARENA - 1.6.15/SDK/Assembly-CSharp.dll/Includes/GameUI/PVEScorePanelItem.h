#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PVEScorePanelItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PVEScorePanelItem"));
	}

	template <typename T = uintptr_t> T& avatarPic() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& PlayerName() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& Gold() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& Score() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& Kill() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& Dying() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& Revive() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& BossDamagePercentage() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& Me() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& ContentRoot() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& m_PicId() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& m_FrameId() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppString*> T& m_PicUrl() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init() {
		return ((T (*)(PVEScorePanelItem*))(Il2CppBase() + 0x3AA4C40))(this);
	}
	template <typename T = void> T SetContent(uintptr_t playerInfo, bool bBossRound) {
		return ((T (*)(PVEScorePanelItem*, uintptr_t, bool))(Il2CppBase() + 0x3AA57A8))(this, playerInfo, bBossRound);
	}
	template <typename T = void> T SetPlayerIcon(uintptr_t psd) {
		return ((T (*)(PVEScorePanelItem*, uintptr_t))(Il2CppBase() + 0x3AA6150))(this, psd);
	}

};

}
