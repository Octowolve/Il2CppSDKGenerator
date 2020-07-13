#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class CrouchVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "CrouchVolume"));
	}

	template <typename T = bool> T& m_HasTriggerCrouch() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnEnterVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnExitVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnPawnEnterVolume(uintptr_t pawn) {
		return ((T (*)(CrouchVolume*, uintptr_t))(Il2CppBase() + 0x41AD494))(this, pawn);
	}
	template <typename T = void> T OnPawnExitVolume(uintptr_t pawn) {
		return ((T (*)(CrouchVolume*, uintptr_t))(Il2CppBase() + 0x41AD5F4))(this, pawn);
	}
	template <typename T = void> T xLuaBaseProxy_OnPawnEnterVolume(uintptr_t P0) {
		return ((T (*)(CrouchVolume*, uintptr_t))(Il2CppBase() + 0x41AD730))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnPawnExitVolume(uintptr_t P0) {
		return ((T (*)(CrouchVolume*, uintptr_t))(Il2CppBase() + 0x41AD738))(this, P0);
	}

};

}
