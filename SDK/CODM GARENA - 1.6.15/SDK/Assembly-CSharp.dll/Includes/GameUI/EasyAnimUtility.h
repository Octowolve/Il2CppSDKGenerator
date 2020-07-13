#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class EasyAnimUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "EasyAnimUtility"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnimPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T GetAnimPlayer(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x46F55C8))(0, type);
	}

};

}
