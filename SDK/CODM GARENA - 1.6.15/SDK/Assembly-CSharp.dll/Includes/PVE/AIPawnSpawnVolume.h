#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIPawnSpawnVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIPawnSpawnVolume"));
	}

	template <typename T = uintptr_t> T& Checker() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& NotityCheckerList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& SpawnSound() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& DeSpawnSound() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeactivateAllCheckers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(AIPawnSpawnVolume*))(Il2CppBase() + 0x49B0A60))(this);
	}
	template <typename T = void> T DeactivateAllCheckers() {
		return ((T (*)(AIPawnSpawnVolume*))(Il2CppBase() + 0x49B0C74))(this);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(AIPawnSpawnVolume*, uintptr_t))(Il2CppBase() + 0x49B0E28))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(AIPawnSpawnVolume*, uintptr_t))(Il2CppBase() + 0x49B1158))(this, other);
	}
	template <typename T = void> T xLuaBaseProxy_DeactivateAllCheckers() {
		return ((T (*)(AIPawnSpawnVolume*))(Il2CppBase() + 0x49B13A8))(this);
	}

};

}
