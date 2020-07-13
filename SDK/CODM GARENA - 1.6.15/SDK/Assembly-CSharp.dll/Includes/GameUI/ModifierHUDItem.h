#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ModifierHUDItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ModifierHUDItem"));
	}

	template <typename T = uintptr_t> T& Image() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Label() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Desc() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetValue(int32_t modifierId) {
		return ((T (*)(ModifierHUDItem*, int32_t))(Il2CppBase() + 0x1FA4A78))(this, modifierId);
	}

};

}
