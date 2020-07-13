#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AIActControlSystemBaseAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AIActControlSystem_BaseAction"));
	}

	template <typename T = uintptr_t> T& m_ControlledPawn() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_ACSController() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = uintptr_t> T get_ControlledPawn() {
		return ((T (*)(AIActControlSystemBaseAction*))(Il2CppBase() + 0x4F286C8))(this);
	}
	template <typename T = void> T set_ControlledPawn(uintptr_t value) {
		return ((T (*)(AIActControlSystemBaseAction*, uintptr_t))(Il2CppBase() + 0x4F28AB0))(this, value);
	}
	template <typename T = uintptr_t> T get_ACSController() {
		return ((T (*)(AIActControlSystemBaseAction*))(Il2CppBase() + 0x4F286C0))(this);
	}
	template <typename T = void> T set_ACSController(uintptr_t value) {
		return ((T (*)(AIActControlSystemBaseAction*, uintptr_t))(Il2CppBase() + 0x4F29380))(this, value);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(AIActControlSystemBaseAction*))(Il2CppBase() + 0x4F287B0))(this);
	}

};

}
