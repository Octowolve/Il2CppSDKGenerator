#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutEquipmentView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutEquipmentView"));
	}

	template <typename T = uintptr_t> T& ItemRootWidget() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& ItemScrollView() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& EquipBtn() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& TakeOffBtn() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& GotoBtn() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& WeaponDetailTemplate() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& TabGrid() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& ColorTab() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& LethalTab() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& TacticalTab() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& MagnifyBtn() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& ContentWidget() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& WeCommunityBtn() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& BtnDownloadAsset() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAllTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFilterView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T ResetAllTab() {
		return ((T (*)(LoadoutEquipmentView*))(Il2CppBase() + 0x1A2929C))(this);
	}
	template <typename T = void> T ShowTab(uintptr_t posType) {
		return ((T (*)(LoadoutEquipmentView*, uintptr_t))(Il2CppBase() + 0x1A298FC))(this, posType);
	}
	template <typename T = void> T ShowFilterView() {
		return ((T (*)(LoadoutEquipmentView*))(Il2CppBase() + 0x1A29A3C))(this);
	}
	template <typename T = bool> static T ShowFilterViewm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A2CE18))(0, it);
	}
	template <typename T = bool> static T ShowFilterViewm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A2CF18))(0, it);
	}
	template <typename T = bool> static T ShowFilterViewm__2(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A2D018))(0, it);
	}

};

}
