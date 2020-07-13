#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class InventoryInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "InventoryInfo"));
	}

	template <typename T = int32_t> T& ActorID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ItemLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = unsigned char> T& Slot() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& WeaponPartInfoList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& CrossHairID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& SkinID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& IsUltWeapon() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& IsUltWeaponFireCostEnergy() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = int16_t> T& AmmoClip() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = int16_t> T& AmmoInMagzine() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int16_t> T& ClibNumBase() {
		return *(T*)((uintptr_t)this + 0x2A);
	}
	template <typename T = int32_t> T& PapLevel() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uint64_t>*> T& AttachmentIDList() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}


};

}
