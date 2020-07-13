#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class S2CRESPICKUPITEM
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "S2C_RES_PICKUP_ITEM"));
	}

	template <typename T = int32_t> T& ActorId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ItemId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Result() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ClipNum() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& nAmmoInMagzine() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& SecondClipNum() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& SecondnAmmoInMagzine() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& DroppedItemID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& CurWeaponID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = unsigned char> T& PickUpItemSlotIdx() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = unsigned char> T& DropItemSlotIdx() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = unsigned char> T& CurWeaponSlotIdx() {
		return *(T*)((uintptr_t)this + 0x32);
	}
	template <typename T = unsigned char> T& PickUpItemAttachmentCount() {
		return *(T*)((uintptr_t)this + 0x33);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PickUpItemAttachments() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = unsigned char> T& PickUpItemSkillCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PickUpItemSkills() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = unsigned char> T& NeedSwitch() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& CamoID() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& ItemId1() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& ItemId2() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& WeaponLevel() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = unsigned char> T& bAuto() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& WeaponActorId() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = unsigned char> T& PapLevel() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& Decorations() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Unserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Unserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(S2CRESPICKUPITEM*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4E5CAFC))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4E5D0C8))(0, data, DataIndex);
	}
	template <typename T = void> T xLuaBaseProxy_Unserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1) {
		return ((T (*)(S2CRESPICKUPITEM*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4E5D20C))(this, P0, P1);
	}

};

}
