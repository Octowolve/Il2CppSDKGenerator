#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class GameStatesDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "GameStatesDataStore"));
	}

	template <typename T = Il2CppList<uint32_t>*> T& mMapIDs() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& mLocalPlayerID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mGameStats() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitLocalInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMapIdList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendGetGameMapStatRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetGameMapStatResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGameStates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWinTimes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFirstWin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T InitializeDataStore() {
		return ((T (*)(GameStatesDataStore*))(Il2CppBase() + 0x3B279F4))(this);
	}
	template <typename T = void> T InitLocalInfo() {
		return ((T (*)(GameStatesDataStore*))(Il2CppBase() + 0x3B27F98))(this);
	}
	template <typename T = void> T InitMapIdList() {
		return ((T (*)(GameStatesDataStore*))(Il2CppBase() + 0x3B27AAC))(this);
	}
	template <typename T = bool> T SendGetGameMapStatRequest() {
		return ((T (*)(GameStatesDataStore*))(Il2CppBase() + 0x3B28098))(this);
	}
	template <typename T = bool> T OnGetGameMapStatResponse(uintptr_t msg, uintptr_t* errstr) {
		return ((T (*)(GameStatesDataStore*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3B28280))(this, msg, errstr);
	}
	template <typename T = void> T UpdateGameStates(Il2CppList<uintptr_t>* stat) {
		return ((T (*)(GameStatesDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3B285C0))(this, stat);
	}
	template <typename T = uint32_t> T GetWinTimes(uint32_t mapID) {
		return ((T (*)(GameStatesDataStore*, uint32_t))(Il2CppBase() + 0x3B2867C))(this, mapID);
	}
	template <typename T = bool> T IsFirstWin(uint32_t mapID) {
		return ((T (*)(GameStatesDataStore*, uint32_t))(Il2CppBase() + 0x3B28800))(this, mapID);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeDataStore() {
		return ((T (*)(GameStatesDataStore*))(Il2CppBase() + 0x3B288C0))(this);
	}

};

}
