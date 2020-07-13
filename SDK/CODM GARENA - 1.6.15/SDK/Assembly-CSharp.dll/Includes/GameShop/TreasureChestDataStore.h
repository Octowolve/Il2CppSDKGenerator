#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class TreasureChestDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "TreasureChestDataStore"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T ReLogin() {
		return ((T (*)(TreasureChestDataStore*))(Il2CppBase() + 0x2D5F68C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(TreasureChestDataStore*))(Il2CppBase() + 0x2D5F734))(this);
	}

};

}
