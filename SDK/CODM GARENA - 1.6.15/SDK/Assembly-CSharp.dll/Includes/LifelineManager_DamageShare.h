#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LifelineManagerDamageShare
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LifelineManager_DamageShare"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMasterSrcMat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_LifelineType() {
		return ((T (*)(LifelineManagerDamageShare*))(Il2CppBase() + 0x49366F0))(this);
	}
	template <typename T = uintptr_t> T get_LifelineEffectID() {
		return ((T (*)(LifelineManagerDamageShare*))(Il2CppBase() + 0x49366F8))(this);
	}
	template <typename T = uintptr_t> T get_MasterEffectID() {
		return ((T (*)(LifelineManagerDamageShare*))(Il2CppBase() + 0x4936704))(this);
	}
	template <typename T = uintptr_t> T GetMasterSrcMat() {
		return ((T (*)(LifelineManagerDamageShare*))(Il2CppBase() + 0x4936710))(this);
	}

};

}
