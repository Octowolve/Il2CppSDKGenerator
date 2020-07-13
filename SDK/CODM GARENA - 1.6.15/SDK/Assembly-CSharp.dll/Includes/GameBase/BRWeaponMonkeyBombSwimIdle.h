#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BRWeaponMonkeyBombSwimIdle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BRWeaponMonkeyBombSwimIdle"));
	}

	template <typename T = float> T& m_BeginStateTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(BRWeaponMonkeyBombSwimIdle*))(Il2CppBase() + 0x37498F8))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(BRWeaponMonkeyBombSwimIdle*, float))(Il2CppBase() + 0x3749B00))(this, DeltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(BRWeaponMonkeyBombSwimIdle*))(Il2CppBase() + 0x3749C48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRWeaponMonkeyBombSwimIdle*, float))(Il2CppBase() + 0x3749C4C))(this, P0);
	}

};

}
