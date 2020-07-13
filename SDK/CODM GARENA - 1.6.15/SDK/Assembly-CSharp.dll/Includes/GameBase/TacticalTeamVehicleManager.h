#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalTeamVehicleManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalTeamVehicleManager"));
	}

	template <typename T = int32_t> T& MAX_VEHICLE_SHOW() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& HELICOPTER_VIEW_ICON() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& DRIVECAR_VIEW_ICON() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& DRIVEBOAT_VIEW_ICON() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& notRidingVehicleList() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& unpilotedVehicleList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& uiSpriteList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& noneUseUnpilotedVehicle() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVehicleState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateNoneUseUnpilotedVehicleSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVehicleSpriteInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UpdateVehicleSpriteInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortNeedShowVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddNotRidingVehicleList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUISpriteNameByVehicleTypeAndSeatID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TacticalTeamVehicleManager*))(Il2CppBase() + 0x27B1D2C))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(TacticalTeamVehicleManager*))(Il2CppBase() + 0x27B1EC8))(this);
	}
	template <typename T = void> T UpdateVehicleState() {
		return ((T (*)(TacticalTeamVehicleManager*))(Il2CppBase() + 0x27B1F6C))(this);
	}
	template <typename T = void> T UpdateNoneUseUnpilotedVehicleSprite(uintptr_t inSprite) {
		return ((T (*)(TacticalTeamVehicleManager*, uintptr_t))(Il2CppBase() + 0x27B3394))(this, inSprite);
	}
	template <typename T = void> T UpdateVehicleSpriteInfo(uintptr_t inVehicle, uintptr_t inSprite, bool isNoneUseVehicle) {
		return ((T (*)(TacticalTeamVehicleManager*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x27B2C70))(this, inVehicle, inSprite, isNoneUseVehicle);
	}
	template <typename T = void> T UpdateVehicleSpriteInfo_1(uintptr_t inVehicle, uintptr_t inSprite, bool isNoneUseVehicle) {
		return ((T (*)(TacticalTeamVehicleManager*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x27B2FA0))(this, inVehicle, inSprite, isNoneUseVehicle);
	}
	template <typename T = void> T SortNeedShowVehicle() {
		return ((T (*)(TacticalTeamVehicleManager*))(Il2CppBase() + 0x27B29E8))(this);
	}
	template <typename T = void> T AddNotRidingVehicleList(uintptr_t pawn) {
		return ((T (*)(TacticalTeamVehicleManager*, uintptr_t))(Il2CppBase() + 0x27B3B70))(this, pawn);
	}
	template <typename T = Il2CppString*> T GetUISpriteNameByVehicleTypeAndSeatID(uintptr_t vehicleType, uint32_t seatID) {
		return ((T (*)(TacticalTeamVehicleManager*, uintptr_t, uint32_t))(Il2CppBase() + 0x27B38FC))(this, vehicleType, seatID);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalTeamVehicleManager*))(Il2CppBase() + 0x27B3E1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(TacticalTeamVehicleManager*))(Il2CppBase() + 0x27B3E24))(this);
	}

};

}
