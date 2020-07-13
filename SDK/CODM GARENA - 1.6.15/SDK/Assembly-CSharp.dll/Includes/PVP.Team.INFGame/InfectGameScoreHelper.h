#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.INFGame {

class InfectGameScoreHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.INFGame", "InfectGameScoreHelper"));
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
		return ((T (*)(InfectGameScoreHelper*))(Il2CppBase() + 0x40365A8))(this);
	}
	template <typename T = void> T PrepareClipPlayerInfoListModel(bool isInit) {
		return ((T (*)(InfectGameScoreHelper*, bool))(Il2CppBase() + 0x40367C0))(this, isInit);
	}
	template <typename T = void> T PreparePlayerInfoListModel() {
		return ((T (*)(InfectGameScoreHelper*))(Il2CppBase() + 0x4036AE4))(this);
	}
	template <typename T = void> T ResetPlayerScoreList() {
		return ((T (*)(InfectGameScoreHelper*))(Il2CppBase() + 0x4036F08))(this);
	}
	template <typename T = void> T PrepareSortedSelfCampPlayerInfoList() {
		return ((T (*)(InfectGameScoreHelper*))(Il2CppBase() + 0x4037064))(this);
	}
	template <typename T = void> T PrepareSortedOtherCampPlayerInfoList() {
		return ((T (*)(InfectGameScoreHelper*))(Il2CppBase() + 0x4037530))(this);
	}
	template <typename T = bool> T ShouldPlayerInfoAddToPanel(uintptr_t inPlayerInfo) {
		return ((T (*)(InfectGameScoreHelper*, uintptr_t))(Il2CppBase() + 0x40379FC))(this, inPlayerInfo);
	}

};

}
