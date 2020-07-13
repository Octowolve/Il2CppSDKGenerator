#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.NoLogin {

class NoLoginGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.NoLogin", "NoLoginGame"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGameEventChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessZoneEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init() {
		return ((T (*)(NoLoginGame*))(Il2CppBase() + 0x19DBF80))(this);
	}
	template <typename T = void> T InitGameEventChannel() {
		return ((T (*)(NoLoginGame*))(Il2CppBase() + 0x19DC03C))(this);
	}
	template <typename T = void> T ProcessZoneEvent(uintptr_t msg) {
		return ((T (*)(NoLoginGame*, uintptr_t))(Il2CppBase() + 0x19DC130))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(NoLoginGame*))(Il2CppBase() + 0x19DC23C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitGameEventChannel() {
		return ((T (*)(NoLoginGame*))(Il2CppBase() + 0x19DC244))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessZoneEvent(uintptr_t P0) {
		return ((T (*)(NoLoginGame*, uintptr_t))(Il2CppBase() + 0x19DC24C))(this, P0);
	}

};

}
