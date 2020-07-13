#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnEquipAttachmentcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UnEquipAttachment>c__AnonStorey2"));
	}

	template <typename T = int32_t> T& weaponActorID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(UnEquipAttachmentcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x1B0BB08))(this, s);
	}

};

}
