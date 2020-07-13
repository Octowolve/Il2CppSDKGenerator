#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LobbyRankNotDropView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyRankNotDropView"));
	}

	template <typename T = uintptr_t> T& ActvDetailsBtn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ObjOn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ObjOff() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& ObjRoot() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ActvNameDes() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppVector3> T& MpRoomPos() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppVector3> T& BrRoomPos() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& mRankedMatchDataStore() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_GlobalDS() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_RoomDS() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& mIsMp() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& mIsBr() {
		return *(T*)((uintptr_t)this + 0xB5);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& MpRnakedMatchList() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& BrRnakedMatchList() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActvDetailsBtnClack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOnOffActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_RankedMatchDataStore() {
		return ((T (*)(LobbyRankNotDropView*))(Il2CppBase() + 0x43409AC))(this);
	}
	template <typename T = uintptr_t> T get_GlobalDS() {
		return ((T (*)(LobbyRankNotDropView*))(Il2CppBase() + 0x4340A5C))(this);
	}
	template <typename T = uintptr_t> T get_RoomDS() {
		return ((T (*)(LobbyRankNotDropView*))(Il2CppBase() + 0x4340B0C))(this);
	}
	template <typename T = void> T SetUIState(bool bMp, bool bBr, bool bTop) {
		return ((T (*)(LobbyRankNotDropView*, bool, bool, bool))(Il2CppBase() + 0x4340BBC))(this, bMp, bBr, bTop);
	}
	template <typename T = void> T OnActvDetailsBtnClack(uintptr_t Obj) {
		return ((T (*)(LobbyRankNotDropView*, uintptr_t))(Il2CppBase() + 0x4341EFC))(this, Obj);
	}
	template <typename T = void> T SetOnOffActive() {
		return ((T (*)(LobbyRankNotDropView*))(Il2CppBase() + 0x4341940))(this);
	}
	template <typename T = bool> static T SetUIStatem__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43420A0))(0, it);
	}
	template <typename T = bool> static T SetUIStatem__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x434210C))(0, it);
	}

};

}
