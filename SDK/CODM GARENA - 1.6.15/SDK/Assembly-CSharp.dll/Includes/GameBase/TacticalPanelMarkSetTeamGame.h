#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalPanelMarkSetTeamGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalPanelMarkSetTeamGame"));
	}

	template <typename T = uintptr_t> T& m_TacticalGPS() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReceiveEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetDatum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClassifyPawnList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Initialize(uintptr_t inTVMView) {
		return ((T (*)(TacticalPanelMarkSetTeamGame*, uintptr_t))(Il2CppBase() + 0x2797920))(this, inTVMView);
	}
	template <typename T = void> T ReceiveEvent(uintptr_t inMsg) {
		return ((T (*)(TacticalPanelMarkSetTeamGame*, uintptr_t))(Il2CppBase() + 0x2797A48))(this, inMsg);
	}
	template <typename T = void> T ResetDatum() {
		return ((T (*)(TacticalPanelMarkSetTeamGame*))(Il2CppBase() + 0x2797AE8))(this);
	}
	template <typename T = void> T ClassifyPawnList(uintptr_t outTeammateList, uintptr_t outEnemyList) {
		return ((T (*)(TacticalPanelMarkSetTeamGame*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2797B8C))(this, outTeammateList, outEnemyList);
	}
	template <typename T = void> T xLuaBaseProxy_Initialize(uintptr_t P0) {
		return ((T (*)(TacticalPanelMarkSetTeamGame*, uintptr_t))(Il2CppBase() + 0x2797E2C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ReceiveEvent(uintptr_t P0) {
		return ((T (*)(TacticalPanelMarkSetTeamGame*, uintptr_t))(Il2CppBase() + 0x2797E30))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ResetDatum() {
		return ((T (*)(TacticalPanelMarkSetTeamGame*))(Il2CppBase() + 0x2797E34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ClassifyPawnList(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(TacticalPanelMarkSetTeamGame*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2797E38))(this, P0, P1);
	}

};

}
