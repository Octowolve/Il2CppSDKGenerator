#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponFiringStateSecond
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponFiringState_Second"));
	}

	template <typename T = int32_t> T& m_CostAmmoCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& m_StopAmmoCount() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_VTOLSecondFireComponent() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFireImmediately() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSecondaryFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponFiringStateSecond*))(Il2CppBase() + 0x4587270))(this);
	}
	template <typename T = void> T WeaponFire() {
		return ((T (*)(WeaponFiringStateSecond*))(Il2CppBase() + 0x4587340))(this);
	}
	template <typename T = void> T StopFireImmediately() {
		return ((T (*)(WeaponFiringStateSecond*))(Il2CppBase() + 0x4587440))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponFiringStateSecond*))(Il2CppBase() + 0x45874FC))(this);
	}
	template <typename T = void> T StopSecondaryFire() {
		return ((T (*)(WeaponFiringStateSecond*))(Il2CppBase() + 0x45875C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponFiringStateSecond*))(Il2CppBase() + 0x4587674))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WeaponFire() {
		return ((T (*)(WeaponFiringStateSecond*))(Il2CppBase() + 0x458767C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopFireImmediately() {
		return ((T (*)(WeaponFiringStateSecond*))(Il2CppBase() + 0x4587684))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponFiringStateSecond*))(Il2CppBase() + 0x458768C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopSecondaryFire() {
		return ((T (*)(WeaponFiringStateSecond*))(Il2CppBase() + 0x4587694))(this);
	}

};

}
