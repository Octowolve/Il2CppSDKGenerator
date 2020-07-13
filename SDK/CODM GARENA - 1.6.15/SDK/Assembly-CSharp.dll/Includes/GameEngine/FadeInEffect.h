#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class FadeInEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "FadeInEffect"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Start() {
		return ((T (*)(FadeInEffect*))(Il2CppBase() + 0x51BEB44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(FadeInEffect*))(Il2CppBase() + 0x51BEBF0))(this);
	}

};

}
