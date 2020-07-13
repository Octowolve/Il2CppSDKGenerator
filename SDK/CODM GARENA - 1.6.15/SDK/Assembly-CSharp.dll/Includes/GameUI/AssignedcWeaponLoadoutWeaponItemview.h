#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class AssignedcWeaponLoadoutWeaponItemview
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "AssignedcWeaponLoadoutWeaponItemview"));
	}

	template <typename T = uintptr_t> T& LayoutOrderNumberBasisLabel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& selectedTag() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& LayoutOrderNumberSelectedLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& LoadOutSelectBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& weaponBasis() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& attachs() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& squadLines() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetWeaponData(int32_t weaponId, int32_t layoutOrder) {
		return ((T (*)(AssignedcWeaponLoadoutWeaponItemview*, int32_t, int32_t))(Il2CppBase() + 0x2D639C8))(this, weaponId, layoutOrder);
	}
	template <typename T = void> T SetSelected(bool bSelected) {
		return ((T (*)(AssignedcWeaponLoadoutWeaponItemview*, bool))(Il2CppBase() + 0x2D63DB0))(this, bSelected);
	}

};

}
