#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class PvpMatchTimeController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "PvpMatchTimeController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& m_MaxShowCount() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_SpvpDS() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureMapInfoMatchBefore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureMapInfoMatchJoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigurePlaylistInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureMultipleChooseInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureMapInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ConfigureMapInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_ConfigureMapInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T get_SpvpDS() {
		return ((T (*)(PvpMatchTimeController*))(Il2CppBase() + 0x2CDF74C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PvpMatchTimeController*))(Il2CppBase() + 0x2CDF7FC))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PvpMatchTimeController*))(Il2CppBase() + 0x2CDF908))(this);
	}
	template <typename T = void> T ConfigureMapInfoMatchBefore() {
		return ((T (*)(PvpMatchTimeController*))(Il2CppBase() + 0x2CDF9AC))(this);
	}
	template <typename T = void> T ConfigureMapInfoMatchJoin() {
		return ((T (*)(PvpMatchTimeController*))(Il2CppBase() + 0x2CDFED8))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(PvpMatchTimeController*))(Il2CppBase() + 0x2CDFA50))(this);
	}
	template <typename T = void> T ConfigurePlaylistInfo(Il2CppList<uint32_t>* PlaylistList) {
		return ((T (*)(PvpMatchTimeController*, Il2CppList<uint32_t>*))(Il2CppBase() + 0x2CE0368))(this, PlaylistList);
	}
	template <typename T = void> T ConfigureMultipleChooseInfo(Il2CppList<uint32_t>* playlistList, Il2CppList<uint32_t>* mapIds) {
		return ((T (*)(PvpMatchTimeController*, Il2CppList<uint32_t>*, Il2CppList<uint32_t>*))(Il2CppBase() + 0x2CDFF84))(this, playlistList, mapIds);
	}
	template <typename T = void> T ConfigureMapInfo(int32_t playlistId, Il2CppList<uint32_t>* mapIds) {
		return ((T (*)(PvpMatchTimeController*, int32_t, Il2CppList<uint32_t>*))(Il2CppBase() + 0x2CE016C))(this, playlistId, mapIds);
	}
	template <typename T = void> T ConfigureMapInfo_1(Il2CppList<uint32_t>* mapIds) {
		return ((T (*)(PvpMatchTimeController*, Il2CppList<uint32_t>*))(Il2CppBase() + 0x2CE0AB8))(this, mapIds);
	}
	template <typename T = void> T ConfigureMapInfo_2(int32_t mapId) {
		return ((T (*)(PvpMatchTimeController*, int32_t))(Il2CppBase() + 0x2CE0820))(this, mapId);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PvpMatchTimeController*))(Il2CppBase() + 0x2CE0D00))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PvpMatchTimeController*))(Il2CppBase() + 0x2CE0D08))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ConfigureMapInfoMatchBefore() {
		return ((T (*)(PvpMatchTimeController*))(Il2CppBase() + 0x2CE0D10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ConfigureMapInfoMatchJoin() {
		return ((T (*)(PvpMatchTimeController*))(Il2CppBase() + 0x2CE0D18))(this);
	}

};

}
