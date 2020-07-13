#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuglySceneDataReporter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuglySceneDataReporter"));
	}

	template <typename T = uintptr_t> T& buglyReportFlowData() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& buglyReportMatchInfoData() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T Init() {
		return ((T (*)(BuglySceneDataReporter*))(Il2CppBase() + 0x3C468F4))(this);
	}
	template <typename T = void> T UpdateSceneData(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(BuglySceneDataReporter*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3C468F8))(this, key, value);
	}
	template <typename T = void> T ChangeStage(uintptr_t stage) {
		return ((T (*)(BuglySceneDataReporter*, uintptr_t))(Il2CppBase() + 0x3C469A8))(this, stage);
	}
	template <typename T = void> T ProcessInitWorldGame(int32_t mapId) {
		return ((T (*)(BuglySceneDataReporter*, int32_t))(Il2CppBase() + 0x3C46E9C))(this, mapId);
	}
	template <typename T = void> T StartMatch() {
		return ((T (*)(BuglySceneDataReporter*))(Il2CppBase() + 0x3C46F68))(this);
	}
	template <typename T = void> T ExitMatch() {
		return ((T (*)(BuglySceneDataReporter*))(Il2CppBase() + 0x3C474F8))(this);
	}
	template <typename T = void> T OnMemoryWarning(int32_t assetCount) {
		return ((T (*)(BuglySceneDataReporter*, int32_t))(Il2CppBase() + 0x3C47EA4))(this, assetCount);
	}
	template <typename T = void> T OnFootPrintDangerousWarning(int32_t nowFootPrint, int32_t lastFootPrint, int32_t peakFootPrint, int32_t threshold, int32_t warningCount) {
		return ((T (*)(BuglySceneDataReporter*, int32_t, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x3C47FF0))(this, nowFootPrint, lastFootPrint, peakFootPrint, threshold, warningCount);
	}
	template <typename T = void> T SetLocalPlayerRoleId(uint64_t roleId, uint32_t UltID) {
		return ((T (*)(BuglySceneDataReporter*, uint64_t, uint32_t))(Il2CppBase() + 0x3C4838C))(this, roleId, UltID);
	}
	template <typename T = void> T SetLocalPlayerWeapon(int32_t itemId, int32_t actorId) {
		return ((T (*)(BuglySceneDataReporter*, int32_t, int32_t))(Il2CppBase() + 0x3C48480))(this, itemId, actorId);
	}
	template <typename T = void> T SetLocalPlayerInVehicle(bool inVehicle, int32_t VehicleType) {
		return ((T (*)(BuglySceneDataReporter*, bool, int32_t))(Il2CppBase() + 0x3C4855C))(this, inVehicle, VehicleType);
	}
	template <typename T = void> T SetLocalPlayerUltID(uint32_t UltID) {
		return ((T (*)(BuglySceneDataReporter*, uint32_t))(Il2CppBase() + 0x3C48640))(this, UltID);
	}

};

}
