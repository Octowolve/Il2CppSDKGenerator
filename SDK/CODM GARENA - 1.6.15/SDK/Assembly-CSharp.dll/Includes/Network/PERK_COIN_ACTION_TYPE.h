#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class PERKCOINACTIONTYPE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "PERK_COIN_ACTION_TYPE"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& ePERK_COIN_ACTION_TYPE_BUY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ePERK_COIN_ACTION_TYPE_PICKUP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ePERK_COIN_ACTION_TYPE_DROP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ePERK_COIN_ACTION_TYPE_USE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
