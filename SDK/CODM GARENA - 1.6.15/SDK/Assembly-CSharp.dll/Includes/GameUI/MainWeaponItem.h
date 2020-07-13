#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class MainWeaponItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "MainWeaponItem"));
	}

	template <typename T = uintptr_t> T& NameLabel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& WeaponIcon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AttachmentItems() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AttachmentNullItems() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& CurplayerInfo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RawUpdateItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T UpdateItem(uintptr_t playerInfo) {
		return ((T (*)(MainWeaponItem*, uintptr_t))(Il2CppBase() + 0x1F9ED80))(this, playerInfo);
	}
	template <typename T = void> T RawUpdateItem() {
		return ((T (*)(MainWeaponItem*))(Il2CppBase() + 0x1F9EE30))(this);
	}

};

}
