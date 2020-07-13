#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class SwimmingBaseState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "SwimmingBaseState"));
	}

	template <typename T = uintptr_t> T& m_OwnerStateMachine() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_SwimmingComponent() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndStateMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(SwimmingBaseState*))(Il2CppBase() + 0x35A7C04))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(SwimmingBaseState*))(Il2CppBase() + 0x35A7C9C))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(SwimmingBaseState*, float))(Il2CppBase() + 0x35A7D34))(this, deltaTime);
	}
	template <typename T = void> T OnEndStateMachine() {
		return ((T (*)(SwimmingBaseState*))(Il2CppBase() + 0x35A7DD4))(this);
	}

};

}
