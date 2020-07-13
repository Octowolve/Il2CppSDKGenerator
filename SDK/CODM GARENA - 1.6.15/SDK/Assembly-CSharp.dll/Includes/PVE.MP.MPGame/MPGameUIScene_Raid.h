#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP.MPGame {

class MPGameUISceneRaid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP.MPGame", "MPGameUIScene_Raid"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTaskHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T ShowTaskHUD() {
		return ((T (*)(MPGameUISceneRaid*))(Il2CppBase() + 0x46062B8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(MPGameUISceneRaid*))(Il2CppBase() + 0x4606358))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ShowTaskHUD() {
		return ((T (*)(MPGameUISceneRaid*))(Il2CppBase() + 0x4606588))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MPGameUISceneRaid*))(Il2CppBase() + 0x460658C))(this);
	}

};

}
