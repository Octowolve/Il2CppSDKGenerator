#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class IWeaponSoundData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "IWeaponSoundData"));
	}


	template <typename T = int32_t> T get_MeshID() {
		return ((T (*)(IWeaponSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_WeaponHand() {
		return ((T (*)(IWeaponSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Category() {
		return ((T (*)(IWeaponSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_SubCategory() {
		return ((T (*)(IWeaponSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_WeaponName() {
		return ((T (*)(IWeaponSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsHadSilencerWeaponPart() {
		return ((T (*)(IWeaponSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsContinuousShotWeapon() {
		return ((T (*)(IWeaponSoundData*))(Il2CppBase() + 0x0))(this);
	}

};

}
