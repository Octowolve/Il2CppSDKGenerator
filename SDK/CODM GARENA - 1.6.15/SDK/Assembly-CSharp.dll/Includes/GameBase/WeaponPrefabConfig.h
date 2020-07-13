#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponPrefabConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponPrefabConfig"));
	}

	template <typename T = bool> T& UseHandOffsetPose() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& IdleOffsetType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T CopyFrom(uintptr_t copyFrom) {
		return ((T (*)(WeaponPrefabConfig*, uintptr_t))(Il2CppBase() + 0x3A627E0))(this, copyFrom);
	}

};

}
