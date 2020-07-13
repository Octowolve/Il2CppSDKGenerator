#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LevelDesigner {

class BRLevelDesignGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LevelDesigner", "BRLevelDesignGame"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGameInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T InitGameInfo() {
		return ((T (*)(BRLevelDesignGame*))(Il2CppBase() + 0x4930818))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitGameInfo() {
		return ((T (*)(BRLevelDesignGame*))(Il2CppBase() + 0x49308E4))(this);
	}

};

}
