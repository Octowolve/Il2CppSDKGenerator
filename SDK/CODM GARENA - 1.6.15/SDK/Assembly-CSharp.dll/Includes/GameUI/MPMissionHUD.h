#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class MPMissionHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "MPMissionHUD"));
	}

	template <typename T = uintptr_t> T& bossMissionStart() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& currentHUD() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& bossPawns() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBossShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBossClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMissionStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMissionFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Lua_ShowBossComming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMissionWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHideHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(MPMissionHUD*))(Il2CppBase() + 0x1FA7EE4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(MPMissionHUD*))(Il2CppBase() + 0x1FA7F8C))(this);
	}
	template <typename T = void> T OnBossShow(uintptr_t bossPawn) {
		return ((T (*)(MPMissionHUD*, uintptr_t))(Il2CppBase() + 0x1FA8034))(this, bossPawn);
	}
	template <typename T = void> T OnBossClear(uintptr_t bossPawn) {
		return ((T (*)(MPMissionHUD*, uintptr_t))(Il2CppBase() + 0x1FA8114))(this, bossPawn);
	}
	template <typename T = void> T OnMissionStart() {
		return ((T (*)(MPMissionHUD*))(Il2CppBase() + 0x1FA81F4))(this);
	}
	template <typename T = void> T OnMissionFinish(uintptr_t result) {
		return ((T (*)(MPMissionHUD*, uintptr_t))(Il2CppBase() + 0x1FA828C))(this, result);
	}
	template <typename T = void> T Lua_ShowBossComming(float duration) {
		return ((T (*)(MPMissionHUD*, float))(Il2CppBase() + 0x1FA832C))(this, duration);
	}
	template <typename T = void> T ShowMissionWidget(uintptr_t widget, float fadeTime) {
		return ((T (*)(MPMissionHUD*, uintptr_t, float))(Il2CppBase() + 0x1FA83E0))(this, widget, fadeTime);
	}
	template <typename T = void> T OnHideHUD() {
		return ((T (*)(MPMissionHUD*))(Il2CppBase() + 0x1FA8574))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(MPMissionHUD*))(Il2CppBase() + 0x1FA86B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(MPMissionHUD*))(Il2CppBase() + 0x1FA86C0))(this);
	}

};

}
