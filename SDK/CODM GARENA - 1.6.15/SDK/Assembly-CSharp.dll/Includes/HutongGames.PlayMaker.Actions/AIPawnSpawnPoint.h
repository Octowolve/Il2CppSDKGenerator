#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AIPawnSpawnPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AIPawnSpawnPoint"));
	}

	template <typename T = uintptr_t> T& m_NextSpawnPawnProperty() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = uintptr_t> T InitializePawnData() {
		return ((T (*)(AIPawnSpawnPoint*))(Il2CppBase() + 0x4F298A8))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(AIPawnSpawnPoint*))(Il2CppBase() + 0x4F299B8))(this);
	}
	template <typename T = uintptr_t> T SpawnAIPawn(uintptr_t property) {
		return ((T (*)(AIPawnSpawnPoint*, uintptr_t))(Il2CppBase() + 0x4F299BC))(this, property);
	}

};

}
