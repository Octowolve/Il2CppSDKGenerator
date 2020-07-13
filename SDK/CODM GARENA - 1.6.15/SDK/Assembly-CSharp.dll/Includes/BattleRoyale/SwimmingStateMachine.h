#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class SwimmingStateMachine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "SwimmingStateMachine"));
	}

	template <typename T = Il2CppDictionary<unsigned char, uintptr_t>*> T& m_States() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_CurrentSwimmingState() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_CurrentState() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_SwimmingComponent() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitStateMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndStateMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GotoState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_OwnerSwimmingComponent() {
		return ((T (*)(SwimmingStateMachine*))(Il2CppBase() + 0x35A7BFC))(this);
	}
	template <typename T = bool> T IsInState(uintptr_t swimState) {
		return ((T (*)(SwimmingStateMachine*, uintptr_t))(Il2CppBase() + 0x35A9570))(this, swimState);
	}
	template <typename T = void> T InitStateMachine() {
		return ((T (*)(SwimmingStateMachine*))(Il2CppBase() + 0x35A9374))(this);
	}
	template <typename T = void> T EndStateMachine() {
		return ((T (*)(SwimmingStateMachine*))(Il2CppBase() + 0x35A97C0))(this);
	}
	template <typename T = void> T GotoState(uintptr_t toSwimmingState) {
		return ((T (*)(SwimmingStateMachine*, uintptr_t))(Il2CppBase() + 0x35A8CAC))(this, toSwimmingState);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(SwimmingStateMachine*, float))(Il2CppBase() + 0x35A9878))(this, deltaTime);
	}

};

}
