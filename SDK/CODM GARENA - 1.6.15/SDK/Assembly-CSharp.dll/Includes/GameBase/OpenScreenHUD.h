#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class OpenScreenHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "OpenScreenHUD"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Hide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Show() {
		return ((T (*)(OpenScreenHUD*))(Il2CppBase() + 0x162380C))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(OpenScreenHUD*))(Il2CppBase() + 0x1623900))(this);
	}

};

}
