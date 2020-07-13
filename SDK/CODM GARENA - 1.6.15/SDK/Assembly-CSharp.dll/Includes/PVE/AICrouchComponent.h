#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AICrouchComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AICrouchComponent"));
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

	template <typename T = void> T StartCrouch(uintptr_t pawn, bool immediately, bool needPlayAnim, bool force) {
		return ((T (*)(AICrouchComponent*, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x49A8E9C))(this, pawn, immediately, needPlayAnim, force);
	}
	template <typename T = void> T EndCrouch(uintptr_t pawn, bool immediately, bool setEyeHeightInImmediately) {
		return ((T (*)(AICrouchComponent*, uintptr_t, bool, bool))(Il2CppBase() + 0x49A902C))(this, pawn, immediately, setEyeHeightInImmediately);
	}
	template <typename T = void> T xLuaBaseProxy_StartCrouch(uintptr_t P0, bool P1, bool P2, bool P3) {
		return ((T (*)(AICrouchComponent*, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x49A91C4))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T xLuaBaseProxy_EndCrouch(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(AICrouchComponent*, uintptr_t, bool, bool))(Il2CppBase() + 0x49A91E8))(this, P0, P1, P2);
	}

};

}
