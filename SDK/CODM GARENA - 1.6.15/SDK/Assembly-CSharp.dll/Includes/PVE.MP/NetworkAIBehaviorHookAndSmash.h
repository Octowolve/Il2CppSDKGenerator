#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkAIBehaviorHookAndSmash
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkAIBehaviorHookAndSmash"));
	}

	template <typename T = Il2CppVector3> T& hookBackPosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& hookBackPendingTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& targetPawn() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& hookedPawn() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& config() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& hookState() {
		return *(T*)((uintptr_t)this + 0x44);
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
	template <typename T = uintptr_t> static T& __Hotfix0_ReleaseHook() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateRepInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T BehaviorMain() {
		return ((T (*)(NetworkAIBehaviorHookAndSmash*))(Il2CppBase() + 0x4CCB990))(this);
	}
	template <typename T = void> T OnStop() {
		return ((T (*)(NetworkAIBehaviorHookAndSmash*))(Il2CppBase() + 0x4CCBA78))(this);
	}
	template <typename T = void> T ReleaseHook() {
		return ((T (*)(NetworkAIBehaviorHookAndSmash*))(Il2CppBase() + 0x4CCBB1C))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(NetworkAIBehaviorHookAndSmash*, float))(Il2CppBase() + 0x4CCBC3C))(this, deltaTime);
	}
	template <typename T = void> T OnUpdateRepInfo(uintptr_t skillRepInfo) {
		return ((T (*)(NetworkAIBehaviorHookAndSmash*, uintptr_t))(Il2CppBase() + 0x4CCC11C))(this, skillRepInfo);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_BehaviorMain() {
		return ((T (*)(NetworkAIBehaviorHookAndSmash*))(Il2CppBase() + 0x4CCC3F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStop() {
		return ((T (*)(NetworkAIBehaviorHookAndSmash*))(Il2CppBase() + 0x4CCC400))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(NetworkAIBehaviorHookAndSmash*, float))(Il2CppBase() + 0x4CCC408))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpdateRepInfo(uintptr_t P0) {
		return ((T (*)(NetworkAIBehaviorHookAndSmash*, uintptr_t))(Il2CppBase() + 0x4CCC410))(this, P0);
	}

};

}
