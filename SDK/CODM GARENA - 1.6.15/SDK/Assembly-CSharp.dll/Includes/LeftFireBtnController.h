#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LeftFireBtnController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LeftFireBtnController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LeftFireBtnController*))(Il2CppBase() + 0x492E64C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LeftFireBtnController*))(Il2CppBase() + 0x492E72C))(this);
	}

};

}
