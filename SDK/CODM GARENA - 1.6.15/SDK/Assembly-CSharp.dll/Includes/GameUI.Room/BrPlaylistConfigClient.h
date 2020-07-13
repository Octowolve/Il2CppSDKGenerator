#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class BrPlaylistConfigClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "BrPlaylistConfigClient"));
	}

	template <typename T = Il2CppList<int32_t>*> T& UnlockConditionList() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& mapId() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& matchTeamType() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& enableSquad() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& enableDouble() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& enableSingle() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& ppMode() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& enableTpp() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& enableFpp() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& enableAutoFill() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableTeamType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultTeamType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnablePersonPerspective() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultPPMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableSelectAutoFill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T IsEnableTeamType(int32_t teamType) {
		return ((T (*)(BrPlaylistConfigClient*, int32_t))(Il2CppBase() + 0x2CCD6B4))(this, teamType);
	}
	template <typename T = bool> T GetDefaultTeamType(uintptr_t teamType) {
		return ((T (*)(BrPlaylistConfigClient*, uintptr_t))(Il2CppBase() + 0x2CCD794))(this, teamType);
	}
	template <typename T = bool> T IsEnablePersonPerspective(int32_t ppMode) {
		return ((T (*)(BrPlaylistConfigClient*, int32_t))(Il2CppBase() + 0x2CCD8B0))(this, ppMode);
	}
	template <typename T = bool> T GetDefaultPPMode(uintptr_t PPMode) {
		return ((T (*)(BrPlaylistConfigClient*, uintptr_t))(Il2CppBase() + 0x2CCD980))(this, PPMode);
	}
	template <typename T = bool> T IsEnableSelectAutoFill() {
		return ((T (*)(BrPlaylistConfigClient*))(Il2CppBase() + 0x2CCCC48))(this);
	}

};

}
