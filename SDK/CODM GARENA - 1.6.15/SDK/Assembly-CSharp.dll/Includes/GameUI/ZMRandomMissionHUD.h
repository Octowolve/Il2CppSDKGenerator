#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ZMRandomMissionHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ZMRandomMissionHUD"));
	}

	template <typename T = uintptr_t> T& missionDescLabel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& limitProgress() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& m_CachelimitCount() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& m_CachelimitDesc() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& missionSprite() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& currentLimitType() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& currentLimitStartValue() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppString*> T& m_CacheMissionDesc() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& m_CacheTotalProgress() {
		return *(T*)((uintptr_t)this + 0x9C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnMissionStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMissionEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMissionProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMissionProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ZMRandomMissionHUD*))(Il2CppBase() + 0x2A609AC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ZMRandomMissionHUD*))(Il2CppBase() + 0x2A60B48))(this);
	}
	template <typename T = void> T OnMissionStart(uintptr_t Msg) {
		return ((T (*)(ZMRandomMissionHUD*, uintptr_t))(Il2CppBase() + 0x2A60C18))(this, Msg);
	}
	template <typename T = void> T OnMissionEnd(uintptr_t Msg) {
		return ((T (*)(ZMRandomMissionHUD*, uintptr_t))(Il2CppBase() + 0x2A612AC))(this, Msg);
	}
	template <typename T = void> T OnMissionProgress(uintptr_t Msg) {
		return ((T (*)(ZMRandomMissionHUD*, uintptr_t))(Il2CppBase() + 0x2A613D0))(this, Msg);
	}
	template <typename T = void> T SetMissionProgress(uint32_t currentProgress) {
		return ((T (*)(ZMRandomMissionHUD*, uint32_t))(Il2CppBase() + 0x2A6111C))(this, currentProgress);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(ZMRandomMissionHUD*, float))(Il2CppBase() + 0x2A614E4))(this, dt);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(ZMRandomMissionHUD*))(Il2CppBase() + 0x2A61810))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ZMRandomMissionHUD*))(Il2CppBase() + 0x2A61818))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ZMRandomMissionHUD*))(Il2CppBase() + 0x2A61820))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(ZMRandomMissionHUD*, float))(Il2CppBase() + 0x2A61828))(this, P0);
	}

};

}
