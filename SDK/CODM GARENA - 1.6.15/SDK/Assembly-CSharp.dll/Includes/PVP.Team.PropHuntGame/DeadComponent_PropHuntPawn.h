#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class DeadComponentPropHuntPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "DeadComponent_PropHuntPawn"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalPlayDeadAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDeadEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T InternalPlayDeadAnim(float deltaTime) {
		return ((T (*)(DeadComponentPropHuntPawn*, float))(Il2CppBase() + 0x348F36C))(this, deltaTime);
	}
	template <typename T = void> T PlayDeadEffect() {
		return ((T (*)(DeadComponentPropHuntPawn*))(Il2CppBase() + 0x348F61C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InternalPlayDeadAnim(float P0) {
		return ((T (*)(DeadComponentPropHuntPawn*, float))(Il2CppBase() + 0x348FCEC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDeadEffect() {
		return ((T (*)(DeadComponentPropHuntPawn*))(Il2CppBase() + 0x348FCF4))(this);
	}

};

}
