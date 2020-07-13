#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class VehicleDroneController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "VehicleDroneController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_ShowFlyOutOfRangeTipsTimer() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_LastCastSkillTime() {
		return *(T*)((uintptr_t)this + 0x48);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyHP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyElectricity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifySpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSkillCountChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlyOutOfRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFlyOutOfRangeTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSkillBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyLocalVehicleHurt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNewGuideInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = uintptr_t> T get_mUIBanClickType() {
		return ((T (*)(VehicleDroneController*))(Il2CppBase() + 0x3D960FC))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(VehicleDroneController*))(Il2CppBase() + 0x3D96108))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(VehicleDroneController*))(Il2CppBase() + 0x3D961AC))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(VehicleDroneController*))(Il2CppBase() + 0x3D963C8))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(VehicleDroneController*))(Il2CppBase() + 0x3D966F0))(this);
	}
	template <typename T = bool> T OnGamepadSkill() {
		return ((T (*)(VehicleDroneController*))(Il2CppBase() + 0x3D967B0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(VehicleDroneController*))(Il2CppBase() + 0x3D969F4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(VehicleDroneController*))(Il2CppBase() + 0x3D96DB4))(this);
	}
	template <typename T = void> T OnNotifyHP(uintptr_t msg) {
		return ((T (*)(VehicleDroneController*, uintptr_t))(Il2CppBase() + 0x3D97010))(this, msg);
	}
	template <typename T = void> T OnNotifyElectricity(uintptr_t msg) {
		return ((T (*)(VehicleDroneController*, uintptr_t))(Il2CppBase() + 0x3D97380))(this, msg);
	}
	template <typename T = void> T OnNotifySpeed(uintptr_t msg) {
		return ((T (*)(VehicleDroneController*, uintptr_t))(Il2CppBase() + 0x3D97868))(this, msg);
	}
	template <typename T = void> T OnSkillCountChanged(uintptr_t msg) {
		return ((T (*)(VehicleDroneController*, uintptr_t))(Il2CppBase() + 0x3D97B34))(this, msg);
	}
	template <typename T = void> T OnFlyOutOfRange(uintptr_t msg) {
		return ((T (*)(VehicleDroneController*, uintptr_t))(Il2CppBase() + 0x3D97F70))(this, msg);
	}
	template <typename T = void> T ShowFlyOutOfRangeTips() {
		return ((T (*)(VehicleDroneController*))(Il2CppBase() + 0x3D9815C))(this);
	}
	template <typename T = void> T OnShowTips(uintptr_t msg) {
		return ((T (*)(VehicleDroneController*, uintptr_t))(Il2CppBase() + 0x3D9835C))(this, msg);
	}
	template <typename T = void> T OnSkillBtnClick() {
		return ((T (*)(VehicleDroneController*))(Il2CppBase() + 0x3D96858))(this);
	}
	template <typename T = void> T SetOwner(uintptr_t owner) {
		return ((T (*)(VehicleDroneController*, uintptr_t))(Il2CppBase() + 0x3D985C4))(this, owner);
	}
	template <typename T = void> T NotifyLocalVehicleHurt(uintptr_t info) {
		return ((T (*)(VehicleDroneController*, uintptr_t))(Il2CppBase() + 0x3D98770))(this, info);
	}
	template <typename T = uintptr_t> T GetNewGuideInterface() {
		return ((T (*)(VehicleDroneController*))(Il2CppBase() + 0x3D98A64))(this);
	}
	template <typename T = void> T Initm__0() {
		return ((T (*)(VehicleDroneController*))(Il2CppBase() + 0x3D98B04))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(VehicleDroneController*))(Il2CppBase() + 0x3D98D28))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(VehicleDroneController*))(Il2CppBase() + 0x3D98D30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(VehicleDroneController*))(Il2CppBase() + 0x3D98D38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(VehicleDroneController*))(Il2CppBase() + 0x3D98D40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(VehicleDroneController*))(Il2CppBase() + 0x3D98D48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(VehicleDroneController*))(Il2CppBase() + 0x3D98D50))(this);
	}

};

}
