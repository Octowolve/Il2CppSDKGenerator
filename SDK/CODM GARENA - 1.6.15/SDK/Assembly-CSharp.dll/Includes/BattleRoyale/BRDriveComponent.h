#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRDriveComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRDriveComponent"));
	}

	template <typename T = uintptr_t> T& m_BRPawn() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_PawnAnimationComponent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_AnimatorAsset() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOnVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOffVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(BRDriveComponent*, uintptr_t))(Il2CppBase() + 0x2523374))(this, pawn);
	}
	template <typename T = void> T GetOnVehicle(uintptr_t vehicle, uintptr_t seat) {
		return ((T (*)(BRDriveComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x25234F8))(this, vehicle, seat);
	}
	template <typename T = void> T GetOffVehicle() {
		return ((T (*)(BRDriveComponent*))(Il2CppBase() + 0x25235AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(BRDriveComponent*, uintptr_t))(Il2CppBase() + 0x2523644))(this, P0);
	}

};

}
