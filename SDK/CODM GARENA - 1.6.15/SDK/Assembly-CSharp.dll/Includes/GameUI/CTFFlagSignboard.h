#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CTFFlagSignboard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CTFFlagSignboard"));
	}

	template <typename T = uintptr_t> T& AlphaRoot() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& MineRoot() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& Mine_FlagOnEnemy() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& Mine_FlagAway() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& Mine_FlagBase() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& Mine_AwayProgesssBar() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& EnemyRoot() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& Enemy_FlagOnTeamMate() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& Enemy_FlagOnBase() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& Enemy_FlagAway() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& Enemy_AwayProgesssBar() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& m_Represend() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& m_RedRefreshDuration() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& m_RedRefreshAccSum() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppVector3> T& m_LastTargetPosition() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& m_NearDistance() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = bool> T& m_CheckNear() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppVector3> T& m_HeadPositionOffset() {
		return *(T*)((uintptr_t)this + 0x100);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetRepresend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshFlagInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshMineFlagSignBoardImmediately() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CTFFlagSignboard*))(Il2CppBase() + 0x3DFD7D0))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(CTFFlagSignboard*))(Il2CppBase() + 0x3DFD8DC))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(CTFFlagSignboard*))(Il2CppBase() + 0x3DFD8E4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CTFFlagSignboard*))(Il2CppBase() + 0x3DFD8F0))(this);
	}
	template <typename T = void> T SetRepresend(uintptr_t r) {
		return ((T (*)(CTFFlagSignboard*, uintptr_t))(Il2CppBase() + 0x3DFE948))(this, r);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CTFFlagSignboard*))(Il2CppBase() + 0x3DFEA04))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CTFFlagSignboard*))(Il2CppBase() + 0x3DFEB18))(this);
	}
	template <typename T = void> T RefreshFlagInfo() {
		return ((T (*)(CTFFlagSignboard*))(Il2CppBase() + 0x3DFD994))(this);
	}
	template <typename T = void> T RefreshMineFlagSignBoardImmediately(uintptr_t Msg) {
		return ((T (*)(CTFFlagSignboard*, uintptr_t))(Il2CppBase() + 0x3DFECD4))(this, Msg);
	}
	template <typename T = void> T HideAll() {
		return ((T (*)(CTFFlagSignboard*))(Il2CppBase() + 0x3DFEBD4))(this);
	}
	template <typename T = void> T ChangeAlpha(float newAlpha) {
		return ((T (*)(CTFFlagSignboard*, float))(Il2CppBase() + 0x3DFEF70))(this, newAlpha);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(CTFFlagSignboard*))(Il2CppBase() + 0x3DFF074))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CTFFlagSignboard*))(Il2CppBase() + 0x3DFF07C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CTFFlagSignboard*))(Il2CppBase() + 0x3DFF084))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeAlpha(float P0) {
		return ((T (*)(CTFFlagSignboard*, float))(Il2CppBase() + 0x3DFF08C))(this, P0);
	}

};

}
