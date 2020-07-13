#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class WeaponBulletInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "WeaponBulletInfo"));
	}

	template <typename T = int32_t> T& WeaponId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = unsigned char> T& SlotIdx() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int16_t> T& AmmoClip() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = int16_t> T& AmmoInMagzine() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int16_t> T& ClibNumBase() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = unsigned char> T& SyncMode() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ActorId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Unserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Serialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(WeaponBulletInfo*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x43A7CF4))(this, bytes, position);
	}
	template <typename T = void> T Unserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(WeaponBulletInfo*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x43A7E98))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x43A8034))(0, data, DataIndex);
	}

};

}
