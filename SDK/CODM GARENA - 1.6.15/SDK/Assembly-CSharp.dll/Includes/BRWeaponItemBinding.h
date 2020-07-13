#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRWeaponItemBinding
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRWeaponItemBinding"));
	}

	template <typename T = uintptr_t> T& FocusGo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& AmmoCountLabel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& CarriedAmmoCountLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Picture() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& WeaponBtn() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& AttachmengEffectGo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& AttachmengEffectSprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& InactiveLabelGo() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& CloseAttachmentEffectCoroutine() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Data() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_CloseAttachmentEffectCoroutine() {
		return ((T (*)(BRWeaponItemBinding*))(Il2CppBase() + 0x266276C))(this);
	}
	template <typename T = void> T set_CloseAttachmentEffectCoroutine(uintptr_t value) {
		return ((T (*)(BRWeaponItemBinding*, uintptr_t))(Il2CppBase() + 0x2662860))(this, value);
	}
	template <typename T = uintptr_t> T get_Data() {
		return ((T (*)(BRWeaponItemBinding*))(Il2CppBase() + 0x2661E98))(this);
	}
	template <typename T = void> T set_Data(uintptr_t value) {
		return ((T (*)(BRWeaponItemBinding*, uintptr_t))(Il2CppBase() + 0x2661CC4))(this, value);
	}

};

}
