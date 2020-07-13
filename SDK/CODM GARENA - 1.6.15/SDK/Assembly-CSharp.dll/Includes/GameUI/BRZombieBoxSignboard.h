#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRZombieBoxSignboard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRZombieBoxSignboard"));
	}

	template <typename T = float> T& showDistance() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedClamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLabelImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T CheckNear() {
		return ((T (*)(BRZombieBoxSignboard*))(Il2CppBase() + 0x3DD8358))(this);
	}
	template <typename T = bool> T IsNeedClamp() {
		return ((T (*)(BRZombieBoxSignboard*))(Il2CppBase() + 0x3DD8554))(this);
	}
	template <typename T = void> T UpdateLabelImpl() {
		return ((T (*)(BRZombieBoxSignboard*))(Il2CppBase() + 0x3DD85F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CheckNear() {
		return ((T (*)(BRZombieBoxSignboard*))(Il2CppBase() + 0x3DD868C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsNeedClamp() {
		return ((T (*)(BRZombieBoxSignboard*))(Il2CppBase() + 0x3DD8694))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateLabelImpl() {
		return ((T (*)(BRZombieBoxSignboard*))(Il2CppBase() + 0x3DD869C))(this);
	}

};

}
