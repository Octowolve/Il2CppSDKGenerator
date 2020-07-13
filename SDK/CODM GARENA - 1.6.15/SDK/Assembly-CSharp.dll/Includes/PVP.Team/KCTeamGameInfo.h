#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team {

class KCTeamGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team", "KCTeamGameInfo"));
	}

	template <typename T = uintptr_t> T& killConfirmDropType() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRadarCompAssetIDList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncGameInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppList<uintptr_t>*> T GetRadarCompAssetIDList() {
		return ((T (*)(KCTeamGameInfo*))(Il2CppBase() + 0x4044A8C))(this);
	}
	template <typename T = void> T SyncGameInfoProperty(uint32_t propertyID, uint32_t value, uintptr_t varType) {
		return ((T (*)(KCTeamGameInfo*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x4044BC0))(this, propertyID, value, varType);
	}
	template <typename T = Il2CppList<uintptr_t>*> T xLuaBaseProxy_GetRadarCompAssetIDList() {
		return ((T (*)(KCTeamGameInfo*))(Il2CppBase() + 0x4044D90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SyncGameInfoProperty(uint32_t P0, uint32_t P1, uintptr_t P2) {
		return ((T (*)(KCTeamGameInfo*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x4044D98))(this, P0, P1, P2);
	}

};

}
