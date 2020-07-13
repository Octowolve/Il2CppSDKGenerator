#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class LuaExplodeActorEventProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "LuaExplodeActorEventProcessor"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LuaExplodeActorEventProcessor*))(Il2CppBase() + 0x19AD300))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LuaExplodeActorEventProcessor*))(Il2CppBase() + 0x19AD6B0))(this);
	}

};

}
