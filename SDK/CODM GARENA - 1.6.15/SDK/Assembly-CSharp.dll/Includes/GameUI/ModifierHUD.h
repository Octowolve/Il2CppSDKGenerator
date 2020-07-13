#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ModifierHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ModifierHUD"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& ModifierHUDItems() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ModifierItemTemplate() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Grid() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& Round() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetModifier() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideModifier() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetModifier() {
		return ((T (*)(ModifierHUD*))(Il2CppBase() + 0x1FA41B0))(this);
	}
	template <typename T = uintptr_t> T HideModifier() {
		return ((T (*)(ModifierHUD*))(Il2CppBase() + 0x1FA4C50))(this);
	}

};

}
