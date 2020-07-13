#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponHipFireBoltState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponHipFireBoltState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBoltName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppString*> T GetBoltName() {
		return ((T (*)(WeaponHipFireBoltState*))(Il2CppBase() + 0x3A527A8))(this);
	}
	template <typename T = void> T StartAim() {
		return ((T (*)(WeaponHipFireBoltState*))(Il2CppBase() + 0x3A529A0))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponHipFireBoltState*))(Il2CppBase() + 0x3A52ABC))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBoltName() {
		return ((T (*)(WeaponHipFireBoltState*))(Il2CppBase() + 0x3A52BC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartAim() {
		return ((T (*)(WeaponHipFireBoltState*))(Il2CppBase() + 0x3A52BCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponHipFireBoltState*))(Il2CppBase() + 0x3A52BD4))(this);
	}

};

}
