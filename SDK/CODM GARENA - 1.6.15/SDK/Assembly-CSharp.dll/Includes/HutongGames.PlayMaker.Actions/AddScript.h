#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AddScript
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AddScript"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& script() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& removeOnExit() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& addedComponent() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(AddScript*))(Il2CppBase() + 0x476CEA8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(AddScript*))(Il2CppBase() + 0x476CEB4))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(AddScript*))(Il2CppBase() + 0x476D108))(this);
	}
	template <typename T = void> T DoAddComponent(uintptr_t go) {
		return ((T (*)(AddScript*, uintptr_t))(Il2CppBase() + 0x476CF38))(this, go);
	}

};

}
