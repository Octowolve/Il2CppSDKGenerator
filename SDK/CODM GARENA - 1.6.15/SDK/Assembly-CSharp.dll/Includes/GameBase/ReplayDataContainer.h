#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ReplayDataContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ReplayDataContainer"));
	}

	template <typename T = uintptr_t> T& m_CurReplayInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ReplayDataInfoList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_GOListForReplayHide() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PlayerInfoList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReplayData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchReplayType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRecordPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordForHideInReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAndClearRecordInGamePlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllProjInGamePlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T get_CurrentReplayInfo() {
		return ((T (*)(ReplayDataContainer*))(Il2CppBase() + 0x2DE0A78))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ReplayDataContainer*))(Il2CppBase() + 0x2DE0C00))(this);
	}
	template <typename T = uintptr_t> T GetReplayData(uintptr_t replayType) {
		return ((T (*)(ReplayDataContainer*, uintptr_t))(Il2CppBase() + 0x2DE0A90))(this, replayType);
	}
	template <typename T = void> T SwitchReplayType(uintptr_t replayType) {
		return ((T (*)(ReplayDataContainer*, uintptr_t))(Il2CppBase() + 0x2DE17B0))(this, replayType);
	}
	template <typename T = void> T RecordPlayer(uintptr_t playerInfo) {
		return ((T (*)(ReplayDataContainer*, uintptr_t))(Il2CppBase() + 0x2DE1BE4))(this, playerInfo);
	}
	template <typename T = uintptr_t> T GetRecordPlayerInfo(uint32_t playerID) {
		return ((T (*)(ReplayDataContainer*, uint32_t))(Il2CppBase() + 0x2DE1E90))(this, playerID);
	}
	template <typename T = void> T RecordForHideInReplay(uintptr_t go) {
		return ((T (*)(ReplayDataContainer*, uintptr_t))(Il2CppBase() + 0x2DE2080))(this, go);
	}
	template <typename T = void> T HideAndClearRecordInGamePlay() {
		return ((T (*)(ReplayDataContainer*))(Il2CppBase() + 0x2DE23A4))(this);
	}
	template <typename T = void> T RemoveAllProjInGamePlay() {
		return ((T (*)(ReplayDataContainer*))(Il2CppBase() + 0x2DE258C))(this);
	}

};

}
