#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class EEFFECTTYPE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "EEFFECT_TYPE"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eEFFECT_TYPE_DAMAGE_SHARE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eEFFECT_TYPE_GROUP_SHIELD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
