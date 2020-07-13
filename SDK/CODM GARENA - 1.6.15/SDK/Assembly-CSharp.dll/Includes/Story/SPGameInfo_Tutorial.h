#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class SPGameInfoTutorial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "SPGameInfo_Tutorial"));
	}

	template <typename T = uintptr_t> T& m_TimeRecorder() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPVEGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitScoreStreakDataList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultStartSpot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T get_CanAutoPickUpWeapon() {
		return ((T (*)(SPGameInfoTutorial*))(Il2CppBase() + 0x3F149FC))(this);
	}
	template <typename T = bool> T get_CanPauseGame() {
		return ((T (*)(SPGameInfoTutorial*))(Il2CppBase() + 0x3F14A04))(this);
	}
	template <typename T = bool> T IsPVEGame() {
		return ((T (*)(SPGameInfoTutorial*))(Il2CppBase() + 0x3F14A0C))(this);
	}
	template <typename T = uintptr_t> T get_TimeRecorder() {
		return ((T (*)(SPGameInfoTutorial*))(Il2CppBase() + 0x3F14AAC))(this);
	}
	template <typename T = void> T OnStartMatch() {
		return ((T (*)(SPGameInfoTutorial*))(Il2CppBase() + 0x3F14AB4))(this);
	}
	template <typename T = void> T OnEndMatch() {
		return ((T (*)(SPGameInfoTutorial*))(Il2CppBase() + 0x3F14BC4))(this);
	}
	template <typename T = void> T InitScoreStreakDataList() {
		return ((T (*)(SPGameInfoTutorial*))(Il2CppBase() + 0x3F14D10))(this);
	}
	template <typename T = void> T GetDefaultStartSpot(uintptr_t pos, uintptr_t rot) {
		return ((T (*)(SPGameInfoTutorial*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F14E9C))(this, pos, rot);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(SPGameInfoTutorial*, float))(Il2CppBase() + 0x3F15030))(this, deltaTime);
	}
	template <typename T = bool> T xLuaBaseProxy_IsPVEGame() {
		return ((T (*)(SPGameInfoTutorial*))(Il2CppBase() + 0x3F15284))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStartMatch() {
		return ((T (*)(SPGameInfoTutorial*))(Il2CppBase() + 0x3F1528C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEndMatch() {
		return ((T (*)(SPGameInfoTutorial*))(Il2CppBase() + 0x3F15290))(this);
	}
	template <typename T = void> T xLuaBaseProxy_GetDefaultStartSpot(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(SPGameInfoTutorial*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F15294))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SPGameInfoTutorial*, float))(Il2CppBase() + 0x3F1529C))(this, P0);
	}

};

}
