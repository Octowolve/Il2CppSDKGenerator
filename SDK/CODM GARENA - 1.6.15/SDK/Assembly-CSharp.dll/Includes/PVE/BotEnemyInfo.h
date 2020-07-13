#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class BotEnemyInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "BotEnemyInfo"));
	}

	template <typename T = uintptr_t> T& pawn() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& lastKnownLoc() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& lastSeenLoc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& lastSeenTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& lastHitByTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& lastUpdateTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& bLostEnemy() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LostContact() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Update(uintptr_t inUpdateType) {
		return ((T (*)(BotEnemyInfo*, uintptr_t))(Il2CppBase() + 0x49BDAD0))(this, inUpdateType);
	}
	template <typename T = bool> T LostContact(float maxTime) {
		return ((T (*)(BotEnemyInfo*, float))(Il2CppBase() + 0x49BDC98))(this, maxTime);
	}
	template <typename T = bool> T IsValid() {
		return ((T (*)(BotEnemyInfo*))(Il2CppBase() + 0x49BDD8C))(this);
	}

};

}
