#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TrainingGame {

class TrainingGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TrainingGame", "TrainingGame"));
	}

	template <typename T = uintptr_t> T& trainingTargetMgr() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateGameComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectUnregistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_trainingTargetMgr() {
		return ((T (*)(TrainingGame*))(Il2CppBase() + 0x3D8C540))(this);
	}
	template <typename T = void> T set_trainingTargetMgr(uintptr_t value) {
		return ((T (*)(TrainingGame*, uintptr_t))(Il2CppBase() + 0x3D8C548))(this, value);
	}
	template <typename T = bool> T get_IsClearAllDroppedPickUpOnRoundStart() {
		return ((T (*)(TrainingGame*))(Il2CppBase() + 0x3D8C550))(this);
	}
	template <typename T = void> T CreateGameComponents() {
		return ((T (*)(TrainingGame*))(Il2CppBase() + 0x3D8C558))(this);
	}
	template <typename T = void> T OnLevelObjectRegistered(uintptr_t levelObject) {
		return ((T (*)(TrainingGame*, uintptr_t))(Il2CppBase() + 0x3D8C628))(this, levelObject);
	}
	template <typename T = void> T OnLevelObjectUnregistered(uintptr_t levelObject) {
		return ((T (*)(TrainingGame*, uintptr_t))(Il2CppBase() + 0x3D8CB40))(this, levelObject);
	}
	template <typename T = void> T xLuaBaseProxy_CreateGameComponents() {
		return ((T (*)(TrainingGame*))(Il2CppBase() + 0x3D8D0A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectRegistered(uintptr_t P0) {
		return ((T (*)(TrainingGame*, uintptr_t))(Il2CppBase() + 0x3D8D0AC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectUnregistered(uintptr_t P0) {
		return ((T (*)(TrainingGame*, uintptr_t))(Il2CppBase() + 0x3D8D0B4))(this, P0);
	}

};

}
