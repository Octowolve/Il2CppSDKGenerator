#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SpawnRandAIAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SpawnRandAIAction"));
	}

	template <typename T = uintptr_t> T& spawnChecker() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& randomSpawnPoints() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& excludeLastSelected() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& lastSelectedIndex() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& aiIndex() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& spawnCount() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(SpawnRandAIAction*))(Il2CppBase() + 0x50313D4))(this);
	}
	template <typename T = void> T DoActivate() {
		return ((T (*)(SpawnRandAIAction*))(Il2CppBase() + 0x50313D8))(this);
	}
	template <typename T = bool> static T DoActivatem__0(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x5031770))(0, e);
	}

};

}
