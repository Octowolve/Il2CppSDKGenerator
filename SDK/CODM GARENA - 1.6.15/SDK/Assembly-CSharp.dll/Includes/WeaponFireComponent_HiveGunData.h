#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponFireComponentHiveGunData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponFireComponent_HiveGunData"));
	}

	template <typename T = float> T& HealthPoint() {
		return *(T*)((uintptr_t)this + 0x244);
	}
	template <typename T = float> T& DetectRadius() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = float> T& HiveFlyTime() {
		return *(T*)((uintptr_t)this + 0x24C);
	}
	template <typename T = float> T& DamageDelayTime() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = int32_t> T& DamageBuffId() {
		return *(T*)((uintptr_t)this + 0x254);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uintptr_t targetType, uintptr_t mask, uintptr_t index, uintptr_t interrupt) {
		return ((T (*)(WeaponFireComponentHiveGunData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x48A4E1C))(this, bytes, position, targetType, mask, index, interrupt);
	}
	template <typename T = void> T xLuaBaseProxy_Deserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(WeaponFireComponentHiveGunData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x48A51C4))(this, P0, P1, P2, P3, P4, P5);
	}

};

}
