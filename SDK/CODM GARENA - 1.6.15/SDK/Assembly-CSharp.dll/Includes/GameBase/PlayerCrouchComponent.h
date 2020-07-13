#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PlayerCrouchComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PlayerCrouchComponent"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedStartCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedEndCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T StartCrouch(uintptr_t pawn, bool immediately, bool needPlayAnim, bool force) {
		return ((T (*)(PlayerCrouchComponent*, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x16E11E8))(this, pawn, immediately, needPlayAnim, force);
	}
	template <typename T = void> T EndCrouch(uintptr_t pawn, bool immediately, bool setEyeHeightInImmediately) {
		return ((T (*)(PlayerCrouchComponent*, uintptr_t, bool, bool))(Il2CppBase() + 0x16E1534))(this, pawn, immediately, setEyeHeightInImmediately);
	}
	template <typename T = void> T SimulatedStartCrouch(uintptr_t pawn) {
		return ((T (*)(PlayerCrouchComponent*, uintptr_t))(Il2CppBase() + 0x16E17B0))(this, pawn);
	}
	template <typename T = void> T SimulatedEndCrouch(uintptr_t pawn, bool immediately) {
		return ((T (*)(PlayerCrouchComponent*, uintptr_t, bool))(Il2CppBase() + 0x16E1A28))(this, pawn, immediately);
	}
	template <typename T = void> T xLuaBaseProxy_StartCrouch(uintptr_t P0, bool P1, bool P2, bool P3) {
		return ((T (*)(PlayerCrouchComponent*, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x16E1C94))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T xLuaBaseProxy_EndCrouch(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(PlayerCrouchComponent*, uintptr_t, bool, bool))(Il2CppBase() + 0x16E1CB8))(this, P0, P1, P2);
	}

};

}
