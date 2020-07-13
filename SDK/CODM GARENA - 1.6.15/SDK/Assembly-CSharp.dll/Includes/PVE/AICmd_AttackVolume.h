#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AICmdAttackVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AICmd_AttackVolume"));
	}

	template <typename T = uintptr_t> T& m_AttackVolume() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pushed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Popped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init(uintptr_t inParam) {
		return ((T (*)(AICmdAttackVolume*, uintptr_t))(Il2CppBase() + 0x4CE3D30))(this, inParam);
	}
	template <typename T = void> T Pushed() {
		return ((T (*)(AICmdAttackVolume*))(Il2CppBase() + 0x4CE3F6C))(this);
	}
	template <typename T = void> T Popped() {
		return ((T (*)(AICmdAttackVolume*))(Il2CppBase() + 0x4CE40F0))(this);
	}
	template <typename T = void> T OnPlayAnim() {
		return ((T (*)(AICmdAttackVolume*))(Il2CppBase() + 0x4CE4284))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(AICmdAttackVolume*, uintptr_t))(Il2CppBase() + 0x4CE43C0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Pushed() {
		return ((T (*)(AICmdAttackVolume*))(Il2CppBase() + 0x4CE43C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Popped() {
		return ((T (*)(AICmdAttackVolume*))(Il2CppBase() + 0x4CE43C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnPlayAnim() {
		return ((T (*)(AICmdAttackVolume*))(Il2CppBase() + 0x4CE43CC))(this);
	}

};

}
