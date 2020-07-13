#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LevelDesigner {

class LevelDesignGameUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LevelDesigner", "LevelDesignGameUIScene"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadZoneReconnectController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T LoadZoneReconnectController() {
		return ((T (*)(LevelDesignGameUIScene*))(Il2CppBase() + 0x4932090))(this);
	}
	template <typename T = void> T OnEnterGame(uintptr_t msg) {
		return ((T (*)(LevelDesignGameUIScene*, uintptr_t))(Il2CppBase() + 0x4932128))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_LoadZoneReconnectController() {
		return ((T (*)(LevelDesignGameUIScene*))(Il2CppBase() + 0x4932390))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnterGame(uintptr_t P0) {
		return ((T (*)(LevelDesignGameUIScene*, uintptr_t))(Il2CppBase() + 0x4932398))(this, P0);
	}

};

}
