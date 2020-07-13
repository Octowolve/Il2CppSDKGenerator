#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class MousePickEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "MousePickEvent"));
	}

	template <typename T = uintptr_t> T& GameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& rayDistance() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& mouseOver() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& mouseDown() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& mouseUp() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& mouseOff() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& layerMask() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& invertMask() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(MousePickEvent*))(Il2CppBase() + 0x4D7A124))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(MousePickEvent*))(Il2CppBase() + 0x4D7A200))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(MousePickEvent*))(Il2CppBase() + 0x4D7A480))(this);
	}
	template <typename T = void> T DoMousePickEvent() {
		return ((T (*)(MousePickEvent*))(Il2CppBase() + 0x4D7A22C))(this);
	}
	template <typename T = bool> T DoRaycast() {
		return ((T (*)(MousePickEvent*))(Il2CppBase() + 0x4D7A484))(this);
	}
	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(MousePickEvent*))(Il2CppBase() + 0x4D7A55C))(this);
	}

};

}
