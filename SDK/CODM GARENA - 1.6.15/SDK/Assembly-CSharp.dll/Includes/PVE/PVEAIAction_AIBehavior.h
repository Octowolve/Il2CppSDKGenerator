#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEAIActionAIBehavior
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEAIAction_AIBehavior"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryGetAIBehaviorActionFromState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBehaviorChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AbortCurrentBehavior() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCorrespondingBehavior() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBehaviorExecuted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> static T TryGetAIBehaviorActionFromState(uintptr_t state) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x436CFF4))(0, state);
	}
	template <typename T = bool> T IsBehaviorChanged(Il2CppString* desiredBehavior) {
		return ((T (*)(PVEAIActionAIBehavior*, Il2CppString*))(Il2CppBase() + 0x436D310))(this, desiredBehavior);
	}
	template <typename T = void> T AbortCurrentBehavior() {
		return ((T (*)(PVEAIActionAIBehavior*))(Il2CppBase() + 0x436D3B8))(this);
	}
	template <typename T = Il2CppString*> T GetCorrespondingBehavior() {
		return ((T (*)(PVEAIActionAIBehavior*))(Il2CppBase() + 0x436D450))(this);
	}
	template <typename T = void> T OnBehaviorExecuted() {
		return ((T (*)(PVEAIActionAIBehavior*))(Il2CppBase() + 0x436D540))(this);
	}

};

}
