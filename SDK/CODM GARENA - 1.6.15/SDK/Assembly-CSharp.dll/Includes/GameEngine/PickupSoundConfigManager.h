#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PickupSoundConfigManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PickupSoundConfigManager"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SearchConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T SearchConfig(int32_t AsestID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1D99178))(0, AsestID);
	}

};

}
