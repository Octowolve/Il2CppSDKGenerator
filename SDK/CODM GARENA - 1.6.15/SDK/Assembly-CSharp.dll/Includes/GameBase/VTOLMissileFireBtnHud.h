#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class VTOLMissileFireBtnHud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "VTOLMissileFireBtnHud"));
	}

	template <typename T = uintptr_t> T& m_MissileFireBtn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_DisableMask() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_MissileIcon() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uint32_t> T& m_VTOLActorID() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& m_IsInBtnClickCD() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& m_IsInMissileFireCD() {
		return *(T*)((uintptr_t)this + 0x8D);
	}
	template <typename T = float> T& m_CDTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& m_CDStartTime() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_TimerModule() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMissileFireBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelaySetFireBtnCD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVTOLMissileCDState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(VTOLMissileFireBtnHud*))(Il2CppBase() + 0x1BE9E5C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(VTOLMissileFireBtnHud*))(Il2CppBase() + 0x1BE9F70))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(VTOLMissileFireBtnHud*))(Il2CppBase() + 0x1BEA13C))(this);
	}
	template <typename T = void> T Init(uint32_t VTOLActorID) {
		return ((T (*)(VTOLMissileFireBtnHud*, uint32_t))(Il2CppBase() + 0x1BEA204))(this, VTOLActorID);
	}
	template <typename T = void> T ForceRegisterDelegates() {
		return ((T (*)(VTOLMissileFireBtnHud*))(Il2CppBase() + 0x1BEA424))(this);
	}
	template <typename T = bool> T OnGamepadFire() {
		return ((T (*)(VTOLMissileFireBtnHud*))(Il2CppBase() + 0x1BEA4BC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(VTOLMissileFireBtnHud*))(Il2CppBase() + 0x1BEA874))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(VTOLMissileFireBtnHud*))(Il2CppBase() + 0x1BEAB38))(this);
	}
	template <typename T = void> T OnMissileFireBtnClick() {
		return ((T (*)(VTOLMissileFireBtnHud*))(Il2CppBase() + 0x1BEA564))(this);
	}
	template <typename T = void> T DelaySetFireBtnCD() {
		return ((T (*)(VTOLMissileFireBtnHud*))(Il2CppBase() + 0x1BEB0CC))(this);
	}
	template <typename T = void> T OnVTOLMissileCDState(uintptr_t msg) {
		return ((T (*)(VTOLMissileFireBtnHud*, uintptr_t))(Il2CppBase() + 0x1BEB1DC))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(VTOLMissileFireBtnHud*))(Il2CppBase() + 0x1BEB4F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(VTOLMissileFireBtnHud*))(Il2CppBase() + 0x1BEB4F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ForceRegisterDelegates() {
		return ((T (*)(VTOLMissileFireBtnHud*))(Il2CppBase() + 0x1BEB500))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(VTOLMissileFireBtnHud*))(Il2CppBase() + 0x1BEB508))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(VTOLMissileFireBtnHud*))(Il2CppBase() + 0x1BEB510))(this);
	}

};

}
