#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TacticalCombat {

class TacticalCombatVolumeSignboard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TacticalCombat", "TacticalCombatVolumeSignboard"));
	}

	template <typename T = uintptr_t> T& VolumeViewItem() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& VolumeStateLabel() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& DirSprite() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppString*> static T& m_DirSpriteString_Blue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& m_DirSpriteString_Red() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& m_DirSpriteString_White() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> T& m_AttackScale() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppVector3> T& m_AttackScreenPos() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& m_CurAttackLerpTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& m_TotalAttackLerpTime() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_TCGameInfo() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBoardGOPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateStateLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDirSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_TCGameInfo() {
		return ((T (*)(TacticalCombatVolumeSignboard*))(Il2CppBase() + 0x3D87360))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TacticalCombatVolumeSignboard*))(Il2CppBase() + 0x3D8746C))(this);
	}
	template <typename T = void> T UpdateBoardGOPos() {
		return ((T (*)(TacticalCombatVolumeSignboard*))(Il2CppBase() + 0x3D8778C))(this);
	}
	template <typename T = void> T UpdateStateLabel() {
		return ((T (*)(TacticalCombatVolumeSignboard*))(Il2CppBase() + 0x3D8757C))(this);
	}
	template <typename T = void> T UpdateDirSprite() {
		return ((T (*)(TacticalCombatVolumeSignboard*))(Il2CppBase() + 0x3D87B80))(this);
	}
	template <typename T = void> T ChangAlpha(float newAlpha) {
		return ((T (*)(TacticalCombatVolumeSignboard*, float))(Il2CppBase() + 0x3D87F24))(this, newAlpha);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(TacticalCombatVolumeSignboard*))(Il2CppBase() + 0x3D8804C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ChangAlpha(float P0) {
		return ((T (*)(TacticalCombatVolumeSignboard*, float))(Il2CppBase() + 0x3D88054))(this, P0);
	}

};

}
