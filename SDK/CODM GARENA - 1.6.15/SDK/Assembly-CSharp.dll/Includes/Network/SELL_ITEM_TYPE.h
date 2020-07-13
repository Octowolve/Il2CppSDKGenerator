#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class SELLITEMTYPE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "SELL_ITEM_TYPE"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eSELL_ITEM_TYPE_WEAPON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eSELL_ITEM_TYPE_HP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eSELL_ITEM_TYPE_BULLET() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eSELL_ITEM_TYPE_EXP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eSELL_ITEM_TYPE_PERK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eSELL_ITEM_TYPE_BUFF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
