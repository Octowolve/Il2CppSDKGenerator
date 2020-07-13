#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP.MPGame {

class MPGameUISceneClassical
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP.MPGame", "MPGameUIScene_Classical"));
	}

	template <typename T = uintptr_t> T& m_EndlessProgressHUD() {
		return *(T*)((uintptr_t)this + 0x20C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_IsTutorialGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T ShowTaskHUD() {
		return ((T (*)(MPGameUISceneClassical*))(Il2CppBase() + 0x4605258))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(MPGameUISceneClassical*))(Il2CppBase() + 0x46052F8))(this);
	}
	template <typename T = bool> T IsTutorialGame() {
		return ((T (*)(MPGameUISceneClassical*))(Il2CppBase() + 0x460542C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ShowTaskHUD() {
		return ((T (*)(MPGameUISceneClassical*))(Il2CppBase() + 0x46054CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MPGameUISceneClassical*))(Il2CppBase() + 0x46054D4))(this);
	}

};

}
