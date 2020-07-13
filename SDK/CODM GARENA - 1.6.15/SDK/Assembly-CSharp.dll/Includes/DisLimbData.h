#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DisLimbData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DisLimbData"));
	}

	template <typename T = uintptr_t> T& LimbType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& LimbBone() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& DisLimbEffectAssetID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& BloodEffectAssetID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& BloodEffectTransform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LimbColliders() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LimbEffects() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& limbTex() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
