#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WorkShop {

class WorkShopDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WorkShop", "WorkShopDataStore"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_List() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tmpList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllEntranceList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPlaylistId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPlayListPriority() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMpFeatureModeAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWorkShopList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InWorkShopList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_InWorkShopList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBrFeatureModeAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSpvpPlaylistValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBrPlaylistValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMainPushWorkShopEntranceConfClient() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T UpdateData(uintptr_t res) {
		return ((T (*)(WorkShopDataStore*, uintptr_t))(Il2CppBase() + 0xC0FD90))(this, res);
	}
	template <typename T = void> T GetAllEntranceList(uintptr_t parList) {
		return ((T (*)(WorkShopDataStore*, uintptr_t))(Il2CppBase() + 0xC108F0))(this, parList);
	}
	template <typename T = bool> T CheckPlaylistId(int32_t playlistId) {
		return ((T (*)(WorkShopDataStore*, int32_t))(Il2CppBase() + 0xC10CC8))(this, playlistId);
	}
	template <typename T = int32_t> T CheckPlayListPriority(uint32_t playlistId) {
		return ((T (*)(WorkShopDataStore*, uint32_t))(Il2CppBase() + 0xC11360))(this, playlistId);
	}
	template <typename T = bool> T CheckMpFeatureModeAvailable(int32_t serverTime) {
		return ((T (*)(WorkShopDataStore*, int32_t))(Il2CppBase() + 0xC11648))(this, serverTime);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetWorkShopList() {
		return ((T (*)(WorkShopDataStore*))(Il2CppBase() + 0xC11888))(this);
	}
	template <typename T = bool> T InWorkShopList(uintptr_t c, Il2CppList<uintptr_t>* list) {
		return ((T (*)(WorkShopDataStore*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0xC11CC8))(this, c, list);
	}
	template <typename T = bool> T InWorkShopList_1(int32_t playlistid, Il2CppList<uintptr_t>* list) {
		return ((T (*)(WorkShopDataStore*, int32_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0xC12350))(this, playlistid, list);
	}
	template <typename T = bool> T CheckBrFeatureModeAvailable(int32_t serverTime) {
		return ((T (*)(WorkShopDataStore*, int32_t))(Il2CppBase() + 0xC12640))(this, serverTime);
	}
	template <typename T = bool> T CheckSpvpPlaylistValid(int32_t playlistId) {
		return ((T (*)(WorkShopDataStore*, int32_t))(Il2CppBase() + 0xC111F4))(this, playlistId);
	}
	template <typename T = bool> T CheckBrPlaylistValid(int32_t playlistId) {
		return ((T (*)(WorkShopDataStore*, int32_t))(Il2CppBase() + 0xC12880))(this, playlistId);
	}
	template <typename T = uintptr_t> T GetMainPushWorkShopEntranceConfClient(int32_t serverTime) {
		return ((T (*)(WorkShopDataStore*, int32_t))(Il2CppBase() + 0xC129D8))(this, serverTime);
	}
	template <typename T = int32_t> static T GetWorkShopListm__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xC12E3C))(0, a, b);
	}

};

}
