#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class NetworkElectricShockCarAbNormalPullBehavior
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "NetworkElectricShockCarAbNormalPullBehavior"));
	}

	template <typename T = float> T& m_Duration() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& onStartAttack() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& onStopAttack() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MainBehavior() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T MainBehavior() {
		return ((T (*)(NetworkElectricShockCarAbNormalPullBehavior*))(Il2CppBase() + 0x3489808))(this);
	}
	template <typename T = void> T OnStop() {
		return ((T (*)(NetworkElectricShockCarAbNormalPullBehavior*))(Il2CppBase() + 0x3489920))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(NetworkElectricShockCarAbNormalPullBehavior*, float))(Il2CppBase() + 0x34899CC))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_MainBehavior() {
		return ((T (*)(NetworkElectricShockCarAbNormalPullBehavior*))(Il2CppBase() + 0x3489B44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStop() {
		return ((T (*)(NetworkElectricShockCarAbNormalPullBehavior*))(Il2CppBase() + 0x3489B4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(NetworkElectricShockCarAbNormalPullBehavior*, float))(Il2CppBase() + 0x3489C0C))(this, P0);
	}

};

}
