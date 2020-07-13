#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomMemberNameView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomMemberNameView"));
	}

	template <typename T = uintptr_t> T& RoomMemberNameTemplate() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& RoomEncourageTeamItemTemplate() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_NameItemList() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_EncourageTeamItemList() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& m_MinEmptyIndex() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppList<bool>*> T& m_SeatList() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TestSetName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCallingCardInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEncourageTeams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEncourageTeamsContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDowndloadMapState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRoomMemberMenu() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Init() {
		return ((T (*)(RoomMemberNameView*))(Il2CppBase() + 0x20F69BC))(this);
	}
	template <typename T = void> T TestSetName(Il2CppArray<uintptr_t>* NameSockets, uintptr_t squadTeamCamera) {
		return ((T (*)(RoomMemberNameView*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x20F1644))(this, NameSockets, squadTeamCamera);
	}
	template <typename T = void> T UpdateCallingCardInfo() {
		return ((T (*)(RoomMemberNameView*))(Il2CppBase() + 0x20F08A0))(this);
	}
	template <typename T = void> T SetNames(Il2CppList<uintptr_t>* list, Il2CppArray<uintptr_t>* NameSockets, Il2CppDictionary<int32_t, int32_t>* ServerSeatId_ClienSeatIdDic, uintptr_t LadderTypeShow, uintptr_t eventHandler, uintptr_t squadTeamCamera) {
		return ((T (*)(RoomMemberNameView*, Il2CppList<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppDictionary<int32_t, int32_t>*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x20F0BC4))(this, list, NameSockets, ServerSeatId_ClienSeatIdDic, LadderTypeShow, eventHandler, squadTeamCamera);
	}
	template <typename T = void> T SetEncourageTeams(Il2CppArray<uintptr_t>* NameSockets, uintptr_t squadTeamCamera, bool Show, bool bSpecialCase) {
		return ((T (*)(RoomMemberNameView*, Il2CppArray<uintptr_t>*, uintptr_t, bool, bool))(Il2CppBase() + 0x20F2A24))(this, NameSockets, squadTeamCamera, Show, bSpecialCase);
	}
	template <typename T = void> T SetEncourageTeamsContent(uintptr_t data) {
		return ((T (*)(RoomMemberNameView*, uintptr_t))(Il2CppBase() + 0x20F2EEC))(this, data);
	}
	template <typename T = void> T SetDowndloadMapState(Il2CppList<uintptr_t>* list, Il2CppArray<uintptr_t>* NameSockets, Il2CppDictionary<int32_t, int32_t>* ServerSeatId_ClienSeatIdDic) {
		return ((T (*)(RoomMemberNameView*, Il2CppList<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppDictionary<int32_t, int32_t>*))(Il2CppBase() + 0x20F1284))(this, list, NameSockets, ServerSeatId_ClienSeatIdDic);
	}
	template <typename T = void> T ShowRoomMemberMenu(bool bShow, int32_t pos) {
		return ((T (*)(RoomMemberNameView*, bool, int32_t))(Il2CppBase() + 0x20F197C))(this, bShow, pos);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomMemberNameView*))(Il2CppBase() + 0x20F6CF8))(this);
	}

};

}
