#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ControllerSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ControllerSettings"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& height() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& radius() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& slopeLimit() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& stepOffset() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& center() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& detectCollisions() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& previousGo() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ControllerSettings*))(Il2CppBase() + 0x4F3C4D8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ControllerSettings*))(Il2CppBase() + 0x4F3C6EC))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(ControllerSettings*))(Il2CppBase() + 0x4F3CAB0))(this);
	}
	template <typename T = void> T DoControllerSettings() {
		return ((T (*)(ControllerSettings*))(Il2CppBase() + 0x4F3C718))(this);
	}

};

}
