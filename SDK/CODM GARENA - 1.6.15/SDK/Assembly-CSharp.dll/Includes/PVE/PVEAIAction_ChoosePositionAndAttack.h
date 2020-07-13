#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEAIActionChoosePositionAndAttack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEAIAction_ChoosePositionAndAttack"));
	}

	template <typename T = float> T& SecondsBetweenChangePosition() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& TimeOutSecondsForWaitingForAttack() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryExeCmd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T TryExeCmd() {
		return ((T (*)(PVEAIActionChoosePositionAndAttack*))(Il2CppBase() + 0x436D928))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_TryExeCmd() {
		return ((T (*)(PVEAIActionChoosePositionAndAttack*))(Il2CppBase() + 0x436DA48))(this);
	}

};

}
