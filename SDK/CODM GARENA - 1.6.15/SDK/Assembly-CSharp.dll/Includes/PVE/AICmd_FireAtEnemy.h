#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AICmdFireAtEnemy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AICmd_FireAtEnemy"));
	}

	template <typename T = uintptr_t> T& enemy() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Execute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldApproachEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_State() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPrecondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Popped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> static T Execute(uintptr_t owner, uintptr_t inEnemy) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CE6190))(0, owner, inEnemy);
	}
	template <typename T = bool> T ShouldApproachEnemy() {
		return ((T (*)(AICmdFireAtEnemy*))(Il2CppBase() + 0x4CE6290))(this);
	}
	template <typename T = uintptr_t> T State() {
		return ((T (*)(AICmdFireAtEnemy*))(Il2CppBase() + 0x4CE64AC))(this);
	}
	template <typename T = bool> T CheckPrecondition() {
		return ((T (*)(AICmdFireAtEnemy*))(Il2CppBase() + 0x4CE6594))(this);
	}
	template <typename T = void> T Popped() {
		return ((T (*)(AICmdFireAtEnemy*))(Il2CppBase() + 0x4CE66F8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_State() {
		return ((T (*)(AICmdFireAtEnemy*))(Il2CppBase() + 0x4CE67DC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckPrecondition() {
		return ((T (*)(AICmdFireAtEnemy*))(Il2CppBase() + 0x4CE67E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Popped() {
		return ((T (*)(AICmdFireAtEnemy*))(Il2CppBase() + 0x4CE67EC))(this);
	}

};

}
