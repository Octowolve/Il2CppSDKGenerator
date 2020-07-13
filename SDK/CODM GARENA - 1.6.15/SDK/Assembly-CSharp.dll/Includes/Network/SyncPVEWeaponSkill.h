#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class SyncPVEWeaponSkill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "SyncPVEWeaponSkill"));
	}

	template <typename T = unsigned char> T& bWeaponSlotIdx() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& WeaponId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ActorId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = unsigned char> T& RightOrLeft() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = unsigned char> T& SkillCount() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SkillInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = unsigned char> T& StrengthenCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Strengthen() {
		return *(T*)((uintptr_t)this + 0x20);
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
		return ((T (*)(SyncPVEWeaponSkill*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4EBD8F8))(this, bytes, position);
	}
	template <typename T = void> T Unserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SyncPVEWeaponSkill*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4EBDB3C))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4EBDF1C))(0, data, DataIndex);
	}

};

}
