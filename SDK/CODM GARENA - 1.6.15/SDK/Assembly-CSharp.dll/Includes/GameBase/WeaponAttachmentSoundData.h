#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponAttachmentSoundData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponAttachmentSoundData"));
	}

	template <typename T = uintptr_t> T& m_weaponAttachment() {
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
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1C54200))(0, weapon);
	}
	template <typename T = void> T Init(uintptr_t weapon) {
		return ((T (*)(WeaponAttachmentSoundData*, uintptr_t))(Il2CppBase() + 0x1C542C8))(this, weapon);
	}
	template <typename T = int32_t> T get_MeshID() {
		return ((T (*)(WeaponAttachmentSoundData*))(Il2CppBase() + 0x1C54370))(this);
	}
	template <typename T = uintptr_t> T get_WeaponHand() {
		return ((T (*)(WeaponAttachmentSoundData*))(Il2CppBase() + 0x1C5439C))(this);
	}
	template <typename T = uintptr_t> T get_Category() {
		return ((T (*)(WeaponAttachmentSoundData*))(Il2CppBase() + 0x1C543C8))(this);
	}
	template <typename T = uintptr_t> T get_SubCategory() {
		return ((T (*)(WeaponAttachmentSoundData*))(Il2CppBase() + 0x1C543F4))(this);
	}
	template <typename T = uintptr_t> T get_WeaponName() {
		return ((T (*)(WeaponAttachmentSoundData*))(Il2CppBase() + 0x1C54420))(this);
	}
	template <typename T = bool> T IsHadSilencerWeaponPart() {
		return ((T (*)(WeaponAttachmentSoundData*))(Il2CppBase() + 0x1C5444C))(this);
	}
	template <typename T = bool> T IsContinuousShotWeapon() {
		return ((T (*)(WeaponAttachmentSoundData*))(Il2CppBase() + 0x1C54510))(this);
	}

};

}
