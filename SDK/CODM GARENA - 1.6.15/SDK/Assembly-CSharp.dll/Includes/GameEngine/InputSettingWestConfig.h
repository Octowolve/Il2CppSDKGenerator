#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class InputSettingWestConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "InputSettingWestConfig"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T ResetControl() {
		return ((T (*)(InputSettingWestConfig*))(Il2CppBase() + 0x245E308))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ResetControl() {
		return ((T (*)(InputSettingWestConfig*))(Il2CppBase() + 0x245E3B4))(this);
	}

};

}
