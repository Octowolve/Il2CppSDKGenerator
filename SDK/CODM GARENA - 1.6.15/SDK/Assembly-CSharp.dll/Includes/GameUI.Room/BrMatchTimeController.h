#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class BrMatchTimeController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "BrMatchTimeController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_BrDS() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureMapInfoMatchBefore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureMapInfoMatchJoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureMapInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMatchFindTeamMate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T get_BrDS() {
		return ((T (*)(BrMatchTimeController*))(Il2CppBase() + 0x2CCC024))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BrMatchTimeController*))(Il2CppBase() + 0x2CCC0D4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BrMatchTimeController*))(Il2CppBase() + 0x2CCC1E0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BrMatchTimeController*))(Il2CppBase() + 0x2CCC284))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BrMatchTimeController*))(Il2CppBase() + 0x2CCC3AC))(this);
	}
	template <typename T = void> T ConfigureMapInfoMatchBefore() {
		return ((T (*)(BrMatchTimeController*))(Il2CppBase() + 0x2CCC468))(this);
	}
	template <typename T = void> T ConfigureMapInfoMatchJoin() {
		return ((T (*)(BrMatchTimeController*))(Il2CppBase() + 0x2CCC824))(this);
	}
	template <typename T = void> T ConfigureMapInfo(int32_t brPlaylistId, int32_t mapId) {
		return ((T (*)(BrMatchTimeController*, int32_t, int32_t))(Il2CppBase() + 0x2CCC53C))(this, brPlaylistId, mapId);
	}
	template <typename T = void> T OnMatchFindTeamMate(uintptr_t Msg) {
		return ((T (*)(BrMatchTimeController*, uintptr_t))(Il2CppBase() + 0x2CCC8E8))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BrMatchTimeController*))(Il2CppBase() + 0x2CCD0F0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BrMatchTimeController*))(Il2CppBase() + 0x2CCD0F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BrMatchTimeController*))(Il2CppBase() + 0x2CCD100))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BrMatchTimeController*))(Il2CppBase() + 0x2CCD108))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ConfigureMapInfoMatchBefore() {
		return ((T (*)(BrMatchTimeController*))(Il2CppBase() + 0x2CCD110))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ConfigureMapInfoMatchJoin() {
		return ((T (*)(BrMatchTimeController*))(Il2CppBase() + 0x2CCD118))(this);
	}

};

}
