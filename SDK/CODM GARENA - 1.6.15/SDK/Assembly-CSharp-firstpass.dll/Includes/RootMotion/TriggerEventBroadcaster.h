#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion {

class TriggerEventBroadcaster
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion", "TriggerEventBroadcaster"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T OnTriggerEnter(uintptr_t collider) {
		return ((T (*)(TriggerEventBroadcaster*, uintptr_t))(Il2CppBase() + 0x4F80C5C))(this, collider);
	}
	template <typename T = void> T OnTriggerStay(uintptr_t collider) {
		return ((T (*)(TriggerEventBroadcaster*, uintptr_t))(Il2CppBase() + 0x4F80D68))(this, collider);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t collider) {
		return ((T (*)(TriggerEventBroadcaster*, uintptr_t))(Il2CppBase() + 0x4F80E74))(this, collider);
	}

};

}
