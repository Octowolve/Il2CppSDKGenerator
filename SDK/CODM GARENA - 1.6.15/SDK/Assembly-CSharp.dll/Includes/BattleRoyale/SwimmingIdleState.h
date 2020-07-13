#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class SwimmingIdleState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "SwimmingIdleState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(SwimmingIdleState*))(Il2CppBase() + 0x35A897C))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(SwimmingIdleState*, float))(Il2CppBase() + 0x35A8B70))(this, deltaTime);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(SwimmingIdleState*))(Il2CppBase() + 0x35A8E78))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(SwimmingIdleState*))(Il2CppBase() + 0x35A8F1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SwimmingIdleState*, float))(Il2CppBase() + 0x35A8F20))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(SwimmingIdleState*))(Il2CppBase() + 0x35A8F24))(this);
	}

};

}
