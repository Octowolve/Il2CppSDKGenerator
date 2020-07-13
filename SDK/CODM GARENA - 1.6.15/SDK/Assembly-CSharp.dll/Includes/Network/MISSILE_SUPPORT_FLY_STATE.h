#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class MISSILESUPPORTFLYSTATE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "MISSILE_SUPPORT_FLY_STATE"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eMISSILE_SUPPORT_FLY_STATE_INITIAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eMISSILE_SUPPORT_FLY_STATE_LAUNCH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eMISSILE_SUPPORT_FLY_STATE_EXPLODE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
