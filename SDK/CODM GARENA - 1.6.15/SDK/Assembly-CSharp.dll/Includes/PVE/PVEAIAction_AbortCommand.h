#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEAIActionAbortCommand
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEAIAction_AbortCommand"));
	}

	template <typename T = uintptr_t> T& m_BehaviorAction() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_AIBehaviorPendingTransfer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& TransferMode() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GoToNextBehavior() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T get_AIBehaviorOfOwnerState() {
		return ((T (*)(PVEAIActionAbortCommand*))(Il2CppBase() + 0x436CC34))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(PVEAIActionAbortCommand*))(Il2CppBase() + 0x436CD08))(this);
	}
	template <typename T = void> T GoToNextBehavior(Il2CppString* nextBehavior) {
		return ((T (*)(PVEAIActionAbortCommand*, Il2CppString*))(Il2CppBase() + 0x436D134))(this, nextBehavior);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(PVEAIActionAbortCommand*))(Il2CppBase() + 0x436D26C))(this);
	}

};

}
