#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponPartExtendedMagsData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponPart_ExtendedMagsData"));
	}

	template <typename T = int32_t> T& ClipAmmoCountAdd() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& CarriedAmmoCountAdd() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& MaxAmmoCountAdd() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& ClipAmmoCountRate() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& CarriedAmmoCountRate() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& MaxAmmoCountRate() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& PVEClipAmmoCountAdd() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& PVECarriedAmmoCountAdd() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& PVEMaxAmmoCountAdd() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& PVEClipAmmoCountRate() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& PVECarriedAmmoCountRate() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& PVEMaxAmmoCountRate() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uintptr_t targetType, uintptr_t mask, uintptr_t index, uintptr_t interrupt) {
		return ((T (*)(WeaponPartExtendedMagsData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C501A4))(this, bytes, position, targetType, mask, index, interrupt);
	}

};

}
