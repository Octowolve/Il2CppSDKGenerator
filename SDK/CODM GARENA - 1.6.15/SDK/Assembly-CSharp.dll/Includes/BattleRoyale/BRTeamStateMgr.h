#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTeamStateMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTeamStateMgr"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_TeamMateStateDic() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uint32_t>*> T& m_TeamMateStateIdList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddTeamMate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTeammateState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init() {
		return ((T (*)(BRTeamStateMgr*))(Il2CppBase() + 0x2635228))(this);
	}
	template <typename T = void> T AddTeamMate(uint32_t teammateId) {
		return ((T (*)(BRTeamStateMgr*, uint32_t))(Il2CppBase() + 0x2635328))(this, teammateId);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRTeamStateMgr*, float))(Il2CppBase() + 0x2635474))(this, deltaTime);
	}
	template <typename T = void> T CheckTeammateState() {
		return ((T (*)(BRTeamStateMgr*))(Il2CppBase() + 0x2635520))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRTeamStateMgr*))(Il2CppBase() + 0x2635934))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRTeamStateMgr*, float))(Il2CppBase() + 0x263593C))(this, P0);
	}

};

}
