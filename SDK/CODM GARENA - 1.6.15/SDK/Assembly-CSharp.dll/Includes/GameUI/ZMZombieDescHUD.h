#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ZMZombieDescHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ZMZombieDescHUD"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& DescPairs() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowZombieDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T ShowDesc(bool bShow) {
		return ((T (*)(ZMZombieDescHUD*, bool))(Il2CppBase() + 0x2A69758))(this, bShow);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ZMZombieDescHUD*))(Il2CppBase() + 0x2A69848))(this);
	}
	template <typename T = void> T OnShowZombieDesc(uintptr_t Msg) {
		return ((T (*)(ZMZombieDescHUD*, uintptr_t))(Il2CppBase() + 0x2A6995C))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ZMZombieDescHUD*))(Il2CppBase() + 0x2A69CFC))(this);
	}

};

}
