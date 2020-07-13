#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class WingsuitComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "WingsuitComponent"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& Trails() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& LeftEffect() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& RightEffect() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& AttachEffectSocket() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_LastTrailLerpRate() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& NeedShowTrail() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppArray<uintptr_t>*>*> T& m_BackupMaterials() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_AttachEffect() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTrail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAllTrails() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTrailEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTrailEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTrailEffectAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableDirControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeTrailMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoverMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T ShowTrail() {
		return ((T (*)(WingsuitComponent*))(Il2CppBase() + 0x35B9AF4))(this);
	}
	template <typename T = void> T ResetAllTrails() {
		return ((T (*)(WingsuitComponent*))(Il2CppBase() + 0x35B9B9C))(this);
	}
	template <typename T = void> T ShowTrailEffect(bool show) {
		return ((T (*)(WingsuitComponent*, bool))(Il2CppBase() + 0x35B7490))(this, show);
	}
	template <typename T = void> T ClearTrailEffect() {
		return ((T (*)(WingsuitComponent*))(Il2CppBase() + 0x35B80B8))(this);
	}
	template <typename T = void> T SetTrailEffectAlpha(float lerpRate) {
		return ((T (*)(WingsuitComponent*, float))(Il2CppBase() + 0x35B7DD0))(this, lerpRate);
	}
	template <typename T = void> T EnableDirControl(bool isLobby) {
		return ((T (*)(WingsuitComponent*, bool))(Il2CppBase() + 0x35B56C8))(this, isLobby);
	}
	template <typename T = void> T ChangeTrailMaterial(uintptr_t assetID) {
		return ((T (*)(WingsuitComponent*, uintptr_t))(Il2CppBase() + 0x35B589C))(this, assetID);
	}
	template <typename T = void> T RecoverMaterial() {
		return ((T (*)(WingsuitComponent*))(Il2CppBase() + 0x35B779C))(this);
	}
	template <typename T = void> T AttachEffect(uintptr_t assetID) {
		return ((T (*)(WingsuitComponent*, uintptr_t))(Il2CppBase() + 0x35B5BE0))(this, assetID);
	}
	template <typename T = void> T RemoveEffect() {
		return ((T (*)(WingsuitComponent*))(Il2CppBase() + 0x35B7644))(this);
	}

};

}
