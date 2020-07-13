#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.FFAGame {

class FFAGameScoreViewController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.FFAGame", "FFAGameScoreViewController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLeadingStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FFAGameScoreViewController*))(Il2CppBase() + 0x401AE00))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(FFAGameScoreViewController*))(Il2CppBase() + 0x401AEC0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(FFAGameScoreViewController*))(Il2CppBase() + 0x401AF68))(this);
	}
	template <typename T = void> T PrepareData(uintptr_t scoreModel) {
		return ((T (*)(FFAGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x401B010))(this, scoreModel);
	}
	template <typename T = uintptr_t> T UpdateLeadingStatus(uintptr_t scoreModel) {
		return ((T (*)(FFAGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x401B26C))(this, scoreModel);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FFAGameScoreViewController*))(Il2CppBase() + 0x401B350))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(FFAGameScoreViewController*))(Il2CppBase() + 0x401B358))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(FFAGameScoreViewController*))(Il2CppBase() + 0x401B360))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PrepareData(uintptr_t P0) {
		return ((T (*)(FFAGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x401B368))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_UpdateLeadingStatus(uintptr_t P0) {
		return ((T (*)(FFAGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x401B370))(this, P0);
	}

};

}
