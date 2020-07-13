#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class VehicleData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "VehicleData"));
	}

	template <typename T = uintptr_t> T& m_AddVehicleData() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_Vehicle() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& isPrepareVehicle() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& m_CurDependPawn() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppVector3> static T& IrrelevantScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> static T& RelevantScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DependRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVehicleResourceLoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddInstanceObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetNetVehicleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOnAllPassengers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoGetOnVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelInstanceObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyIrrelevantObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawBaseData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = uintptr_t> T get_AddVehicleData() {
		return ((T (*)(VehicleData*))(Il2CppBase() + 0x35B1030))(this);
	}
	template <typename T = uintptr_t> T get_m_Info() {
		return ((T (*)(VehicleData*))(Il2CppBase() + 0x35B1038))(this);
	}
	template <typename T = uintptr_t> T get_vehicleInfo() {
		return ((T (*)(VehicleData*))(Il2CppBase() + 0x35B10F0))(this);
	}
	template <typename T = void> T OnAddVehicle(uintptr_t msg) {
		return ((T (*)(VehicleData*, uintptr_t))(Il2CppBase() + 0x35B10F4))(this, msg);
	}
	template <typename T = bool> T DependRelevant() {
		return ((T (*)(VehicleData*))(Il2CppBase() + 0x35B1F44))(this);
	}
	template <typename T = void> T OnVehicleResourceLoadComplete(int32_t assetID, uintptr_t CallBackData) {
		return ((T (*)(VehicleData*, int32_t, uintptr_t))(Il2CppBase() + 0x35B22D4))(this, assetID, CallBackData);
	}
	template <typename T = bool> T AddInstanceObj() {
		return ((T (*)(VehicleData*))(Il2CppBase() + 0x35B23B8))(this);
	}
	template <typename T = void> T ResetNetVehicleInfo() {
		return ((T (*)(VehicleData*))(Il2CppBase() + 0x35B1CC0))(this);
	}
	template <typename T = void> T GetOnAllPassengers() {
		return ((T (*)(VehicleData*))(Il2CppBase() + 0x35B16A8))(this);
	}
	template <typename T = uintptr_t> T AutoGetOnVehicle(uint32_t OwnerId) {
		return ((T (*)(VehicleData*, uint32_t))(Il2CppBase() + 0x35B29F0))(this, OwnerId);
	}
	template <typename T = bool> T DelInstanceObj() {
		return ((T (*)(VehicleData*))(Il2CppBase() + 0x35B2B14))(this);
	}
	template <typename T = bool> T DestroyIrrelevantObj() {
		return ((T (*)(VehicleData*))(Il2CppBase() + 0x35B2D4C))(this);
	}
	template <typename T = void> T UpdatePosition(float deltaTime) {
		return ((T (*)(VehicleData*, float))(Il2CppBase() + 0x35B2FAC))(this, deltaTime);
	}
	template <typename T = void> T ClearData() {
		return ((T (*)(VehicleData*))(Il2CppBase() + 0x35B34D8))(this);
	}
	template <typename T = void> T DrawBaseData() {
		return ((T (*)(VehicleData*))(Il2CppBase() + 0x35B35C4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_DependRelevant() {
		return ((T (*)(VehicleData*))(Il2CppBase() + 0x35B3C48))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_AddInstanceObj() {
		return ((T (*)(VehicleData*))(Il2CppBase() + 0x35B3C50))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_DelInstanceObj() {
		return ((T (*)(VehicleData*))(Il2CppBase() + 0x35B3C58))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_DestroyIrrelevantObj() {
		return ((T (*)(VehicleData*))(Il2CppBase() + 0x35B3C60))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdatePosition(float P0) {
		return ((T (*)(VehicleData*, float))(Il2CppBase() + 0x35B3C68))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ClearData() {
		return ((T (*)(VehicleData*))(Il2CppBase() + 0x35B3C70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DrawBaseData() {
		return ((T (*)(VehicleData*))(Il2CppBase() + 0x35B3C78))(this);
	}

};

}
