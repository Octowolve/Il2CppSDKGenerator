#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireGroupEndState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireGroupEndState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T PlayAnim() {
		return ((T (*)(WeaponFireGroupEndState*))(Il2CppBase() + 0x2403854))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayAnim() {
		return ((T (*)(WeaponFireGroupEndState*))(Il2CppBase() + 0x2403970))(this);
	}

};

}
