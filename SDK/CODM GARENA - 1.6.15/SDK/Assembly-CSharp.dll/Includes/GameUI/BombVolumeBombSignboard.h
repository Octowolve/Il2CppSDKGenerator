#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BombVolumeBombSignboard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BombVolumeBombSignboard"));
	}

	template <typename T = uintptr_t> T& BG() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& VolumeStateLabel() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppVector3> T& CarryTargetOffset() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& m_GameInfo() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_Game() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppVector3> T& m_AttackScreenPos() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppVector3> T& m_DroppedSignOffset() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& m_CurAttackLerpTime() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& m_TotalAttackLerpTime() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_SpriteNames() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_StatusText() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_BombStatus() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBombStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckVolumeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBoardGOPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_BombStatus() {
		return ((T (*)(BombVolumeBombSignboard*))(Il2CppBase() + 0x2D81EE8))(this);
	}
	template <typename T = void> T set_BombStatus(uintptr_t value) {
		return ((T (*)(BombVolumeBombSignboard*, uintptr_t))(Il2CppBase() + 0x2D81EF0))(this, value);
	}
	template <typename T = void> T CheckBombStatus() {
		return ((T (*)(BombVolumeBombSignboard*))(Il2CppBase() + 0x2D819F8))(this);
	}
	template <typename T = bool> T CheckVolumeInfo() {
		return ((T (*)(BombVolumeBombSignboard*))(Il2CppBase() + 0x2D820DC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BombVolumeBombSignboard*))(Il2CppBase() + 0x2D822D8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BombVolumeBombSignboard*))(Il2CppBase() + 0x2D82384))(this);
	}
	template <typename T = void> T UpdateBoardGOPos() {
		return ((T (*)(BombVolumeBombSignboard*))(Il2CppBase() + 0x2D82458))(this);
	}
	template <typename T = void> T ChangAlpha(float newAlpha) {
		return ((T (*)(BombVolumeBombSignboard*, float))(Il2CppBase() + 0x2D827CC))(this, newAlpha);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(BombVolumeBombSignboard*))(Il2CppBase() + 0x2D828BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ChangAlpha(float P0) {
		return ((T (*)(BombVolumeBombSignboard*, float))(Il2CppBase() + 0x2D828C4))(this, P0);
	}

};

}
