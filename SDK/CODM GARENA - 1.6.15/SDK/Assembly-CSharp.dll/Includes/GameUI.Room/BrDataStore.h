#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class BrDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "BrDataStore"));
	}

	template <typename T = uint32_t> T& LastClickTimeStamp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& br20v20MapId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_BrPlaylistGroup() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_bAutoFill() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDataByServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDataByMatchServiceModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBrPlaylistConfigClient() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTimeStampFromStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultBrInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBrInfoValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPlaylistInfoValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBrInfoByMapId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBubbleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRedDotInfoByServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Is20vs20PrivateValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlaylistInfoByPlaylistId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = bool> T get_bAutoFill() {
		return ((T (*)(BrDataStore*))(Il2CppBase() + 0x3ACD918))(this);
	}
	template <typename T = void> T set_bAutoFill(bool value) {
		return ((T (*)(BrDataStore*, bool))(Il2CppBase() + 0x3ACD920))(this, value);
	}
	template <typename T = void> T RefreshDataByServer(uintptr_t res) {
		return ((T (*)(BrDataStore*, uintptr_t))(Il2CppBase() + 0x3ACD928))(this, res);
	}
	template <typename T = void> T GetDataByMatchServiceModule(Il2CppList<int32_t>* matchServicelist, uintptr_t list, int32_t limitMode) {
		return ((T (*)(BrDataStore*, Il2CppList<int32_t>*, uintptr_t, int32_t))(Il2CppBase() + 0x3ACF828))(this, matchServicelist, list, limitMode);
	}
	template <typename T = uintptr_t> T GetBrPlaylistConfigClient(uintptr_t parentConfig, uintptr_t desc) {
		return ((T (*)(BrDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3ACE634))(this, parentConfig, desc);
	}
	template <typename T = int32_t> T GetTimeStampFromStr(Il2CppString* TimeStr) {
		return ((T (*)(BrDataStore*, Il2CppString*))(Il2CppBase() + 0x3ACFCA0))(this, TimeStr);
	}
	template <typename T = bool> T GetDefaultBrInfo(Il2CppList<int32_t>* matchTypeList, uintptr_t playlistId, uintptr_t mapId) {
		return ((T (*)(BrDataStore*, Il2CppList<int32_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3AD0018))(this, matchTypeList, playlistId, mapId);
	}
	template <typename T = bool> T IsBrInfoValid(uintptr_t matchType) {
		return ((T (*)(BrDataStore*, uintptr_t))(Il2CppBase() + 0x3AD07B0))(this, matchType);
	}
	template <typename T = uintptr_t> T IsPlaylistInfoValid(Il2CppList<int32_t>* matchTypeList, int32_t playlistId, int32_t mapId, uintptr_t levelInfo, int32_t brLadderLevel) {
		return ((T (*)(BrDataStore*, Il2CppList<int32_t>*, int32_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x3AD0938))(this, matchTypeList, playlistId, mapId, levelInfo, brLadderLevel);
	}
	template <typename T = uintptr_t> T GetBrInfoByMapId(Il2CppList<int32_t>* matchTypelist, int32_t targetPlaylistId, int32_t mapId) {
		return ((T (*)(BrDataStore*, Il2CppList<int32_t>*, int32_t, int32_t))(Il2CppBase() + 0x3AD0F20))(this, matchTypelist, targetPlaylistId, mapId);
	}
	template <typename T = uintptr_t> T GetBubbleInfo(Il2CppList<int32_t>* matchServiceList, double serverTime, uintptr_t dateTime, int32_t dayOfWeek, uintptr_t levelInfo, int32_t brLadderRank) {
		return ((T (*)(BrDataStore*, Il2CppList<int32_t>*, double, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x3AD12F0))(this, matchServiceList, serverTime, dateTime, dayOfWeek, levelInfo, brLadderRank);
	}
	template <typename T = void> T RefreshRedDotInfoByServer() {
		return ((T (*)(BrDataStore*))(Il2CppBase() + 0x3ACF578))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(BrDataStore*))(Il2CppBase() + 0x3AD1858))(this);
	}
	template <typename T = bool> T Is20vs20PrivateValid() {
		return ((T (*)(BrDataStore*))(Il2CppBase() + 0x3AD1914))(this);
	}
	template <typename T = uintptr_t> T GetPlaylistInfoByPlaylistId(int32_t playlistId) {
		return ((T (*)(BrDataStore*, int32_t))(Il2CppBase() + 0x3AD1BB0))(this, playlistId);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(BrDataStore*))(Il2CppBase() + 0x3AD1E14))(this);
	}

};

}
