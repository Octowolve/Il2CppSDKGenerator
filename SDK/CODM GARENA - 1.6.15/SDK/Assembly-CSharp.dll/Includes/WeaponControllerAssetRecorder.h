#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponControllerAssetRecorder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponControllerAssetRecorder"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& WeaponControllerAssetList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponControllerAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponControllerAssetMPId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T GetWeaponControllerAssetId(int32_t weaponAssetId) {
		return ((T (*)(WeaponControllerAssetRecorder*, int32_t))(Il2CppBase() + 0x4899BB0))(this, weaponAssetId);
	}
	template <typename T = int32_t> T GetWeaponControllerAssetMPId(int32_t weaponAssetId) {
		return ((T (*)(WeaponControllerAssetRecorder*, int32_t))(Il2CppBase() + 0x4899DCC))(this, weaponAssetId);
	}

};

}