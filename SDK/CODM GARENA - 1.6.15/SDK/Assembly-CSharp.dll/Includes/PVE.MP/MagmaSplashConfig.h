#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class MagmaSplashConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "MagmaSplashConfig"));
	}

	template <typename T = float> T& BossRunToCenterSpeed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& MoveCenterSpotName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& SkyShoutsPreAnim() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& SkyShoutsEndAnim() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& SkyShoutsTotalTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MagmaSpraySpotName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& PreApperMagmaSprayTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& MagmaSprayNotHurtEffectTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& MagmaSprayHurtEffectTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& MagmaSprayIntervalEffectTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& EffectDamageRadius() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& EffetcDamage() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& WeaknessDurTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& WeaknessEndAnim() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& MSWarningAssetID() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& MSSplashAssetID() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& PreMagmaEffectTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppVector3> T get_MoveCenterSpotLocation() {
		return ((T (*)(MagmaSplashConfig*))(Il2CppBase() + 0x4601074))(this);
	}
	template <typename T = float> T get_SkyShoutsPreAnimTime() {
		return ((T (*)(MagmaSplashConfig*))(Il2CppBase() + 0x460108C))(this);
	}
	template <typename T = float> T get_SkyShoutsEndAnimTime() {
		return ((T (*)(MagmaSplashConfig*))(Il2CppBase() + 0x460109C))(this);
	}
	template <typename T = float> T get_MagmaSprayTotalTime() {
		return ((T (*)(MagmaSplashConfig*))(Il2CppBase() + 0x46010AC))(this);
	}
	template <typename T = float> T get_WeaknessEndAnimTime() {
		return ((T (*)(MagmaSplashConfig*))(Il2CppBase() + 0x46010C0))(this);
	}

};

}
