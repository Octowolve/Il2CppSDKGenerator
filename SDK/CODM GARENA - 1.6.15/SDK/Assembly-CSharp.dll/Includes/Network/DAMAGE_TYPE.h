#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class DAMAGETYPE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "DAMAGE_TYPE"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& DAMAGE_TYPE_BULLET() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& DAMAGE_TYPE_EXPLODE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& DAMAGE_TYPE_EMP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& DAMAGE_TYPE_HAND_TO_HAND() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& DAMAGE_TYPE_TRUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
