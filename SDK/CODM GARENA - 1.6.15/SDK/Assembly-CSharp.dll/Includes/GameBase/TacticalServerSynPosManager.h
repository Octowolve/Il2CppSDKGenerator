#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalServerSynPosManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalServerSynPosManager"));
	}

	template <typename T = uintptr_t> T& m_TacticalMap() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_RadarMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_BaseMapMarkInfo() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AllMapTagObjs() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_NextUpdateTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& m_LastMapPos() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_lastMapScale() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddMapTagObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTeamShowOnMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMapBasePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMapBaseScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TacticalServerSynPosManager*))(Il2CppBase() + 0x27AE3B4))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(TacticalServerSynPosManager*))(Il2CppBase() + 0x27AE578))(this);
	}
	template <typename T = void> T AddMapTagObj() {
		return ((T (*)(TacticalServerSynPosManager*))(Il2CppBase() + 0x27AECA8))(this);
	}
	template <typename T = bool> T UpdateTeamShowOnMap(int32_t idx, uint32_t playerId, Il2CppVector3 currPos) {
		return ((T (*)(TacticalServerSynPosManager*, int32_t, uint32_t, Il2CppVector3))(Il2CppBase() + 0x27AF464))(this, idx, playerId, currPos);
	}
	template <typename T = Il2CppVector3> T GetMapBasePos() {
		return ((T (*)(TacticalServerSynPosManager*))(Il2CppBase() + 0x27AF228))(this);
	}
	template <typename T = float> T GetMapBaseScale() {
		return ((T (*)(TacticalServerSynPosManager*))(Il2CppBase() + 0x27AF0A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalServerSynPosManager*))(Il2CppBase() + 0x27AF744))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(TacticalServerSynPosManager*))(Il2CppBase() + 0x27AF74C))(this);
	}

};

}
