#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LevelDesigner {

class LevelDesignGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LevelDesigner", "LevelDesignGame"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGameInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T InitGameInfo() {
		return ((T (*)(LevelDesignGame*))(Il2CppBase() + 0x4931DB8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitGameInfo() {
		return ((T (*)(LevelDesignGame*))(Il2CppBase() + 0x4931E84))(this);
	}

};

}
