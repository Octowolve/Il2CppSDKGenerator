#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class Rotate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "Rotate"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& vector() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& xAngle() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& yAngle() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& zAngle() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& space() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& perSecond() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = bool> T& lateUpdate() {
		return *(T*)((uintptr_t)this + 0x42);
	}
	template <typename T = bool> T& fixedUpdate() {
		return *(T*)((uintptr_t)this + 0x43);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Rotate*))(Il2CppBase() + 0x4D84464))(this);
	}
	template <typename T = void> T OnPreprocess() {
		return ((T (*)(Rotate*))(Il2CppBase() + 0x4D845B0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(Rotate*))(Il2CppBase() + 0x4D845E4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(Rotate*))(Il2CppBase() + 0x4D84910))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(Rotate*))(Il2CppBase() + 0x4D84930))(this);
	}
	template <typename T = void> T OnFixedUpdate() {
		return ((T (*)(Rotate*))(Il2CppBase() + 0x4D84968))(this);
	}
	template <typename T = void> T DoRotate() {
		return ((T (*)(Rotate*))(Il2CppBase() + 0x4D84630))(this);
	}

};

}
