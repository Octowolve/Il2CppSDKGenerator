#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SwampVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SwampVolume"));
	}

	template <typename T = float> T& SwampSpeedRatio() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnEnterVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_NoFallingDamage() {
		return ((T (*)(SwampVolume*))(Il2CppBase() + 0x3407410))(this);
	}
	template <typename T = Il2CppVector3> T GetVelocity(Il2CppVector3 currentVelocity, Il2CppVector3 currentPosition) {
		return ((T (*)(SwampVolume*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3407418))(this, currentVelocity, currentPosition);
	}
	template <typename T = void> T OnPawnEnterVolume(uintptr_t pawn) {
		return ((T (*)(SwampVolume*, uintptr_t))(Il2CppBase() + 0x3407520))(this, pawn);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetVelocity(Il2CppVector3 P0, Il2CppVector3 P1) {
		return ((T (*)(SwampVolume*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x34076D0))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnPawnEnterVolume(uintptr_t P0) {
		return ((T (*)(SwampVolume*, uintptr_t))(Il2CppBase() + 0x340770C))(this, P0);
	}

};

}
