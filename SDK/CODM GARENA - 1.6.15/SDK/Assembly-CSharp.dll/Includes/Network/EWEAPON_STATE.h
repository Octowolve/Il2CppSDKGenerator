#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class EWEAPONSTATE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "EWEAPON_STATE"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eWEAPON_STATE_NORMAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eWEAPON_STATE_AMMOFREE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eWEAPON_STATE_NODAMAGE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
