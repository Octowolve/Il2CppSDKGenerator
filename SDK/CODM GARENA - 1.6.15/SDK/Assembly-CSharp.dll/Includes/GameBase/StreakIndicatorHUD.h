#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class StreakIndicatorHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "StreakIndicatorHUD"));
	}

	template <typename T = uintptr_t> T& ItemTemplate() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_ItemDictionary() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(StreakIndicatorHUD*))(Il2CppBase() + 0x30AE1E8))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(StreakIndicatorHUD*, float))(Il2CppBase() + 0x30AE1F0))(this, dt);
	}
	template <typename T = void> T Add(uint32_t actorID, uintptr_t streakTransform, bool isAircraft, Il2CppVector3 offset, bool isPerspective, uint32_t ownerPlayerID, float iconScale, float raycastOffset) {
		return ((T (*)(StreakIndicatorHUD*, uint32_t, uintptr_t, bool, Il2CppVector3, bool, uint32_t, float, float))(Il2CppBase() + 0x30AE3E0))(this, actorID, streakTransform, isAircraft, offset, isPerspective, ownerPlayerID, iconScale, raycastOffset);
	}
	template <typename T = void> T Remove(uint32_t actorID) {
		return ((T (*)(StreakIndicatorHUD*, uint32_t))(Il2CppBase() + 0x30AED1C))(this, actorID);
	}
	template <typename T = void> T TickItems(float deltaTime) {
		return ((T (*)(StreakIndicatorHUD*, float))(Il2CppBase() + 0x30AE218))(this, deltaTime);
	}
	template <typename T = void> T RemoveAllItems() {
		return ((T (*)(StreakIndicatorHUD*))(Il2CppBase() + 0x30AFA84))(this);
	}
	template <typename T = void> T UpdateElectricShockCarInfo(uint32_t actorID, uintptr_t type, int32_t count) {
		return ((T (*)(StreakIndicatorHUD*, uint32_t, uintptr_t, int32_t))(Il2CppBase() + 0x30AFD50))(this, actorID, type, count);
	}

};

}
