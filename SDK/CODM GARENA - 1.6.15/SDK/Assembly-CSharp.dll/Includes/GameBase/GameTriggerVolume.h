#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GameTriggerVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GameTriggerVolume"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(GameTriggerVolume*, uintptr_t))(Il2CppBase() + 0x1E900C0))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(GameTriggerVolume*, uintptr_t))(Il2CppBase() + 0x1E90608))(this, other);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerEnter(uintptr_t P0) {
		return ((T (*)(GameTriggerVolume*, uintptr_t))(Il2CppBase() + 0x1E90B50))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerExit(uintptr_t P0) {
		return ((T (*)(GameTriggerVolume*, uintptr_t))(Il2CppBase() + 0x1E90B58))(this, P0);
	}

};

}
