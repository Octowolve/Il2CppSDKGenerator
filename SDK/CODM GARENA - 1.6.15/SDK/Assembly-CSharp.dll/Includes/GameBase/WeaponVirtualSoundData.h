#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponVirtualSoundData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponVirtualSoundData"));
	}

	template <typename T = int32_t> T& m_weaponID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_weaponActorID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& m_OwnerID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_Category() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_WeaponName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_SubCategory() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_WeaponData() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_MeshID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_BREquipmentMgr() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_WeaponPartItemList() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& isSingleFire() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& fireTimesInGroupClient() {
		return *(T*)((uintptr_t)this + 0x34);
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
	template <typename T = uintptr_t> static T& __Hotfix0_LoadPropertyFromConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHadSilencerWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsContinuousShotWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> static T Create(int32_t weaponID, int32_t weaponActorID, uint32_t ownerID) {
		return ((T (*)(void *, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x458CDE0))(0, weaponID, weaponActorID, ownerID);
	}
	template <typename T = void> T Init(int32_t weaponID, int32_t weaponActorID, uint32_t ownerID) {
		return ((T (*)(WeaponVirtualSoundData*, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x458CECC))(this, weaponID, weaponActorID, ownerID);
	}
	template <typename T = void> T LoadPropertyFromConfig() {
		return ((T (*)(WeaponVirtualSoundData*))(Il2CppBase() + 0x458D058))(this);
	}
	template <typename T = int32_t> T get_MeshID() {
		return ((T (*)(WeaponVirtualSoundData*))(Il2CppBase() + 0x458D460))(this);
	}
	template <typename T = uintptr_t> T get_WeaponHand() {
		return ((T (*)(WeaponVirtualSoundData*))(Il2CppBase() + 0x458D468))(this);
	}
	template <typename T = uintptr_t> T get_Category() {
		return ((T (*)(WeaponVirtualSoundData*))(Il2CppBase() + 0x458D490))(this);
	}
	template <typename T = uintptr_t> T get_SubCategory() {
		return ((T (*)(WeaponVirtualSoundData*))(Il2CppBase() + 0x458D498))(this);
	}
	template <typename T = uintptr_t> T get_WeaponName() {
		return ((T (*)(WeaponVirtualSoundData*))(Il2CppBase() + 0x458D4A0))(this);
	}
	template <typename T = bool> T IsHadSilencerWeaponPart() {
		return ((T (*)(WeaponVirtualSoundData*))(Il2CppBase() + 0x458D4A8))(this);
	}
	template <typename T = bool> T IsContinuousShotWeapon() {
		return ((T (*)(WeaponVirtualSoundData*))(Il2CppBase() + 0x458D74C))(this);
	}

};

}
