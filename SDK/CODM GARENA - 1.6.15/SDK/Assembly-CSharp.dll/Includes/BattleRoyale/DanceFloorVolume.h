#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class DanceFloorVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "DanceFloorVolume"));
	}

	template <typename T = bool> T& bIsInsideVolume() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInsideVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Start() {
		return ((T (*)(DanceFloorVolume*))(Il2CppBase() + 0x3D45DAC))(this);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(DanceFloorVolume*, uintptr_t))(Il2CppBase() + 0x3D460B4))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(DanceFloorVolume*, uintptr_t))(Il2CppBase() + 0x3D46438))(this, other);
	}
	template <typename T = bool> T CheckInsideVolume(uintptr_t pawn) {
		return ((T (*)(DanceFloorVolume*, uintptr_t))(Il2CppBase() + 0x3D45EA8))(this, pawn);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(DanceFloorVolume*))(Il2CppBase() + 0x3D466F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerEnter(uintptr_t P0) {
		return ((T (*)(DanceFloorVolume*, uintptr_t))(Il2CppBase() + 0x3D466F8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerExit(uintptr_t P0) {
		return ((T (*)(DanceFloorVolume*, uintptr_t))(Il2CppBase() + 0x3D46700))(this, P0);
	}

};

}
