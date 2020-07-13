#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalMapControllerBROB
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalMapController_BR_OB"));
	}

	template <typename T = uintptr_t> T& m_MapView() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTacticalTeamPlayerLoginOrLogoutNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowMapMarksBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseMapMarksBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(TacticalMapControllerBROB*))(Il2CppBase() + 0x277CFB8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TacticalMapControllerBROB*))(Il2CppBase() + 0x277D05C))(this);
	}
	template <typename T = void> T OnShowView(uintptr_t inMsg) {
		return ((T (*)(TacticalMapControllerBROB*, uintptr_t))(Il2CppBase() + 0x277D164))(this, inMsg);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(TacticalMapControllerBROB*))(Il2CppBase() + 0x277D410))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(TacticalMapControllerBROB*))(Il2CppBase() + 0x277D630))(this);
	}
	template <typename T = void> T OnSliderChange() {
		return ((T (*)(TacticalMapControllerBROB*))(Il2CppBase() + 0x277D77C))(this);
	}
	template <typename T = void> T OnTacticalTeamPlayerLoginOrLogoutNotify() {
		return ((T (*)(TacticalMapControllerBROB*))(Il2CppBase() + 0x277D88C))(this);
	}
	template <typename T = void> T OnShowMapMarksBtnClick(uintptr_t obj) {
		return ((T (*)(TacticalMapControllerBROB*, uintptr_t))(Il2CppBase() + 0x277DA54))(this, obj);
	}
	template <typename T = void> T OnCloseMapMarksBtnClick(uintptr_t obj) {
		return ((T (*)(TacticalMapControllerBROB*, uintptr_t))(Il2CppBase() + 0x277DB70))(this, obj);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(TacticalMapControllerBROB*))(Il2CppBase() + 0x277DC8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalMapControllerBROB*))(Il2CppBase() + 0x277DC90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnShowView(uintptr_t P0) {
		return ((T (*)(TacticalMapControllerBROB*, uintptr_t))(Il2CppBase() + 0x277DC94))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(TacticalMapControllerBROB*))(Il2CppBase() + 0x277DC98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(TacticalMapControllerBROB*))(Il2CppBase() + 0x277DC9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnTacticalTeamPlayerLoginOrLogoutNotify() {
		return ((T (*)(TacticalMapControllerBROB*))(Il2CppBase() + 0x277DCA0))(this);
	}

};

}
