#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LuaHitActorInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LuaHitActorInfo"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T set_Health(float value) {
		return ((T (*)(LuaHitActorInfo*, float))(Il2CppBase() + 0x4A91C54))(this, value);
	}

};

}
