#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkAIBehaviorJump
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkAIBehaviorJump"));
	}

	template <typename T = Il2CppString*> T& jumpAnimName() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& jumpPrepTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& jumpTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& locomotionAnim() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BehaviorMain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FallToGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T BehaviorMain() {
		return ((T (*)(NetworkAIBehaviorJump*))(Il2CppBase() + 0x4CCE2A4))(this);
	}
	template <typename T = void> T OnStop() {
		return ((T (*)(NetworkAIBehaviorJump*))(Il2CppBase() + 0x4CCE38C))(this);
	}
	template <typename T = uintptr_t> T FallToGround(Il2CppVector3 groundPos) {
		return ((T (*)(NetworkAIBehaviorJump*, Il2CppVector3))(Il2CppBase() + 0x4CCE44C))(this, groundPos);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_BehaviorMain() {
		return ((T (*)(NetworkAIBehaviorJump*))(Il2CppBase() + 0x4CCE568))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStop() {
		return ((T (*)(NetworkAIBehaviorJump*))(Il2CppBase() + 0x4CCE570))(this);
	}

};

}
