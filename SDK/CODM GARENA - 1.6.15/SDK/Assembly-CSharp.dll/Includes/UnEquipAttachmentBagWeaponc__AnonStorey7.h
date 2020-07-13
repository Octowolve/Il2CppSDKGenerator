#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnEquipAttachmentBagWeaponcAnonStorey7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UnEquipAttachmentBagWeapon>c__AnonStorey7"));
	}

	template <typename T = int32_t> T& attachmentActorID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(UnEquipAttachmentBagWeaponcAnonStorey7*, uintptr_t))(Il2CppBase() + 0x24E1494))(this, s);
	}

};

}
