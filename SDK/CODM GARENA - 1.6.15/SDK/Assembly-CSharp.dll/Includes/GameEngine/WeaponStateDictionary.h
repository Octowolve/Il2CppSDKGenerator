#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponStateDictionary
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponStateDictionary"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T AddState(uintptr_t inKey, uintptr_t inState) {
		return ((T (*)(WeaponStateDictionary*, uintptr_t, uintptr_t))(Il2CppBase() + 0x33BD3F8))(this, inKey, inState);
	}

};

}
