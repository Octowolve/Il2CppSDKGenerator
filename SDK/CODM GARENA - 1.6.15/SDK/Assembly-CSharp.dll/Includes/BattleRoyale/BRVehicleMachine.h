#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRVehicleMachine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRVehicleMachine"));
	}

	template <typename T = uintptr_t> T& PreparingText() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& EffShowDuration() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& m_LastShowEffItemId() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBirthEffectAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShowVehicleAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoShowChooseItemObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadAssetEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoHideChooseItemObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCdState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowShowPreparingText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPreparingText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCountDownStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCountDownEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpawnVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateChoseState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCancelState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateConfirmState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryShowSpawnVehicleEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = Il2CppString*> static T GetName(int32_t vehicleID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2650808))(0, vehicleID);
	}
	template <typename T = int32_t> T GetBirthEffectAssetId(int32_t vehicleID) {
		return ((T (*)(BRVehicleMachine*, int32_t))(Il2CppBase() + 0x26509E0))(this, vehicleID);
	}
	template <typename T = int32_t> T GetShowVehicleAssetId(int32_t vehicleID) {
		return ((T (*)(BRVehicleMachine*, int32_t))(Il2CppBase() + 0x2650ABC))(this, vehicleID);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BRVehicleMachine*))(Il2CppBase() + 0x2650B98))(this);
	}
	template <typename T = void> T DoShowChooseItemObj() {
		return ((T (*)(BRVehicleMachine*))(Il2CppBase() + 0x2650E70))(this);
	}
	template <typename T = void> T OnLoadAssetEnd(int32_t assetId, uintptr_t arg) {
		return ((T (*)(BRVehicleMachine*, int32_t, uintptr_t))(Il2CppBase() + 0x265105C))(this, assetId, arg);
	}
	template <typename T = void> T DoHideChooseItemObj() {
		return ((T (*)(BRVehicleMachine*))(Il2CppBase() + 0x265129C))(this);
	}
	template <typename T = void> T ClearAsset() {
		return ((T (*)(BRVehicleMachine*))(Il2CppBase() + 0x2650CF4))(this);
	}
	template <typename T = void> T OnOpenAni() {
		return ((T (*)(BRVehicleMachine*))(Il2CppBase() + 0x2651340))(this);
	}
	template <typename T = void> T OnCloseAni() {
		return ((T (*)(BRVehicleMachine*))(Il2CppBase() + 0x26513D8))(this);
	}
	template <typename T = void> T UpdateCdState() {
		return ((T (*)(BRVehicleMachine*))(Il2CppBase() + 0x2651470))(this);
	}
	template <typename T = bool> T IsShowShowPreparingText() {
		return ((T (*)(BRVehicleMachine*))(Il2CppBase() + 0x2651534))(this);
	}
	template <typename T = void> T ShowPreparingText() {
		return ((T (*)(BRVehicleMachine*))(Il2CppBase() + 0x2651614))(this);
	}
	template <typename T = void> T OnCountDownStart(float cd) {
		return ((T (*)(BRVehicleMachine*, float))(Il2CppBase() + 0x2651728))(this, cd);
	}
	template <typename T = void> T OnCountDownEnd() {
		return ((T (*)(BRVehicleMachine*))(Il2CppBase() + 0x265182C))(this);
	}
	template <typename T = void> T OnSpawnVehicle(uint32_t actorID, Il2CppVector3 SpawnLocation, Il2CppQuaternion SpawnRotation) {
		return ((T (*)(BRVehicleMachine*, uint32_t, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x2651924))(this, actorID, SpawnLocation, SpawnRotation);
	}
	template <typename T = void> T UpdateChoseState() {
		return ((T (*)(BRVehicleMachine*))(Il2CppBase() + 0x2651A04))(this);
	}
	template <typename T = void> T UpdateCancelState() {
		return ((T (*)(BRVehicleMachine*))(Il2CppBase() + 0x2651B5C))(this);
	}
	template <typename T = void> T UpdateConfirmState() {
		return ((T (*)(BRVehicleMachine*))(Il2CppBase() + 0x2651CBC))(this);
	}
	template <typename T = void> T TryShowSpawnVehicleEffect() {
		return ((T (*)(BRVehicleMachine*))(Il2CppBase() + 0x2651E1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(BRVehicleMachine*))(Il2CppBase() + 0x2652220))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DoShowChooseItemObj() {
		return ((T (*)(BRVehicleMachine*))(Il2CppBase() + 0x2652224))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DoHideChooseItemObj() {
		return ((T (*)(BRVehicleMachine*))(Il2CppBase() + 0x2652374))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpenAni() {
		return ((T (*)(BRVehicleMachine*))(Il2CppBase() + 0x2652470))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCloseAni() {
		return ((T (*)(BRVehicleMachine*))(Il2CppBase() + 0x2652478))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateCdState() {
		return ((T (*)(BRVehicleMachine*))(Il2CppBase() + 0x2652480))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCountDownStart(float P0) {
		return ((T (*)(BRVehicleMachine*, float))(Il2CppBase() + 0x2652488))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnCountDownEnd() {
		return ((T (*)(BRVehicleMachine*))(Il2CppBase() + 0x2652490))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateChoseState() {
		return ((T (*)(BRVehicleMachine*))(Il2CppBase() + 0x2652498))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateCancelState() {
		return ((T (*)(BRVehicleMachine*))(Il2CppBase() + 0x265249C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateConfirmState() {
		return ((T (*)(BRVehicleMachine*))(Il2CppBase() + 0x26524A0))(this);
	}

};

}
