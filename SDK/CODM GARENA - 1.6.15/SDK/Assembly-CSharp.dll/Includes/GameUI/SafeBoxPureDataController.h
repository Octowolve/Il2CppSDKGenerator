#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SafeBoxPureDataController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SafeBoxPureDataController"));
	}

	template <typename T = uintptr_t> static T& s_instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& listViews() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_view() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& mbDisplaySFX() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisplaySFX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateLocked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SafeBoxPureDataController*))(Il2CppBase() + 0x446FEF4))(this);
	}
	template <typename T = uintptr_t> static T Instance(bool bForceRefresh) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x446FFC4))(0, bForceRefresh);
	}
	template <typename T = void> T ShowData(uintptr_t inputView) {
		return ((T (*)(SafeBoxPureDataController*, uintptr_t))(Il2CppBase() + 0x44702B0))(this, inputView);
	}
	template <typename T = bool> T get_IsDisplaySFX() {
		return ((T (*)(SafeBoxPureDataController*))(Il2CppBase() + 0x4470538))(this);
	}
	template <typename T = void> T DisplaySFX(bool bDisplay) {
		return ((T (*)(SafeBoxPureDataController*, bool))(Il2CppBase() + 0x4470540))(this, bDisplay);
	}
	template <typename T = void> T RefreshView(bool bEnableSFX) {
		return ((T (*)(SafeBoxPureDataController*, bool))(Il2CppBase() + 0x44707AC))(this, bEnableSFX);
	}
	template <typename T = void> T OnStateLocked() {
		return ((T (*)(SafeBoxPureDataController*))(Il2CppBase() + 0x4470984))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SafeBoxPureDataController*))(Il2CppBase() + 0x4470B20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DisplaySFX(bool P0) {
		return ((T (*)(SafeBoxPureDataController*, bool))(Il2CppBase() + 0x4470B24))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshView(bool P0) {
		return ((T (*)(SafeBoxPureDataController*, bool))(Il2CppBase() + 0x4470C48))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnStateLocked() {
		return ((T (*)(SafeBoxPureDataController*))(Il2CppBase() + 0x4470C4C))(this);
	}

};

}
