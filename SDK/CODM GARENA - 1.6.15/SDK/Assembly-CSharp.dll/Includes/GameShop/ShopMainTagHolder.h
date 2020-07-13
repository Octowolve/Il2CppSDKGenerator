#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ShopMainTagHolder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ShopMainTagHolder"));
	}

	template <typename T = uintptr_t> T& toggle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& HLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& NLabel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T ConfigureText(Il2CppString* text) {
		return ((T (*)(ShopMainTagHolder*, Il2CppString*))(Il2CppBase() + 0x238A01C))(this, text);
	}

};

}
