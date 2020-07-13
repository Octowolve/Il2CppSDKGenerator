#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class CDPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "CDPlayer"));
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
		return ((T (*)(CDPlayer*, uintptr_t))(Il2CppBase() + 0x3D3C6D0))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(CDPlayer*, uintptr_t))(Il2CppBase() + 0x3D3CA48))(this, other);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerEnter(uintptr_t P0) {
		return ((T (*)(CDPlayer*, uintptr_t))(Il2CppBase() + 0x3D3CDC0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerExit(uintptr_t P0) {
		return ((T (*)(CDPlayer*, uintptr_t))(Il2CppBase() + 0x3D3CDC8))(this, P0);
	}

};

}
