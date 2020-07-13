#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EquipAttachmentcAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<EquipAttachment>c__AnonStorey3"));
	}

	template <typename T = uintptr_t> T& findWeaponPart() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$2() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(EquipAttachmentcAnonStorey3*, uintptr_t))(Il2CppBase() + 0x1C49124))(this, s);
	}
	template <typename T = bool> T m__1(uintptr_t s) {
		return ((T (*)(EquipAttachmentcAnonStorey3*, uintptr_t))(Il2CppBase() + 0x1C49174))(this, s);
	}

};

}
