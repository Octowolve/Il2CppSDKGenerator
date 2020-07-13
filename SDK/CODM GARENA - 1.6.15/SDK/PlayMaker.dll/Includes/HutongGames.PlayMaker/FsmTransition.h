#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmTransition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmTransition"));
	}

	template <typename T = uintptr_t> T& fsmEvent() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& toState() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& linkStyle() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& linkConstraint() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = unsigned char> T& colorIndex() {
		return *(T*)((uintptr_t)this + 0x12);
	}

	template <typename T = uintptr_t> T get_FsmEvent() {
		return ((T (*)(FsmTransition*))(Il2CppBase() + 0x2EF9788))(this);
	}
	template <typename T = void> T set_FsmEvent(uintptr_t value) {
		return ((T (*)(FsmTransition*, uintptr_t))(Il2CppBase() + 0x2EF6AC4))(this, value);
	}
	template <typename T = Il2CppString*> T get_ToState() {
		return ((T (*)(FsmTransition*))(Il2CppBase() + 0x2EFB5E8))(this);
	}
	template <typename T = void> T set_ToState(Il2CppString* value) {
		return ((T (*)(FsmTransition*, Il2CppString*))(Il2CppBase() + 0x2F1719C))(this, value);
	}
	template <typename T = uintptr_t> T get_LinkStyle() {
		return ((T (*)(FsmTransition*))(Il2CppBase() + 0x2F171A4))(this);
	}
	template <typename T = void> T set_LinkStyle(uintptr_t value) {
		return ((T (*)(FsmTransition*, uintptr_t))(Il2CppBase() + 0x2F171AC))(this, value);
	}
	template <typename T = uintptr_t> T get_LinkConstraint() {
		return ((T (*)(FsmTransition*))(Il2CppBase() + 0x2F171B4))(this);
	}
	template <typename T = void> T set_LinkConstraint(uintptr_t value) {
		return ((T (*)(FsmTransition*, uintptr_t))(Il2CppBase() + 0x2F171BC))(this, value);
	}
	template <typename T = int32_t> T get_ColorIndex() {
		return ((T (*)(FsmTransition*))(Il2CppBase() + 0x2F171C4))(this);
	}
	template <typename T = void> T set_ColorIndex(int32_t value) {
		return ((T (*)(FsmTransition*, int32_t))(Il2CppBase() + 0x2F171CC))(this, value);
	}
	template <typename T = Il2CppString*> T get_EventName() {
		return ((T (*)(FsmTransition*))(Il2CppBase() + 0x2EE9268))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(FsmTransition*, uintptr_t))(Il2CppBase() + 0x2F172F0))(this, other);
	}

};

}
