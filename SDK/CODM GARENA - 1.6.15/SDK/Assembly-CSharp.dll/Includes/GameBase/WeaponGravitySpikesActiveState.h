#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponGravitySpikesActiveState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponGravitySpikesActiveState"));
	}

	template <typename T = uintptr_t> T& m_ProjComponent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponGravitySpikesActiveState*))(Il2CppBase() + 0x1C6D9E8))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponGravitySpikesActiveState*))(Il2CppBase() + 0x1C6DB40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponGravitySpikesActiveState*))(Il2CppBase() + 0x1C6DCF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponGravitySpikesActiveState*))(Il2CppBase() + 0x1C6DCF8))(this);
	}

};

}
