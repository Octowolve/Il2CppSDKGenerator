#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ControllerIsGrounded
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ControllerIsGrounded"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& trueEvent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& falseEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& previousGo() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ControllerIsGrounded*))(Il2CppBase() + 0x4F3BEA4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ControllerIsGrounded*))(Il2CppBase() + 0x4F3BEBC))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(ControllerIsGrounded*))(Il2CppBase() + 0x4F3C108))(this);
	}
	template <typename T = void> T DoControllerIsGrounded() {
		return ((T (*)(ControllerIsGrounded*))(Il2CppBase() + 0x4F3BEE8))(this);
	}

};

}
