#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIBotPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIBotPawn"));
	}

	template <typename T = int32_t> T& m_MaxAttackPawnCount() {
		return *(T*)((uintptr_t)this + 0xAFC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AttackPawnList() {
		return *(T*)((uintptr_t)this + 0xB00);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAllInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAttackPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T AddAllInventory() {
		return ((T (*)(AIBotPawn*))(Il2CppBase() + 0x4CE3838))(this);
	}
	template <typename T = bool> T AddAttackPawn(uintptr_t attackPawn) {
		return ((T (*)(AIBotPawn*, uintptr_t))(Il2CppBase() + 0x4CE3990))(this, attackPawn);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AIBotPawn*))(Il2CppBase() + 0x4CE3AC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_AddAllInventory() {
		return ((T (*)(AIBotPawn*))(Il2CppBase() + 0x4CE3BA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(AIBotPawn*))(Il2CppBase() + 0x4CE3BAC))(this);
	}

};

}
