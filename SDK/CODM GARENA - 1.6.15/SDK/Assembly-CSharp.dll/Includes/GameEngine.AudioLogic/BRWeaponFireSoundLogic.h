#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.AudioLogic {

class BRWeaponFireSoundLogic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.AudioLogic", "BRWeaponFireSoundLogic"));
	}

	template <typename T = float> T& MAX_UNDERWATER_VALUE() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& isLastFireInWater() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsChangeFirePlace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireSoundExtend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFireSoundVolumeUnderWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldPlaySingleFireSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T get_IsSwiming() {
		return ((T (*)(BRWeaponFireSoundLogic*))(Il2CppBase() + 0x35D1FF0))(this);
	}
	template <typename T = bool> T get_IsUnderWater() {
		return ((T (*)(BRWeaponFireSoundLogic*))(Il2CppBase() + 0x35D20DC))(this);
	}
	template <typename T = bool> T IsChangeFirePlace() {
		return ((T (*)(BRWeaponFireSoundLogic*))(Il2CppBase() + 0x35D21C8))(this);
	}
	template <typename T = Il2CppString*> T GetFireSoundExtend() {
		return ((T (*)(BRWeaponFireSoundLogic*))(Il2CppBase() + 0x35D228C))(this);
	}
	template <typename T = void> T UpdateFireSoundVolumeUnderWater() {
		return ((T (*)(BRWeaponFireSoundLogic*))(Il2CppBase() + 0x35D23A8))(this);
	}
	template <typename T = bool> T ShouldPlaySingleFireSound() {
		return ((T (*)(BRWeaponFireSoundLogic*))(Il2CppBase() + 0x35D2830))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsChangeFirePlace() {
		return ((T (*)(BRWeaponFireSoundLogic*))(Il2CppBase() + 0x35D2A60))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetFireSoundExtend() {
		return ((T (*)(BRWeaponFireSoundLogic*))(Il2CppBase() + 0x35D2B34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateFireSoundVolumeUnderWater() {
		return ((T (*)(BRWeaponFireSoundLogic*))(Il2CppBase() + 0x35D2C58))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ShouldPlaySingleFireSound() {
		return ((T (*)(BRWeaponFireSoundLogic*))(Il2CppBase() + 0x35D2C5C))(this);
	}

};

}
