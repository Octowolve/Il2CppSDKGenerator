#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BombVolumeSignboard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BombVolumeSignboard"));
	}

	template <typename T = uintptr_t> T& PointType() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& PointName() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& BG() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& VolumeStateLabel() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& ProgressBar() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ProgressBarMask() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& m_SpriteName_Defend() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& m_SpriteName_Target() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_GameInfo() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppVector3> T& m_ScreenPos_UsingItem() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& m_CurLerpTime_UsingItem() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& m_TotalLerpTime_UsingItem() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& m_UsingItem() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& m_TotalUsingTime() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& m_CurUsingTime() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UsingItemInVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelUsingItemInVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckGameInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateProgessBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBoardGOPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T UsingItemInVolume(float usingTime) {
		return ((T (*)(BombVolumeSignboard*, float))(Il2CppBase() + 0x2D829F0))(this, usingTime);
	}
	template <typename T = void> T CancelUsingItemInVolume() {
		return ((T (*)(BombVolumeSignboard*))(Il2CppBase() + 0x2D82C5C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BombVolumeSignboard*))(Il2CppBase() + 0x2D82EB4))(this);
	}
	template <typename T = bool> T CheckGameInfo() {
		return ((T (*)(BombVolumeSignboard*))(Il2CppBase() + 0x2D82F98))(this);
	}
	template <typename T = void> T UpdateProgessBar() {
		return ((T (*)(BombVolumeSignboard*))(Il2CppBase() + 0x2D83AE8))(this);
	}
	template <typename T = void> T UpdateBoardGOPos() {
		return ((T (*)(BombVolumeSignboard*))(Il2CppBase() + 0x2D83768))(this);
	}
	template <typename T = void> T UpdateVolume() {
		return ((T (*)(BombVolumeSignboard*))(Il2CppBase() + 0x2D830EC))(this);
	}
	template <typename T = void> T ChangAlpha(float newAlpha) {
		return ((T (*)(BombVolumeSignboard*, float))(Il2CppBase() + 0x2D83D24))(this, newAlpha);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(BombVolumeSignboard*))(Il2CppBase() + 0x2D83E14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ChangAlpha(float P0) {
		return ((T (*)(BombVolumeSignboard*, float))(Il2CppBase() + 0x2D83E1C))(this, P0);
	}

};

}
