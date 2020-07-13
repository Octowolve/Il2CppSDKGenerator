#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEAIActionInit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEAIAction_Init"));
	}

	template <typename T = uintptr_t> T& m_ReadyToGo() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableOnTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GoToNextState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginByDoingIdle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginByPlayingAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginByChasing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginByFollowPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginByWandering() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(PVEAIActionInit*))(Il2CppBase() + 0x436EEDC))(this);
	}
	template <typename T = void> T DisableOnTrigger(bool bDisable) {
		return ((T (*)(PVEAIActionInit*, bool))(Il2CppBase() + 0x436F038))(this, bDisable);
	}
	template <typename T = void> T GoToNextState() {
		return ((T (*)(PVEAIActionInit*))(Il2CppBase() + 0x436F128))(this);
	}
	template <typename T = void> T BeginByDoingIdle() {
		return ((T (*)(PVEAIActionInit*))(Il2CppBase() + 0x436F1F0))(this);
	}
	template <typename T = void> T BeginByPlayingAnim(Il2CppString* animName, float animLength) {
		return ((T (*)(PVEAIActionInit*, Il2CppString*, float))(Il2CppBase() + 0x436F2D0))(this, animName, animLength);
	}
	template <typename T = void> T BeginByChasing() {
		return ((T (*)(PVEAIActionInit*))(Il2CppBase() + 0x436F4E0))(this);
	}
	template <typename T = void> T BeginByFollowPath() {
		return ((T (*)(PVEAIActionInit*))(Il2CppBase() + 0x436F5C0))(this);
	}
	template <typename T = void> T BeginByWandering() {
		return ((T (*)(PVEAIActionInit*))(Il2CppBase() + 0x436F6A0))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(PVEAIActionInit*))(Il2CppBase() + 0x436F780))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(PVEAIActionInit*))(Il2CppBase() + 0x436F834))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(PVEAIActionInit*))(Il2CppBase() + 0x436F904))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnExit() {
		return ((T (*)(PVEAIActionInit*))(Il2CppBase() + 0x436F908))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpdate() {
		return ((T (*)(PVEAIActionInit*))(Il2CppBase() + 0x436F910))(this);
	}

};

}
