#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRBossSantaMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRBossSantaMgr"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_AllBossSanta() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterBoss() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterBoss() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T RegisterBoss(uintptr_t boss) {
		return ((T (*)(BRBossSantaMgr*, uintptr_t))(Il2CppBase() + 0x24E2F70))(this, boss);
	}
	template <typename T = void> T UnregisterBoss(uintptr_t boss) {
		return ((T (*)(BRBossSantaMgr*, uintptr_t))(Il2CppBase() + 0x24E3088))(this, boss);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BRBossSantaMgr*))(Il2CppBase() + 0x24E31A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(BRBossSantaMgr*))(Il2CppBase() + 0x24E33F8))(this);
	}

};

}
