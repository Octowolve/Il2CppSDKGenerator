#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTeamGameScoreHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTeamGameScoreHelper"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_SelfPlayerInfoList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_OtherPlayerInfoList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> static T& MODE_PLAYER_MAX_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PlayerScoreList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ClipPlayerScoreList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPlayerScoreList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareClipPlayerInfoListModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreparePlayerInfoListModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPlayerScoreList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareSortedSelfCampPlayerInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareSortedOtherCampPlayerInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldPlayerInfoAddToPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T InitPlayerScoreList() {
		return ((T (*)(BRTeamGameScoreHelper*))(Il2CppBase() + 0x2626630))(this);
	}
	template <typename T = void> T PrepareClipPlayerInfoListModel(bool isInit) {
		return ((T (*)(BRTeamGameScoreHelper*, bool))(Il2CppBase() + 0x26268F4))(this, isInit);
	}
	template <typename T = void> T PreparePlayerInfoListModel() {
		return ((T (*)(BRTeamGameScoreHelper*))(Il2CppBase() + 0x2626C18))(this);
	}
	template <typename T = void> T ResetPlayerScoreList() {
		return ((T (*)(BRTeamGameScoreHelper*))(Il2CppBase() + 0x262703C))(this);
	}
	template <typename T = void> T PrepareSortedSelfCampPlayerInfoList() {
		return ((T (*)(BRTeamGameScoreHelper*))(Il2CppBase() + 0x2627198))(this);
	}
	template <typename T = void> T PrepareSortedOtherCampPlayerInfoList() {
		return ((T (*)(BRTeamGameScoreHelper*))(Il2CppBase() + 0x262769C))(this);
	}
	template <typename T = bool> T ShouldPlayerInfoAddToPanel(uintptr_t inPlayerInfo) {
		return ((T (*)(BRTeamGameScoreHelper*, uintptr_t))(Il2CppBase() + 0x2627D38))(this, inPlayerInfo);
	}

};

}
