#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class AIPawnRemoteTriggerVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "AIPawnRemoteTriggerVolume"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRemoteTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(AIPawnRemoteTriggerVolume*, uintptr_t))(Il2CppBase() + 0x3954E3C))(this, other);
	}
	template <typename T = void> T OnRemoteTriggerEnter(bool bEnter) {
		return ((T (*)(AIPawnRemoteTriggerVolume*, bool))(Il2CppBase() + 0x3954EDC))(this, bEnter);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(AIPawnRemoteTriggerVolume*, uintptr_t))(Il2CppBase() + 0x3955050))(this, other);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerEnter(uintptr_t P0) {
		return ((T (*)(AIPawnRemoteTriggerVolume*, uintptr_t))(Il2CppBase() + 0x39550F0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerExit(uintptr_t P0) {
		return ((T (*)(AIPawnRemoteTriggerVolume*, uintptr_t))(Il2CppBase() + 0x39550F8))(this, P0);
	}

};

}
