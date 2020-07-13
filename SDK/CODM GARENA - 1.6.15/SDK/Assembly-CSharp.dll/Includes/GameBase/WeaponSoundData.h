#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponSoundData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponSoundData"));
	}

	template <typename T = uintptr_t> T& m_weapon() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHadSilencerWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsContinuousShotWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> static T Create(uintptr_t weapon) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3A8671C))(0, weapon);
	}
	template <typename T = void> T Init(uintptr_t weapon) {
		return ((T (*)(WeaponSoundData*, uintptr_t))(Il2CppBase() + 0x3A867E4))(this, weapon);
	}
	template <typename T = int32_t> T get_MeshID() {
		return ((T (*)(WeaponSoundData*))(Il2CppBase() + 0x3A8688C))(this);
	}
	template <typename T = uintptr_t> T get_WeaponHand() {
		return ((T (*)(WeaponSoundData*))(Il2CppBase() + 0x3A868B8))(this);
	}
	template <typename T = uintptr_t> T get_Category() {
		return ((T (*)(WeaponSoundData*))(Il2CppBase() + 0x3A868C0))(this);
	}
	template <typename T = uintptr_t> T get_SubCategory() {
		return ((T (*)(WeaponSoundData*))(Il2CppBase() + 0x3A868EC))(this);
	}
	template <typename T = uintptr_t> T get_WeaponName() {
		return ((T (*)(WeaponSoundData*))(Il2CppBase() + 0x3A868F4))(this);
	}
	template <typename T = bool> T IsHadSilencerWeaponPart() {
		return ((T (*)(WeaponSoundData*))(Il2CppBase() + 0x3A86920))(this);
	}
	template <typename T = bool> T IsContinuousShotWeapon() {
		return ((T (*)(WeaponSoundData*))(Il2CppBase() + 0x3A869E4))(this);
	}

};

}
