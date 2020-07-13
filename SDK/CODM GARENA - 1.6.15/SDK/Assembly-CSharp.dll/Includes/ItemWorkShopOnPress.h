#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemWorkShopOnPress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemWorkShopOnPress"));
	}

	template <typename T = uintptr_t> T& SpriteOnPress() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_IsPress() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnPress(bool press) {
		return ((T (*)(ItemWorkShopOnPress*, bool))(Il2CppBase() + 0x318C2A4))(this, press);
	}

};

}
