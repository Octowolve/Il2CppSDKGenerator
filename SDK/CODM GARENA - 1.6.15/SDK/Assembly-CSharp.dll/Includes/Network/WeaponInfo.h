#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class WeaponInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "WeaponInfo"));
	}

	template <typename T = uint32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = unsigned char> T& SlotIdx() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint16_t> T& Level() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = unsigned char> T& AttachmentCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Attachments() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = unsigned char> T& SkillCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Skills() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& CamoID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& ActorId() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = unsigned char> T& EffectCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Effects() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int16_t> T& AmmoClip() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int16_t> T& AmmoInMagzine() {
		return *(T*)((uintptr_t)this + 0x32);
	}
	template <typename T = int16_t> T& ClipNumBase() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = unsigned char> T& PapLevel() {
		return *(T*)((uintptr_t)this + 0x36);
	}
	template <typename T = uintptr_t> T& Decorations() {
		return *(T*)((uintptr_t)this + 0x38);
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
		return ((T (*)(WeaponInfo*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x43A888C))(this, bytes, position);
	}
	template <typename T = void> T Unserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(WeaponInfo*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x43A8D98))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x43A9584))(0, data, DataIndex);
	}

};

}
