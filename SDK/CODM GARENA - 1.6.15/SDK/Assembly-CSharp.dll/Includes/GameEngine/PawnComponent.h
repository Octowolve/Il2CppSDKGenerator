#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PawnComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PawnComponent"));
	}

	template <typename T = uintptr_t> T& m_Pawn() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& bIsPawnRobot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> static T& bEnableRobotCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetServerRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetClientRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartAirCraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectatingStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectatingEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectatingViewChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReSpawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeginDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uintptr_t> T get_Pawn() {
		return ((T (*)(PawnComponent*))(Il2CppBase() + 0x2735B70))(this);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(PawnComponent*, uintptr_t))(Il2CppBase() + 0x2735B78))(this, pawn);
	}
	template <typename T = void> T OnSwitchRole() {
		return ((T (*)(PawnComponent*))(Il2CppBase() + 0x2735D4C))(this);
	}
	template <typename T = void> T OnSwitchView() {
		return ((T (*)(PawnComponent*))(Il2CppBase() + 0x2735E14))(this);
	}
	template <typename T = void> T SetServerRelevant(bool isRelevant) {
		return ((T (*)(PawnComponent*, bool))(Il2CppBase() + 0x2735EDC))(this, isRelevant);
	}
	template <typename T = void> T SetClientRelevant(bool isRelevant) {
		return ((T (*)(PawnComponent*, bool))(Il2CppBase() + 0x2735FAC))(this, isRelevant);
	}
	template <typename T = void> T OnStartAirCraft() {
		return ((T (*)(PawnComponent*))(Il2CppBase() + 0x273607C))(this);
	}
	template <typename T = void> T OnWeaponChanged() {
		return ((T (*)(PawnComponent*))(Il2CppBase() + 0x2736144))(this);
	}
	template <typename T = void> T OnSpectatingStart() {
		return ((T (*)(PawnComponent*))(Il2CppBase() + 0x273620C))(this);
	}
	template <typename T = void> T OnSpectatingEnd() {
		return ((T (*)(PawnComponent*))(Il2CppBase() + 0x27362D4))(this);
	}
	template <typename T = void> T OnSpectatingViewChange(uintptr_t spectatingViewType) {
		return ((T (*)(PawnComponent*, uintptr_t))(Il2CppBase() + 0x273639C))(this, spectatingViewType);
	}
	template <typename T = void> T OnReSpawn() {
		return ((T (*)(PawnComponent*))(Il2CppBase() + 0x273646C))(this);
	}
	template <typename T = void> T OnBeginDestroy() {
		return ((T (*)(PawnComponent*))(Il2CppBase() + 0x2736534))(this);
	}
	template <typename T = void> T OnDie() {
		return ((T (*)(PawnComponent*))(Il2CppBase() + 0x27365FC))(this);
	}
	template <typename T = uintptr_t> T GetOwner() {
		return ((T (*)(PawnComponent*))(Il2CppBase() + 0x27366C4))(this);
	}

};

}
