#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class XboxAndroidConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "XboxAndroidConfig"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseEscape() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T UseEscape() {
		return ((T (*)(XboxAndroidConfig*))(Il2CppBase() + 0x33CC2A8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_UseEscape() {
		return ((T (*)(XboxAndroidConfig*))(Il2CppBase() + 0x33CC348))(this);
	}

};

}
