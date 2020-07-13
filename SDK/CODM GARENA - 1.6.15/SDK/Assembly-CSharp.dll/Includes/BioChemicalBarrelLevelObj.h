#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BioChemicalBarrelLevelObj
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BioChemicalBarrelLevelObj"));
	}

	template <typename T = int32_t> T& LeakUnbrokenEffectID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& LeakBrokenEffectID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& MinLeakRange() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& MaxLeakRange() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& MinDamage() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& MaxDamage() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& DamageCD() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& LeakSpeedUnBroken() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& LeakSpeedBroken() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& OverallLeakAmount() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
