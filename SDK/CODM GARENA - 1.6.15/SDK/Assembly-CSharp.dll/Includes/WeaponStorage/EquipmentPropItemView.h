#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WeaponStorage {

class EquipmentPropItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WeaponStorage", "EquipmentPropItemView"));
	}

	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& NormalBg() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& SelectedBg() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ItemBtn() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EquipmentPropItemView*))(Il2CppBase() + 0x4C5B984))(this);
	}
	template <typename T = void> T SetStatus(bool isSelected) {
		return ((T (*)(EquipmentPropItemView*, bool))(Il2CppBase() + 0x4C5BA50))(this, isSelected);
	}
	template <typename T = void> T SetDefault() {
		return ((T (*)(EquipmentPropItemView*))(Il2CppBase() + 0x4C5BB30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(EquipmentPropItemView*))(Il2CppBase() + 0x4C5BC74))(this);
	}

};

}
