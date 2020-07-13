#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class ACSAIPawnSpawnPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "ACSAIPawnSpawnPoint"));
	}

	template <typename T = uint32_t> T& SpawnPawnID() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& TargetDisplayAble() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& TargetDisplayWords() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& TargetDisplayZOffset() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& LevelTargetAble() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerInitID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnAIPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uint32_t> T GetPlayerInitID(uintptr_t ActorType, uintptr_t PawnObject) {
		return ((T (*)(ACSAIPawnSpawnPoint*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CE16F8))(this, ActorType, PawnObject);
	}
	template <typename T = uintptr_t> T SpawnAIPawn(uintptr_t property) {
		return ((T (*)(ACSAIPawnSpawnPoint*, uintptr_t))(Il2CppBase() + 0x4CE194C))(this, property);
	}
	template <typename T = uint32_t> T xLuaBaseProxy_GetPlayerInitID(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ACSAIPawnSpawnPoint*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CE1FCC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_SpawnAIPawn(uintptr_t P0) {
		return ((T (*)(ACSAIPawnSpawnPoint*, uintptr_t))(Il2CppBase() + 0x4CE1FD0))(this, P0);
	}

};

}
