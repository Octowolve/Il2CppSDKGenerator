#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ShopItemRenewList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ShopItemRenewList"));
	}

	template <typename T = Il2CppList<void*>*> T& mDataList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckReplaceAndAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HeapTop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = int32_t> T get_Count() {
		return ((T (*)(ShopItemRenewList*))(Il2CppBase() + 0x235F940))(this);
	}
	template <typename T = void> T CheckReplaceAndAdd(uint32_t shopid, uint32_t renewTime) {
		return ((T (*)(ShopItemRenewList*, uint32_t, uint32_t))(Il2CppBase() + 0x235FE04))(this, shopid, renewTime);
	}
	template <typename T = void> T Pop() {
		return ((T (*)(ShopItemRenewList*))(Il2CppBase() + 0x235FB2C))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ShopItemRenewList*))(Il2CppBase() + 0x2360410))(this);
	}
	template <typename T = void*> T HeapTop() {
		return ((T (*)(ShopItemRenewList*))(Il2CppBase() + 0x235F9D8))(this);
	}

};

}
