#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalLocalPawnFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalLocalPawnFactory"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTacticalLocalPawnManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T GetTacticalLocalPawnManager(uintptr_t tacticalTopView) {
		return ((T (*)(TacticalLocalPawnFactory*, uintptr_t))(Il2CppBase() + 0x30D29CC))(this, tacticalTopView);
	}

};

}
