#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponNunchucks
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponNunchucks"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFireAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T ResetAnimatorController() {
		return ((T (*)(WeaponNunchucks*))(Il2CppBase() + 0x3A61778))(this);
	}
	template <typename T = void> T PlayFireAnim() {
		return ((T (*)(WeaponNunchucks*))(Il2CppBase() + 0x3A61820))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ResetAnimatorController() {
		return ((T (*)(WeaponNunchucks*))(Il2CppBase() + 0x3A61958))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayFireAnim() {
		return ((T (*)(WeaponNunchucks*))(Il2CppBase() + 0x3A61960))(this);
	}

};

}
