#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EquipAttachmentBagWeaponcAnonStorey6
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<EquipAttachmentBagWeapon>c__AnonStorey6"));
	}

	template <typename T = int32_t> T& attachmentActorID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& weaponActorID() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(EquipAttachmentBagWeaponcAnonStorey6*, uintptr_t))(Il2CppBase() + 0x24E1110))(this, s);
	}
	template <typename T = bool> T m__1(uintptr_t s) {
		return ((T (*)(EquipAttachmentBagWeaponcAnonStorey6*, uintptr_t))(Il2CppBase() + 0x24E1144))(this, s);
	}
	template <typename T = bool> T m__2(uintptr_t _item) {
		return ((T (*)(EquipAttachmentBagWeaponcAnonStorey6*, uintptr_t))(Il2CppBase() + 0x24E1198))(this, _item);
	}

};

}
