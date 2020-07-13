#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WeaponStorage {

class EquipmentPropertyView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WeaponStorage", "EquipmentPropertyView"));
	}

	template <typename T = uintptr_t> T& Grid() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& BG() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ZoomBtn() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& ZoomIn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ZoomOut() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& FadeInTarget() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowZoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeInView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetUIActive(uintptr_t obj, bool isActive) {
		return ((T (*)(EquipmentPropertyView*, uintptr_t, bool))(Il2CppBase() + 0x4C5B104))(this, obj, isActive);
	}
	template <typename T = void> T ShowZoom(bool zoom) {
		return ((T (*)(EquipmentPropertyView*, bool))(Il2CppBase() + 0x4C5B390))(this, zoom);
	}
	template <typename T = void> T FadeInView() {
		return ((T (*)(EquipmentPropertyView*))(Il2CppBase() + 0x4C5B71C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetUIActive(uintptr_t P0, bool P1) {
		return ((T (*)(EquipmentPropertyView*, uintptr_t, bool))(Il2CppBase() + 0x4C5B8D8))(this, P0, P1);
	}

};

}
