#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AddComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AddComponent"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& component() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeComponent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& removeOnExit() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& addedComponent() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(AddComponent*))(Il2CppBase() + 0x476BEEC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(AddComponent*))(Il2CppBase() + 0x476BF00))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(AddComponent*))(Il2CppBase() + 0x476C178))(this);
	}
	template <typename T = void> T DoAddComponent() {
		return ((T (*)(AddComponent*))(Il2CppBase() + 0x476BF20))(this);
	}

};

}
