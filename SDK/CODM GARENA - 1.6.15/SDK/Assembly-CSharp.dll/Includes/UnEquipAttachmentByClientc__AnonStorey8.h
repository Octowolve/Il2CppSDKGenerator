#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnEquipAttachmentByClientcAnonStorey8
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UnEquipAttachmentByClient>c__AnonStorey8"));
	}

	template <typename T = uintptr_t> T& findWeaponPart() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$7() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(UnEquipAttachmentByClientcAnonStorey8*, uintptr_t))(Il2CppBase() + 0x1C4935C))(this, s);
	}
	template <typename T = void> T m__1() {
		return ((T (*)(UnEquipAttachmentByClientcAnonStorey8*))(Il2CppBase() + 0x1C493AC))(this);
	}

};

}
